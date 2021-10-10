/*
==============
R_ToggleLightmapAtlasFrame
==============
*/

unsigned int __fastcall R_ToggleLightmapAtlasFrame()
{
  return ?R_ToggleLightmapAtlasFrame@@YAIXZ();
}

/*
==============
GfxLightmapAtlas::Shutdown
==============
*/

void __fastcall GfxLightmapAtlas::Shutdown(GfxLightmapAtlas *this)
{
  ?Shutdown@GfxLightmapAtlas@@QEAAXXZ(this);
}

/*
==============
R_RequestLightmapAtlasDefrag
==============
*/

void R_RequestLightmapAtlasDefrag(void)
{
  ?R_RequestLightmapAtlasDefrag@@YAXXZ();
}

/*
==============
RB_ProcessGfxLightmapAtlasData
==============
*/

bool __fastcall RB_ProcessGfxLightmapAtlasData(GfxLightmapAtlasDataTemp *tempData, DB_BackendCallbackContext *context)
{
  return ?RB_ProcessGfxLightmapAtlasData@@YA_NPEAUGfxLightmapAtlasDataTemp@@PEAUDB_BackendCallbackContext@@@Z(tempData, context);
}

/*
==============
GfxLightmapAtlas::ApplyLightmapPacking
==============
*/

void __fastcall GfxLightmapAtlas::ApplyLightmapPacking(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *state, const GfxLightmapAtlas::LightmapDesc *lightmapToPack, GfxLightmapAtlas::BinaryTreePacker *packer, unsigned int lightmapIndex, unsigned int nodeIndex, unsigned int slice)
{
  ?ApplyLightmapPacking@GfxLightmapAtlas@@AEBAXAEAULightmapAtlasState@1@AEBULightmapDesc@1@AEAUBinaryTreePacker@1@III@Z(this, state, lightmapToPack, packer, lightmapIndex, nodeIndex, slice);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::NodeIndexToPosition
==============
*/

void __fastcall GfxLightmapAtlas::BinaryTreePacker::NodeIndexToPosition(int atlasSize, int nodeIndex, int *outX, int *outY, int *outWidth, int *outHeight)
{
  ?NodeIndexToPosition@BinaryTreePacker@GfxLightmapAtlas@@SAXHHAEAH000@Z(atlasSize, nodeIndex, outX, outY, outWidth, outHeight);
}

/*
==============
GfxLightmapAtlas::InitLightmapSetDesc
==============
*/

void __fastcall GfxLightmapAtlas::InitLightmapSetDesc(GfxLightmapAtlas *this, GfxPixelFormat *textureFormats)
{
  ?InitLightmapSetDesc@GfxLightmapAtlas@@AEAAXQEAW4GfxPixelFormat@@@Z(this, textureFormats);
}

/*
==============
GfxLightmapAtlas::RemoveLightmap
==============
*/

void __fastcall GfxLightmapAtlas::RemoveLightmap(GfxLightmapAtlas *this, XZoneHandleUnique zoneId)
{
  ?RemoveLightmap@GfxLightmapAtlas@@QEAAXUXZoneHandleUnique@@@Z(this, zoneId);
}

/*
==============
RB_GetNumLightmapAtlasSlices
==============
*/

unsigned int __fastcall RB_GetNumLightmapAtlasSlices(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  return ?RB_GetNumLightmapAtlasSlices@@YAIPEBUGfxBackEndData@@W4GfxLightmapType@@@Z(data, lightmapType);
}

/*
==============
GfxLightmapAtlas::UpdateWaitForTextureFree
==============
*/

void __fastcall GfxLightmapAtlas::UpdateWaitForTextureFree(GfxLightmapAtlas *this)
{
  ?UpdateWaitForTextureFree@GfxLightmapAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightmapAtlas::Pack
==============
*/

void __fastcall GfxLightmapAtlas::Pack(GfxLightmapAtlas *this, const GfxLightmapAtlas::LightmapDesc *lightmapsToPack, const bitarray<1024> *lightmapsUsed, GfxLightmapAtlas::LightmapAtlasState *targetState, GfxLightmapAtlas::BinaryTreePacker *packers)
{
  ?Pack@GfxLightmapAtlas@@AEBAXPEBULightmapDesc@1@AEBV?$bitarray@$0EAA@@@AEAULightmapAtlasState@1@QEAUBinaryTreePacker@1@@Z(this, lightmapsToPack, lightmapsUsed, targetState, packers);
}

/*
==============
R_GetLightmapAtlasTexture
==============
*/

const GfxImage *__fastcall R_GetLightmapAtlasTexture(const GfxBackEndData *data, GfxLightmapType lightmapType, unsigned int index)
{
  return ?R_GetLightmapAtlasTexture@@YAPEBUGfxImage@@PEBUGfxBackEndData@@W4GfxLightmapType@@I@Z(data, lightmapType, index);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::Init
==============
*/

void __fastcall GfxLightmapAtlas::BinaryTreePacker::Init(GfxLightmapAtlas::BinaryTreePacker *this)
{
  ?Init@BinaryTreePacker@GfxLightmapAtlas@@QEAAXXZ(this);
}

/*
==============
RB_UpdateLightmapAtlas
==============
*/

void __fastcall RB_UpdateLightmapAtlas(const GfxBackEndData *data, ComputeCmdBufState *state)
{
  ?RB_UpdateLightmapAtlas@@YAXPEBUGfxBackEndData@@PEAUComputeCmdBufState@@@Z(data, state);
}

/*
==============
GfxLightmapAtlas::UpdateIdle
==============
*/

void __fastcall GfxLightmapAtlas::UpdateIdle(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  ?UpdateIdle@GfxLightmapAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
GfxLightmapAtlas::PrepareCopySource
==============
*/

void __fastcall GfxLightmapAtlas::PrepareCopySource(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapRaw *newLightmaps, unsigned int numNewLightmaps)
{
  ?PrepareCopySource@GfxLightmapAtlas@@AEAAXPEAUComputeCmdBufState@@PEAUGfxLightmapRaw@@I@Z(this, computeState, newLightmaps, numNewLightmaps);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::MarkNodeEmpty
==============
*/

void __fastcall GfxLightmapAtlas::BinaryTreePacker::MarkNodeEmpty(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  ?MarkNodeEmpty@BinaryTreePacker@GfxLightmapAtlas@@QEAAXH@Z(this, nodeIndex);
}

/*
==============
GfxLightmapAtlas::GetPacking
==============
*/

bool __fastcall GfxLightmapAtlas::GetPacking(GfxLightmapAtlas *this, unsigned int worldLightmapIndex, unsigned int *x, unsigned int *y, unsigned int *width, unsigned int *height, unsigned int *slice)
{
  return ?GetPacking@GfxLightmapAtlas@@QEBA_NIAEAI0000@Z(this, worldLightmapIndex, x, y, width, height, slice);
}

/*
==============
GfxLightmapAtlas::UpdatePackingBuffer
==============
*/

void __fastcall GfxLightmapAtlas::UpdatePackingBuffer(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  ?UpdatePackingBuffer@GfxLightmapAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
GfxLightmapAtlas::PrepareForCopy
==============
*/

void __fastcall GfxLightmapAtlas::PrepareForCopy(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  ?PrepareForCopy@GfxLightmapAtlas@@AEAAXAEAULightmapAtlasState@1@@Z(this, targetState);
}

/*
==============
RB_GetLightimapPacking
==============
*/

bool __fastcall RB_GetLightimapPacking(GfxLightmapType lightmapType, unsigned int index, unsigned int *x, unsigned int *y, unsigned int *width, unsigned int *height, unsigned int *slice)
{
  return ?RB_GetLightimapPacking@@YA_NW4GfxLightmapType@@IAEAI1111@Z(lightmapType, index, x, y, width, height, slice);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::GetUtilization
==============
*/

double __fastcall GfxLightmapAtlas::BinaryTreePacker::GetUtilization(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  double result; 

  *(float *)&result = ?GetUtilization@BinaryTreePacker@GfxLightmapAtlas@@QEBAMH@Z(this, nodeIndex);
  return result;
}

/*
==============
RB_Debug_GetLightmapAtlasLightmapDesc
==============
*/

bool __fastcall RB_Debug_GetLightmapAtlasLightmapDesc(const GfxBackEndData *data, GfxLightmapType lightmapType, unsigned int lightmapIndex, unsigned int *width, unsigned int *height, unsigned int *worldIndex, XZoneHandleUnique *zone)
{
  return ?RB_Debug_GetLightmapAtlasLightmapDesc@@YA_NPEBUGfxBackEndData@@W4GfxLightmapType@@IAEAI22AEAUXZoneHandleUnique@@@Z(data, lightmapType, lightmapIndex, width, height, worldIndex, zone);
}

/*
==============
GfxLightmapAtlas::Update
==============
*/

void __fastcall GfxLightmapAtlas::Update(GfxLightmapAtlas *this, const GfxBackEndData *data, ComputeCmdBufState *state)
{
  ?Update@GfxLightmapAtlas@@QEAAXPEBUGfxBackEndData@@PEAUComputeCmdBufState@@@Z(this, data, state);
}

/*
==============
GfxLightmapAtlas::PrepareCopyDestAndFlush
==============
*/

void __fastcall GfxLightmapAtlas::PrepareCopyDestAndFlush(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapAtlas::LightmapAtlasState *targetState, bool targetStateActive)
{
  ?PrepareCopyDestAndFlush@GfxLightmapAtlas@@AEAAXPEAUComputeCmdBufState@@PEAULightmapAtlasState@1@_N@Z(this, computeState, targetState, targetStateActive);
}

/*
==============
R_GetLightMapCommitTotal
==============
*/

unsigned __int64 __fastcall R_GetLightMapCommitTotal()
{
  return ?R_GetLightMapCommitTotal@@YA_KXZ();
}

/*
==============
GfxLightmapAtlas::Init
==============
*/

void __fastcall GfxLightmapAtlas::Init(GfxLightmapAtlas *this, GfxPixelFormat *textureFormats)
{
  ?Init@GfxLightmapAtlas@@QEAAXQEAW4GfxPixelFormat@@@Z(this, textureFormats);
}

/*
==============
GfxLightmapAtlas::ScheduleCopies
==============
*/

void __fastcall GfxLightmapAtlas::ScheduleCopies(GfxLightmapAtlas *this, const GfxLightmapAtlas::LightmapDesc *lightmaps, const bitarray<1024> *lightmapsUsed, const GfxLightmapAtlas::LightmapAtlasState *oldState, const GfxLightmapAtlas::LightmapAtlasState *newState)
{
  ?ScheduleCopies@GfxLightmapAtlas@@AEBAXPEBULightmapDesc@1@AEBV?$bitarray@$0EAA@@@AEBULightmapAtlasState@1@2@Z(this, lightmaps, lightmapsUsed, oldState, newState);
}

/*
==============
GfxLightmapAtlas::InitLightmapAtlasState
==============
*/

void __fastcall GfxLightmapAtlas::InitLightmapAtlasState(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *state)
{
  ?InitLightmapAtlasState@GfxLightmapAtlas@@AEBAXAEAULightmapAtlasState@1@@Z(this, state);
}

/*
==============
R_InitLightmapAtlas
==============
*/

void R_InitLightmapAtlas(void)
{
  ?R_InitLightmapAtlas@@YAXXZ();
}

/*
==============
GfxLightmapAtlas::GetLevelForSize
==============
*/

int __fastcall GfxLightmapAtlas::GetLevelForSize(unsigned int atlasSize, unsigned int width, unsigned int height)
{
  return ?GetLevelForSize@GfxLightmapAtlas@@CAHIII@Z(atlasSize, width, height);
}

/*
==============
GfxLightmapAtlas::FlipActiveState
==============
*/

void __fastcall GfxLightmapAtlas::FlipActiveState(GfxLightmapAtlas *this)
{
  ?FlipActiveState@GfxLightmapAtlas@@AEAAXXZ(this);
}

/*
==============
R_ShutdownLightmapAtlas
==============
*/

void R_ShutdownLightmapAtlas(void)
{
  ?R_ShutdownLightmapAtlas@@YAXXZ();
}

/*
==============
GfxLightmapAtlas::ShouldDefragment
==============
*/

bool __fastcall GfxLightmapAtlas::ShouldDefragment(GfxLightmapAtlas *this)
{
  return ?ShouldDefragment@GfxLightmapAtlas@@AEBA_NXZ(this);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::MarkNodeFull
==============
*/

void __fastcall GfxLightmapAtlas::BinaryTreePacker::MarkNodeFull(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  ?MarkNodeFull@BinaryTreePacker@GfxLightmapAtlas@@QEAAXH@Z(this, nodeIndex);
}

/*
==============
GfxLightmapAtlas::TryPackLightmap
==============
*/

bool __fastcall GfxLightmapAtlas::TryPackLightmap(GfxLightmapAtlas *this, unsigned int atlasSize, unsigned int numSlices, unsigned int lightmapIndex, unsigned int *outNodeIndex, unsigned int *outSlice)
{
  return ?TryPackLightmap@GfxLightmapAtlas@@AEBA_NIIIAEAI0@Z(this, atlasSize, numSlices, lightmapIndex, outNodeIndex, outSlice);
}

/*
==============
GfxLightmapAtlas::FreeOldTexture
==============
*/

void __fastcall GfxLightmapAtlas::FreeOldTexture(GfxLightmapAtlas *this)
{
  ?FreeOldTexture@GfxLightmapAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightmapAtlas::GetLightmapDesc
==============
*/

bool __fastcall GfxLightmapAtlas::GetLightmapDesc(GfxLightmapAtlas *this, unsigned int lightmapIndex, unsigned int *width, unsigned int *height, unsigned int *worldIndex, XZoneHandleUnique *zone)
{
  return ?GetLightmapDesc@GfxLightmapAtlas@@QEBA_NIAEAI00AEAUXZoneHandleUnique@@@Z(this, lightmapIndex, width, height, worldIndex, zone);
}

/*
==============
R_GetLightmapAtlasPackingBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetLightmapAtlasPackingBuffer(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  return ?R_GetLightmapAtlasPackingBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@W4GfxLightmapType@@@Z(data, lightmapType);
}

/*
==============
GetLightmapAtlasTextureSliceRWView
==============
*/

const GfxShaderTextureRWView *__fastcall GetLightmapAtlasTextureSliceRWView(const GfxBackEndData *data, GfxLightmapType lightmapType, unsigned int index, unsigned int slice)
{
  return ?GetLightmapAtlasTextureSliceRWView@@YAPEBUGfxShaderTextureRWView@@PEBUGfxBackEndData@@W4GfxLightmapType@@II@Z(data, lightmapType, index, slice);
}

/*
==============
RB_Debug_GetLightmapAtlasLightmapsCount
==============
*/

unsigned int __fastcall RB_Debug_GetLightmapAtlasLightmapsCount(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  return ?RB_Debug_GetLightmapAtlasLightmapsCount@@YAIPEBUGfxBackEndData@@W4GfxLightmapType@@@Z(data, lightmapType);
}

/*
==============
GfxLightmapAtlas::Defragment
==============
*/

void __fastcall GfxLightmapAtlas::Defragment(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  ?Defragment@GfxLightmapAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
R_GetLightmapAtlasTextureSize
==============
*/

unsigned int __fastcall R_GetLightmapAtlasTextureSize(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  return ?R_GetLightmapAtlasTextureSize@@YAIPEBUGfxBackEndData@@W4GfxLightmapType@@@Z(data, lightmapType);
}

/*
==============
GfxLightmapAtlas::ScheduleWaitForCopies
==============
*/

void __fastcall GfxLightmapAtlas::ScheduleWaitForCopies(GfxLightmapAtlas *this)
{
  ?ScheduleWaitForCopies@GfxLightmapAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightmapAtlas::FlipToEmptyAtlas
==============
*/

void __fastcall GfxLightmapAtlas::FlipToEmptyAtlas(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  ?FlipToEmptyAtlas@GfxLightmapAtlas@@AEAAXAEAULightmapAtlasState@1@@Z(this, targetState);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::Clear
==============
*/

void __fastcall GfxLightmapAtlas::BinaryTreePacker::Clear(GfxLightmapAtlas::BinaryTreePacker *this)
{
  ?Clear@BinaryTreePacker@GfxLightmapAtlas@@QEAAXXZ(this);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::FindFreeNode
==============
*/

int __fastcall GfxLightmapAtlas::BinaryTreePacker::FindFreeNode(GfxLightmapAtlas::BinaryTreePacker *this, int targetLevel, int nodeIndex, int level)
{
  return ?FindFreeNode@BinaryTreePacker@GfxLightmapAtlas@@QEBAHHHH@Z(this, targetLevel, nodeIndex, level);
}

/*
==============
DB_BackendCallbackDataBufferGetSize
==============
*/

unsigned __int64 __fastcall DB_BackendCallbackDataBufferGetSize(const GfxLightmapAtlasDataTemp *tempData)
{
  return ?DB_BackendCallbackDataBufferGetSize@@YA_KPEBUGfxLightmapAtlasDataTemp@@@Z(tempData);
}

/*
==============
GfxLightmapAtlas::ProcessRemovedLightmaps
==============
*/

void __fastcall GfxLightmapAtlas::ProcessRemovedLightmaps(GfxLightmapAtlas *this)
{
  ?ProcessRemovedLightmaps@GfxLightmapAtlas@@AEAAXXZ(this);
}

/*
==============
GfxLightmapAtlas::PostCopy
==============
*/

void __fastcall GfxLightmapAtlas::PostCopy(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  ?PostCopy@GfxLightmapAtlas@@AEAAXPEAUComputeCmdBufState@@PEAULightmapAtlasState@1@@Z(this, computeState, targetState);
}

/*
==============
GfxLightmapAtlas::PrepareRenderResources
==============
*/

void __fastcall GfxLightmapAtlas::PrepareRenderResources(GfxLightmapAtlas *this, const GfxBackEndData *data)
{
  ?PrepareRenderResources@GfxLightmapAtlas@@AEAAXPEBUGfxBackEndData@@@Z(this, data);
}

/*
==============
GfxLightmapAtlas::GetLightmapCount
==============
*/

unsigned int __fastcall GfxLightmapAtlas::GetLightmapCount(GfxLightmapAtlas *this)
{
  return ?GetLightmapCount@GfxLightmapAtlas@@QEBAIXZ(this);
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::MarkNodePartial
==============
*/

void __fastcall GfxLightmapAtlas::BinaryTreePacker::MarkNodePartial(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  ?MarkNodePartial@BinaryTreePacker@GfxLightmapAtlas@@AEAAXH@Z(this, nodeIndex);
}

/*
==============
GfxLightmapAtlas::AllocLightmap
==============
*/

unsigned int __fastcall GfxLightmapAtlas::AllocLightmap(GfxLightmapAtlas *this, unsigned int width, unsigned int height, XZoneHandleUnique transientZone, unsigned int worldIndex)
{
  return ?AllocLightmap@GfxLightmapAtlas@@AEAAIIIUXZoneHandleUnique@@I@Z(this, width, height, transientZone, worldIndex);
}

/*
==============
R_RemoveZoneLightmapsFromAtlas
==============
*/

void __fastcall R_RemoveZoneLightmapsFromAtlas(XZoneHandleUnique zone)
{
  ?R_RemoveZoneLightmapsFromAtlas@@YAXUXZoneHandleUnique@@@Z(zone);
}

/*
==============
RB_IsLightmapAtlasIdle
==============
*/

bool __fastcall RB_IsLightmapAtlasIdle(GfxLightmapType lightmapType)
{
  return ?RB_IsLightmapAtlasIdle@@YA_NW4GfxLightmapType@@@Z(lightmapType);
}

/*
==============
GfxLightmapAtlas::PrepareForCopyToActiveAtlas
==============
*/

void __fastcall GfxLightmapAtlas::PrepareForCopyToActiveAtlas(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  ?PrepareForCopyToActiveAtlas@GfxLightmapAtlas@@AEAAXAEAULightmapAtlasState@1@@Z(this, targetState);
}

/*
==============
GfxLightmapAtlas::UpdateCopying
==============
*/

void __fastcall GfxLightmapAtlas::UpdateCopying(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  ?UpdateCopying@GfxLightmapAtlas@@AEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
GfxLightmapAtlas::AddLightmaps
==============
*/

bool __fastcall GfxLightmapAtlas::AddLightmaps(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapRaw *newLightmaps, unsigned int numNewLightmaps, XZoneHandleUnique transientZone, unsigned int startWorldIndex, unsigned int *copyDoneFence)
{
  return ?AddLightmaps@GfxLightmapAtlas@@QEAA_NPEAUComputeCmdBufState@@PEAUGfxLightmapRaw@@IUXZoneHandleUnique@@IAEAI@Z(this, computeState, newLightmaps, numNewLightmaps, transientZone, startWorldIndex, copyDoneFence);
}

/*
==============
GfxLightmapAtlas::AddLightmaps
==============
*/
char GfxLightmapAtlas::AddLightmaps(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapRaw *newLightmaps, unsigned int numNewLightmaps, XZoneHandleUnique transientZone, unsigned int startWorldIndex, unsigned int *copyDoneFence)
{
  __int64 v9; 
  bool v10; 
  unsigned int v12; 
  unsigned __int16 *p_width; 
  __int64 v14; 
  __int64 v15; 
  char v16; 
  __int64 m_activeAtlasState; 
  unsigned int m_textureSize; 
  unsigned int m_numTextureSlices; 
  __int64 v20; 
  unsigned int v21; 
  char v22; 
  __int64 v23; 
  __int64 v24; 
  GfxLightmapAtlas::LightmapAtlasState *v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  GfxTextureId *p_textureId; 
  __int64 v32; 
  unsigned int *v33; 
  unsigned __int16 *v34; 
  GfxLightmapAtlas::Packing *v35; 
  GfxTextureId *v36; 
  __int64 v37; 
  const GfxTexture *Resident; 
  GfxTextureId *v39; 
  const GfxTexture *v40; 
  char v41; 
  char v42; 
  unsigned int outNodeIndex[64]; 
  unsigned int lightmapIndex[32]; 

  v9 = numNewLightmaps;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1062, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( this->m_zonePendingAdd.m_zoneIndex != 0xFFFF && this->m_zonePendingAdd.m_packed != transientZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1064, ASSERT_TYPE_ASSERT, "(( m_zonePendingAdd.m_zoneIndex == INVALID_ZONE_INDEX ) || ( m_zonePendingAdd.m_packed == transientZone.m_packed ))", (const char *)&queryFormat, "( m_zonePendingAdd.m_zoneIndex == INVALID_ZONE_INDEX ) || ( m_zonePendingAdd.m_packed == transientZone.m_packed )") )
    __debugbreak();
  v10 = this->m_state == IDLE;
  this->m_zonePendingAdd = transientZone;
  if ( !v10 )
    return 0;
  GfxLightmapAtlas::ProcessRemovedLightmaps(this);
  if ( (unsigned int)v9 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1097, ASSERT_TYPE_ASSERT, "(numNewLightmaps < MAX_ZONE_LIGHTMAPS)", (const char *)&queryFormat, "numNewLightmaps < MAX_ZONE_LIGHTMAPS") )
    __debugbreak();
  v12 = 0;
  if ( (_DWORD)v9 )
  {
    p_width = &newLightmaps->textures[2].desc.width;
    v14 = 0i64;
    do
    {
      if ( *(p_width - 40) != *(p_width - 20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1105, ASSERT_TYPE_ASSERT, "(newLightmaps[i].textures[0].desc.width == newLightmaps[i].textures[1].desc.width)", (const char *)&queryFormat, "newLightmaps[i].textures[0].desc.width == newLightmaps[i].textures[1].desc.width") )
        __debugbreak();
      if ( *(p_width - 40) != *p_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1106, ASSERT_TYPE_ASSERT, "(newLightmaps[i].textures[0].desc.width == newLightmaps[i].textures[2].desc.width)", (const char *)&queryFormat, "newLightmaps[i].textures[0].desc.width == newLightmaps[i].textures[2].desc.width") )
        __debugbreak();
      if ( *(p_width - 39) != *(p_width - 19) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1108, ASSERT_TYPE_ASSERT, "(newLightmaps[i].textures[0].desc.height == newLightmaps[i].textures[1].desc.height)", (const char *)&queryFormat, "newLightmaps[i].textures[0].desc.height == newLightmaps[i].textures[1].desc.height") )
        __debugbreak();
      if ( *(p_width - 39) != p_width[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1109, ASSERT_TYPE_ASSERT, "(newLightmaps[i].textures[0].desc.height == newLightmaps[i].textures[2].desc.height)", (const char *)&queryFormat, "newLightmaps[i].textures[0].desc.height == newLightmaps[i].textures[2].desc.height") )
        __debugbreak();
      lightmapIndex[v14] = GfxLightmapAtlas::AllocLightmap(this, *(p_width - 40), *(p_width - 39), transientZone, v12 + startWorldIndex);
      outNodeIndex[v14] = -1;
      outNodeIndex[v14 + 32] = -1;
      ++v12;
      ++v14;
      p_width += 60;
    }
    while ( v12 < (unsigned int)v9 );
  }
  v15 = 0i64;
  this->m_zonePendingAdd.m_zoneIndex = -1;
  v16 = 1;
  m_activeAtlasState = this->m_activeAtlasState;
  m_textureSize = this->m_atlasState[m_activeAtlasState].m_textureSize;
  m_numTextureSlices = this->m_atlasState[m_activeAtlasState].m_numTextureSlices;
  if ( (_DWORD)v9 )
  {
    v20 = 0i64;
    while ( 1 )
    {
      v21 = lightmapIndex[v20];
      if ( !GfxLightmapAtlas::TryPackLightmap(this, m_textureSize, m_numTextureSlices, v21, &outNodeIndex[v15], &outNodeIndex[v15 + 32]) )
        break;
      GfxLightmapAtlas::ApplyLightmapPacking(this, &this->m_atlasState[this->m_activeAtlasState], &this->m_lightmaps[v21], &this->m_packers[(unsigned __int64)outNodeIndex[v20 + 32]], v21, outNodeIndex[v20], outNodeIndex[v20 + 32]);
      v15 = (unsigned int)(v15 + 1);
      ++v20;
      if ( (unsigned int)v15 >= (unsigned int)v9 )
        goto LABEL_34;
    }
    v16 = 0;
  }
LABEL_34:
  v22 = 0;
  v41 = 0;
  v42 = 0;
  if ( this->m_flipTexturePending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1142, ASSERT_TYPE_ASSERT, "(!m_flipTexturePending)", (const char *)&queryFormat, "!m_flipTexturePending") )
    __debugbreak();
  v23 = 3i64;
  if ( v16 )
  {
    if ( rbBackendDataCopier.m_commands[0].m_writePtr != rbBackendDataCopier.m_commands[0].m_readPtr || (v41 = 1, !Sys_IsBackendOwnerThread()) )
      v41 = 0;
    v30 = 3i64;
    p_textureId = &this->m_atlasState[this->m_activeAtlasState].m_texture[0].textureId;
    do
    {
      RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 0, *p_textureId);
      p_textureId += 58;
      --v30;
    }
    while ( v30 );
    v29 = this->m_activeAtlasState;
    v22 = 1;
    v42 = 1;
  }
  else
  {
    v24 = this->m_activeAtlasState;
    v25 = &this->m_atlasState[v24];
    if ( (_DWORD)v9 )
    {
      v26 = 0i64;
      v27 = v9;
      do
      {
        if ( outNodeIndex[v26] != -1 )
        {
          if ( outNodeIndex[v26 + 32] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1161, ASSERT_TYPE_ASSERT, "(newLightmapSlices[i] != -1)", (const char *)&queryFormat, "newLightmapSlices[i] != -1") )
            __debugbreak();
          v28 = (int)lightmapIndex[v26];
          v25->m_packing[v28].nodeIndex = -1;
          v25->m_packing[v28].slice = -1;
        }
        ++v26;
        --v27;
      }
      while ( v27 );
      LODWORD(v24) = this->m_activeAtlasState;
      v22 = 0;
    }
    GfxLightmapAtlas::PrepareForCopy(this, &this->m_atlasState[1 - (int)v24]);
    GfxLightmapAtlas::ScheduleCopies(this, this->m_lightmaps, &this->m_lightmapsUsed, &this->m_atlasState[this->m_activeAtlasState], &this->m_atlasState[1 - this->m_activeAtlasState]);
    v29 = 1 - this->m_activeAtlasState;
  }
  v32 = v29;
  if ( (_DWORD)v9 )
  {
    v33 = lightmapIndex;
    v34 = &newLightmaps->textures[0].desc.width;
    do
    {
      v35 = &this->m_atlasState[v32].m_packing[*v33];
      RB_BackendDataCopier::CopyTexRect(&rbBackendDataCopier, 0, *((GfxTextureId *)v34 + 3), 0, 0, *v34, v34[1], 0, 0, this->m_atlasState[v32].m_texture[0].textureId, v35->x, v35->y, 0, v35->slice);
      RB_BackendDataCopier::CopyTexRect(&rbBackendDataCopier, 0, *((GfxTextureId *)v34 + 13), 0, 0, v34[20], v34[21], 0, 0, this->m_atlasState[v32].m_texture[1].textureId, v35->x, v35->y, 0, v35->slice);
      RB_BackendDataCopier::CopyTexRect(&rbBackendDataCopier, 0, *((GfxTextureId *)v34 + 23), 0, 0, v34[40], v34[41], 0, 0, this->m_atlasState[v32].m_texture[2].textureId, v35->x, v35->y, 0, v35->slice);
      ++v33;
      v34 += 60;
      --v9;
    }
    while ( v9 );
    v22 = v42;
  }
  this->m_copyingFence = 0;
  RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 0, &this->m_copyingFence, 1u);
  this->m_state = INITIALIZING;
  this->m_numWaitFrames = 0;
  *copyDoneFence = RB_BackendDataCopier::AllocAndInsertTempFence(&rbBackendDataCopier, 0, 0, 1u);
  if ( !v22 )
  {
    v36 = &this->m_atlasState[v32].m_texture[0].textureId;
    v37 = 3i64;
    do
    {
      Resident = R_Texture_GetResident(*v36);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      v36 += 58;
      --v37;
    }
    while ( v37 );
  }
  R_FlushResourceTransitions(computeState);
  if ( v41 )
  {
    if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1216, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
      __debugbreak();
    RB_BackendDataCopier::UpdateSingleQueue(&rbBackendDataCopier, computeState, 0, 0);
    if ( this->m_copyingFence == 1 )
    {
      if ( RB_BackendDataCopier::CheckTempFence(&rbBackendDataCopier, *copyDoneFence) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1224, ASSERT_TYPE_ASSERT, "(rbBackendDataCopier.CheckTempFence( copyDoneFence ) == FENCE_DONE)", (const char *)&queryFormat, "rbBackendDataCopier.CheckTempFence( copyDoneFence ) == FENCE_DONE") )
        __debugbreak();
      v39 = &this->m_atlasState[v32].m_texture[0].textureId;
      do
      {
        if ( *v39 )
        {
          if ( !RB_BackendDataCopier::RemoveRenderableCopyDest(&rbBackendDataCopier, 0, *v39) )
          {
            v40 = R_Texture_GetResident(*v39);
            R_HW_AddResourceTransition(computeState, v40, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
        }
        v39 += 58;
        --v23;
      }
      while ( v23 );
      R_FlushResourceTransitions(computeState);
      this->m_state = IDLE;
      GfxLightmapAtlas::UpdatePackingBuffer(this, computeState);
    }
  }
  return 1;
}

/*
==============
GfxLightmapAtlas::AllocLightmap
==============
*/
__int64 GfxLightmapAtlas::AllocLightmap(GfxLightmapAtlas *this, unsigned int width, unsigned int height, XZoneHandleUnique transientZone, unsigned int worldIndex)
{
  unsigned int v9; 
  bitarray<1024> *p_m_lightmapsUsed; 
  unsigned int i; 
  unsigned int v12; 
  __int64 v13; 
  __int64 result; 
  unsigned int v15; 
  int v16; 

  if ( width != height && 2 * height != width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1516, ASSERT_TYPE_ASSERT, "(( width == height ) || ( 2 * height == width ))", (const char *)&queryFormat, "( width == height ) || ( 2 * height == width )") )
    __debugbreak();
  if ( ((width - 1) & width) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1517, ASSERT_TYPE_ASSERT, "(( width & ( width - 1 ) ) == 0)", (const char *)&queryFormat, "( width & ( width - 1 ) ) == 0") )
    __debugbreak();
  if ( ((height - 1) & height) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1518, ASSERT_TYPE_ASSERT, "(( height & ( height - 1 ) ) == 0)", (const char *)&queryFormat, "( height & ( height - 1 ) ) == 0") )
    __debugbreak();
  if ( width - 64 > 0xFC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1519, ASSERT_TYPE_ASSERT, "(( width >= MIN_LIGHTMAP_SIZE ) && ( width <= MAX_LIGHTMAP_SIZE ))", (const char *)&queryFormat, "( width >= MIN_LIGHTMAP_SIZE ) && ( width <= MAX_LIGHTMAP_SIZE )") )
    __debugbreak();
  if ( height - 64 > 0xFC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1520, ASSERT_TYPE_ASSERT, "(( height >= MIN_LIGHTMAP_SIZE ) && ( height <= MAX_LIGHTMAP_SIZE ))", (const char *)&queryFormat, "( height >= MIN_LIGHTMAP_SIZE ) && ( height <= MAX_LIGHTMAP_SIZE )") )
    __debugbreak();
  if ( worldIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1521, ASSERT_TYPE_ASSERT, "(worldIndex < MAX_WORLD_LIGHTMAPS)", (const char *)&queryFormat, "worldIndex < MAX_WORLD_LIGHTMAPS") )
    __debugbreak();
  v9 = 0;
  p_m_lightmapsUsed = &this->m_lightmapsUsed;
  for ( i = 0; i < 0x20; ++i )
  {
    v12 = __lzcnt(~p_m_lightmapsUsed->array[0]);
    v9 += v12;
    if ( v12 < 0x20 )
      break;
    p_m_lightmapsUsed = (bitarray<1024> *)((char *)p_m_lightmapsUsed + 4);
  }
  if ( v9 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1524, ASSERT_TYPE_ASSERT, "(newLightmapIndex < MAX_ATLASED_LIGHTMAPS)", (const char *)&queryFormat, "newLightmapIndex < MAX_ATLASED_LIGHTMAPS") )
    __debugbreak();
  v13 = v9;
  this->m_lightmaps[v13].width = width;
  this->m_lightmaps[v13].height = height;
  this->m_lightmaps[v13].transientZone = transientZone;
  this->m_lightmaps[v13].worldIndex = worldIndex;
  if ( this->m_lightmapWorldIndexMapping[worldIndex] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1532, ASSERT_TYPE_ASSERT, "(m_lightmapWorldIndexMapping[worldIndex] == 0xFFFFFFFF)", (const char *)&queryFormat, "m_lightmapWorldIndexMapping[worldIndex] == 0xFFFFFFFF") )
    __debugbreak();
  this->m_lightmapWorldIndexMapping[worldIndex] = v9;
  if ( v9 >= 0x400 )
  {
    v16 = 1024;
    v15 = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v15, v16) )
      __debugbreak();
  }
  result = v9;
  this->m_lightmapsUsed.array[(unsigned __int64)v9 >> 5] |= 0x80000000 >> (v9 & 0x1F);
  return result;
}

/*
==============
GfxLightmapAtlas::ApplyLightmapPacking
==============
*/
void GfxLightmapAtlas::ApplyLightmapPacking(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *state, const GfxLightmapAtlas::LightmapDesc *lightmapToPack, GfxLightmapAtlas::BinaryTreePacker *packer, unsigned int lightmapIndex, unsigned int nodeIndex, unsigned int slice)
{
  unsigned int v7; 
  signed int m_textureSize; 
  int v11; 
  int v12; 
  char *v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  const GfxLightmapAtlas::LightmapDesc *v26; 
  bool v27; 
  __int64 v28; 
  const GfxLightmapAtlas::LightmapDesc *v29; 
  char v30; 

  v7 = nodeIndex;
  v29 = lightmapToPack;
  if ( nodeIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1324, ASSERT_TYPE_ASSERT, "(nodeIndex != -1)", (const char *)&queryFormat, "nodeIndex != -1") )
    __debugbreak();
  if ( slice >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1325, ASSERT_TYPE_ASSERT, "(slice < MAX_ATLAS_SLICES)", (const char *)&queryFormat, "slice < MAX_ATLAS_SLICES") )
    __debugbreak();
  m_textureSize = state->m_textureSize;
  v11 = 0;
  v12 = nodeIndex;
  if ( (int)nodeIndex > 0 )
  {
    v13 = &v30;
    do
    {
      *(_DWORD *)v13 = v12;
      v13 += 4;
      ++v11;
      v12 = (v12 - 1) / 2;
    }
    while ( v12 > 0 );
    if ( v11 > 13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1697, ASSERT_TYPE_ASSERT, "(pathLength <= MAX_PATH_LENGTH)", (const char *)&queryFormat, "pathLength <= MAX_PATH_LENGTH") )
      __debugbreak();
  }
  v14 = 0;
  v15 = v11;
  v16 = 0;
  v17 = m_textureSize;
  if ( v11 > 0 )
  {
    v18 = 0;
    do
    {
      v19 = 0;
      v20 = 0;
      v21 = v17 / 2;
      if ( m_textureSize == v17 )
        v20 = v17 / 2;
      else
        v19 = m_textureSize / 2;
      v22 = *((_DWORD *)&v29 + v15 + 1);
      v23 = v20 + v16;
      if ( m_textureSize != v17 )
      {
        v21 = v17;
        if ( m_textureSize != v17 )
          m_textureSize /= 2;
      }
      --v15;
      v24 = 2 * v18 + 1;
      v18 = v22;
      v17 = v21;
      if ( v22 == v24 )
        v23 = v16;
      v16 = v23;
      v25 = v19 + v14;
      if ( v22 == v24 )
        v25 = v14;
      v14 = v25;
    }
    while ( v15 > 0 );
    v7 = nodeIndex;
  }
  v26 = v29;
  if ( v29->width != m_textureSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1330, ASSERT_TYPE_ASSERT, "((int)lightmapToPack.width == nodeWidth)", (const char *)&queryFormat, "(int)lightmapToPack.width == nodeWidth") )
    __debugbreak();
  if ( v26->height != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1331, ASSERT_TYPE_ASSERT, "((int)lightmapToPack.height == nodeHeight)", (const char *)&queryFormat, "(int)lightmapToPack.height == nodeHeight") )
    __debugbreak();
  v27 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)packer, 2 * v7 + 1);
  if ( v27 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)packer, 2 * v7) ? 2 : 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1333, ASSERT_TYPE_ASSERT, "(packer.GetNodeState( nodeIndex ) == BinaryTreePacker::EMPTY)", (const char *)&queryFormat, "packer.GetNodeState( nodeIndex ) == BinaryTreePacker::EMPTY") )
    __debugbreak();
  GfxLightmapAtlas::BinaryTreePacker::MarkNodeFull(packer, v7);
  v28 = lightmapIndex;
  state->m_packing[v28].x = v14;
  state->m_packing[v28].y = v16;
  state->m_packing[lightmapIndex].nodeIndex = v7;
  state->m_packing[v28].slice = slice;
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::Clear
==============
*/
void GfxLightmapAtlas::BinaryTreePacker::Clear(GfxLightmapAtlas::BinaryTreePacker *this)
{
  __int64 v1; 

  v1 = 32i64;
  do
  {
    *(_QWORD *)this->m_nodes.array = 0i64;
    *(_QWORD *)&this->m_nodes.array[2] = 0i64;
    *(_QWORD *)&this->m_nodes.array[4] = 0i64;
    this = (GfxLightmapAtlas::BinaryTreePacker *)((char *)this + 64);
    *(_QWORD *)&this[-1].m_nodes.array[502] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[504] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[506] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[508] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[510] = 0i64;
    --v1;
  }
  while ( v1 );
}

/*
==============
DB_BackendCallbackDataBufferGetSize
==============
*/
__int64 DB_BackendCallbackDataBufferGetSize(const GfxLightmapAtlasDataTemp *tempData)
{
  if ( tempData->numLightmaps > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1947, ASSERT_TYPE_ASSERT, "(tempData->numLightmaps <= 32)", (const char *)&queryFormat, "tempData->numLightmaps <= GFX_MAX_ZONE_LIGHTMAPS") )
    __debugbreak();
  return -120i64 * (32 - tempData->numLightmaps) + 3856;
}

/*
==============
GfxLightmapAtlas::Defragment
==============
*/
void GfxLightmapAtlas::Defragment(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  unsigned int v4; 
  bitarray<1024> *p_m_lightmapsUsed; 
  __int64 v6; 
  GfxTextureId *p_textureId; 
  const GfxTexture *Resident; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 817, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( this->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 819, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
    __debugbreak();
  this->m_defragRequested._My_val = 0;
  v4 = 0;
  p_m_lightmapsUsed = &this->m_lightmapsUsed;
  while ( !p_m_lightmapsUsed->array[0] )
  {
    ++v4;
    p_m_lightmapsUsed = (bitarray<1024> *)((char *)p_m_lightmapsUsed + 4);
    if ( v4 >= 0x20 )
    {
      GfxLightmapAtlas::InitLightmapAtlasState(this, &this->m_atlasState[1 - this->m_activeAtlasState]);
      this->m_flipTexturePending = 1;
      this->m_copyingFence = 1;
      goto LABEL_14;
    }
  }
  GfxLightmapAtlas::PrepareForCopy(this, &this->m_atlasState[1 - this->m_activeAtlasState]);
  v6 = 3i64;
  p_textureId = &this->m_atlasState[1 - this->m_activeAtlasState].m_texture[0].textureId;
  do
  {
    Resident = R_Texture_GetResident(*p_textureId);
    R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    p_textureId += 58;
    --v6;
  }
  while ( v6 );
  R_FlushResourceTransitions(state);
  GfxLightmapAtlas::ScheduleCopies(this, this->m_lightmaps, &this->m_lightmapsUsed, &this->m_atlasState[this->m_activeAtlasState], &this->m_atlasState[1 - this->m_activeAtlasState]);
  this->m_copyingFence = 0;
  RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 0, &this->m_copyingFence, 1u);
LABEL_14:
  this->m_state = INITIALIZING;
  this->m_numWaitFrames = 0;
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::FindFreeNode
==============
*/
int GfxLightmapAtlas::BinaryTreePacker::FindFreeNode(GfxLightmapAtlas::BinaryTreePacker *this, int targetLevel, int nodeIndex, int level)
{
  int v8; 
  bool v9; 
  char v10; 
  int result; 

  if ( nodeIndex >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1584, ASSERT_TYPE_ASSERT, "(nodeIndex < MAX_NUM_NODES)", (const char *)&queryFormat, "nodeIndex < MAX_NUM_NODES") )
    __debugbreak();
  v8 = 2 * nodeIndex;
  v9 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * nodeIndex + 1);
  v10 = v9 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * nodeIndex) ? 2 : 0);
  if ( v10 == 2 )
    return -1;
  if ( targetLevel == level )
  {
    if ( !v10 )
      return nodeIndex;
    return -1;
  }
  result = GfxLightmapAtlas::BinaryTreePacker::FindFreeNode(this, targetLevel, v8 + 1, level + 1);
  if ( result == -1 )
    return GfxLightmapAtlas::BinaryTreePacker::FindFreeNode(this, targetLevel, v8 + 2, level + 1);
  return result;
}

/*
==============
GfxLightmapAtlas::FlipActiveState
==============
*/
void GfxLightmapAtlas::FlipActiveState(GfxLightmapAtlas *this)
{
  this->m_activeAtlasState = 1 - this->m_activeAtlasState;
}

/*
==============
GfxLightmapAtlas::FlipToEmptyAtlas
==============
*/
void GfxLightmapAtlas::FlipToEmptyAtlas(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  GfxLightmapAtlas::InitLightmapAtlasState(this, targetState);
  this->m_flipTexturePending = 1;
  this->m_copyingFence = 1;
  this->m_state = INITIALIZING;
  this->m_numWaitFrames = 0;
}

/*
==============
GfxLightmapAtlas::FreeOldTexture
==============
*/
void GfxLightmapAtlas::FreeOldTexture(GfxLightmapAtlas *this)
{
  Mem_PageRange v1; 
  __int64 v2; 
  __int64 v3; 
  GfxLightmapAtlas::LightmapAtlasState *v4; 
  unsigned int *p_rwView; 
  GfxImage *m_texture; 
  __int64 v7; 
  unsigned int *v8; 
  __int64 v9; 
  unsigned __int64 m_textureMemSize; 
  unsigned __int8 *m_textureMem; 
  unsigned int v12; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  v1 = (Mem_PageRange)3i64;
  v2 = 1 - this->m_activeAtlasState;
  v3 = 0i64;
  inoutPageRange = (Mem_PageRange)3i64;
  v4 = &this->m_atlasState[v2];
  p_rwView = &this->m_atlasState[v2].m_textureSliceRWViews[0][0].rwView;
  m_texture = this->m_atlasState[v2].m_texture;
  do
  {
    if ( !Image_IsReleased(m_texture) )
    {
      Image_Release(m_texture);
      v7 = 0i64;
      v8 = p_rwView;
      v9 = 8i64;
      do
      {
        if ( (*v8 & 0xFFFFFFFB) != 0 )
        {
          R_ReleaseShaderTextureRWView(&v4->m_textureSliceRWViews[v3][v7]);
          R_AssignNullShaderTextureRWView(&v4->m_textureSliceRWViews[v3][v7]);
        }
        ++v7;
        v8 += 6;
        --v9;
      }
      while ( v9 );
      v1 = inoutPageRange;
    }
    ++m_texture;
    ++v3;
    p_rwView += 48;
    inoutPageRange = (Mem_PageRange)--*(_QWORD *)&v1;
  }
  while ( v1 );
  if ( v4->m_textureMem )
  {
    if ( !v4->m_textureMemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1007, ASSERT_TYPE_ASSERT, "(prevAtlasState.m_textureMemSize != 0)", (const char *)&queryFormat, "prevAtlasState.m_textureMemSize != 0") )
      __debugbreak();
    m_textureMemSize = v4->m_textureMemSize;
    m_textureMem = v4->m_textureMem;
    inoutPageRange = v4->m_texturePageRange;
    Mem_Paged_DecommitMemoryPartial(&result, m_textureMem, &m_textureMem[m_textureMemSize], m_textureMem, &inoutPageRange);
    StreamerMemLoan::~StreamerMemLoan(&result);
    v12 = -LODWORD(v4->m_textureMemSize);
    if ( ((unsigned __int8)&s_lightmapCommitTotal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_lightmapCommitTotal) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_lightmapCommitTotal, v12);
  }
  v4->m_texturePageRange = MEM_PAGE_RANGE_INVALID_0;
  v4->m_textureMem = NULL;
  v4->m_textureMemSize = 0i64;
}

/*
==============
GfxLightmapAtlas::GetLevelForSize
==============
*/
__int64 GfxLightmapAtlas::GetLevelForSize(unsigned int atlasSize, unsigned int width, unsigned int height)
{
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 

  if ( width != height && 2 * height != width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1378, ASSERT_TYPE_ASSERT, "(( width == height ) || ( height * 2 == width ))", (const char *)&queryFormat, "( width == height ) || ( height * 2 == width )") )
    __debugbreak();
  if ( ((width - 1) & width) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1379, ASSERT_TYPE_ASSERT, "(( width & ( width - 1 ) ) == 0)", (const char *)&queryFormat, "( width & ( width - 1 ) ) == 0") )
    __debugbreak();
  if ( ((height - 1) & height) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1380, ASSERT_TYPE_ASSERT, "(( height & ( height - 1 ) ) == 0)", (const char *)&queryFormat, "( height & ( height - 1 ) ) == 0") )
    __debugbreak();
  if ( !atlasSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  v6 = 32 - __lzcnt(atlasSize - 1);
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  v7 = 32 - __lzcnt(width - 1);
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  v8 = v7 - __lzcnt(height - 1) + 32;
  if ( (v8 > 2 * v6 || v8 < 0xC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1392, ASSERT_TYPE_ASSERT, "(( sizeLog2Sum <= topLevelSizeLog2Sum ) && ( sizeLog2Sum >= BOTTOM_LEVEL_SIZE_LOG2_SUM ))", (const char *)&queryFormat, "( sizeLog2Sum <= topLevelSizeLog2Sum ) && ( sizeLog2Sum >= BOTTOM_LEVEL_SIZE_LOG2_SUM )") )
    __debugbreak();
  return 2 * v6 - v8;
}

/*
==============
GetLightmapAtlasTextureSliceRWView
==============
*/
GfxShaderTextureRWView *GetLightmapAtlasTextureSliceRWView(const GfxBackEndData *data, GfxLightmapType lightmapType, unsigned int index, unsigned int slice)
{
  return &g_lightmapAtlas[lightmapType].m_atlasState[g_lightmapAtlas[lightmapType].m_renderAtlasState[data->lightmapAtlasIndex & 1]].m_textureSliceRWViews[index][slice];
}

/*
==============
GfxLightmapAtlas::GetLightmapCount
==============
*/
__int64 GfxLightmapAtlas::GetLightmapCount(GfxLightmapAtlas *this)
{
  __int64 result; 
  __int64 v2; 
  bitarray<1024> *p_m_lightmapsUsed; 

  LODWORD(result) = 0;
  v2 = 32i64;
  p_m_lightmapsUsed = &this->m_lightmapsUsed;
  do
  {
    result = __popcnt(p_m_lightmapsUsed->array[0]) + (unsigned int)result;
    p_m_lightmapsUsed = (bitarray<1024> *)((char *)p_m_lightmapsUsed + 4);
    --v2;
  }
  while ( v2 );
  return result;
}

/*
==============
GfxLightmapAtlas::GetLightmapDesc
==============
*/
char GfxLightmapAtlas::GetLightmapDesc(GfxLightmapAtlas *this, unsigned int lightmapIndex, unsigned int *width, unsigned int *height, unsigned int *worldIndex, XZoneHandleUnique *zone)
{
  unsigned int v6; 
  int v7; 
  __int64 v8; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  v6 = this->m_lightmapsUsed.array[0];
  v7 = 0;
  LODWORD(v8) = 0;
  while ( 1 )
  {
    for ( ; !v6; v6 = this->m_lightmapsUsed.array[v8] )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= 0x20 )
        return 0;
    }
    v11 = __lzcnt(v6);
    v12 = v11 + 32 * (_DWORD)v8;
    if ( v11 >= 0x20 )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( (v6 & (0x80000000 >> v11)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v6 &= ~(0x80000000 >> v11);
    if ( v7 == lightmapIndex )
      break;
    ++v7;
  }
  if ( (unsigned int)v12 < 0x400 )
  {
    *width = this->m_lightmaps[(unsigned int)v12].width;
    *height = this->m_lightmaps[v12].height;
    *worldIndex = this->m_lightmaps[(unsigned int)v12].worldIndex;
    *zone = this->m_lightmaps[(unsigned int)v12].transientZone;
    return 1;
  }
  return 0;
}

/*
==============
GfxLightmapAtlas::GetPacking
==============
*/
char GfxLightmapAtlas::GetPacking(GfxLightmapAtlas *this, unsigned int worldLightmapIndex, unsigned int *x, unsigned int *y, unsigned int *width, unsigned int *height, unsigned int *slice)
{
  __int64 v8; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v15; 
  int v16; 

  v8 = worldLightmapIndex;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 648, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( this->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 652, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0x800 )
  {
    v16 = 2048;
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 654, ASSERT_TYPE_ASSERT, "(unsigned)( worldLightmapIndex ) < (unsigned)( MAX_WORLD_LIGHTMAPS )", "worldLightmapIndex doesn't index MAX_WORLD_LIGHTMAPS\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v11 = this->m_lightmapWorldIndexMapping[v8];
  if ( (_DWORD)v11 == -1 || !bitarray_base<bitarray<1024>>::testBit(&this->m_lightmapsUsed, v11) )
    return 0;
  v12 = (unsigned int)v11;
  v13 = v12 * 16 + 17712i64 * this->m_activeAtlasState;
  *x = *(unsigned int *)((char *)&this->m_atlasState[0].m_packing[0].x + v13);
  *y = *(unsigned int *)((char *)&this->m_atlasState[0].m_packing[0].y + v13);
  *width = this->m_lightmaps[v12].width;
  *height = this->m_lightmaps[v11].height;
  *slice = *(unsigned int *)((char *)&this->m_atlasState[0].m_packing[0].slice + v13);
  if ( this->m_lightmaps[v12].worldIndex != (_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 676, ASSERT_TYPE_ASSERT, "(m_lightmaps[lightmapIndex].worldIndex == worldLightmapIndex)", (const char *)&queryFormat, "m_lightmaps[lightmapIndex].worldIndex == worldLightmapIndex") )
    __debugbreak();
  return 1;
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::GetUtilization
==============
*/
float GfxLightmapAtlas::BinaryTreePacker::GetUtilization(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  unsigned int v4; 
  bool v5; 
  int v6; 
  int v7; 
  double Utilization; 
  float v10; 
  double v11; 

  if ( nodeIndex >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1562, ASSERT_TYPE_ASSERT, "(nodeIndex < MAX_NUM_NODES)", (const char *)&queryFormat, "nodeIndex < MAX_NUM_NODES") )
    __debugbreak();
  v4 = 2 * nodeIndex;
  v5 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * nodeIndex + 1);
  v6 = v5 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v4) ? 2 : 0);
  if ( !v6 )
    return 0.0;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1575, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      return 0.0;
    }
    return FLOAT_1_0;
  }
  else
  {
    Utilization = GfxLightmapAtlas::BinaryTreePacker::GetUtilization(this, v4 + 2);
    v10 = *(float *)&Utilization * 0.5;
    v11 = GfxLightmapAtlas::BinaryTreePacker::GetUtilization(this, v4 + 1);
    return (float)(*(float *)&v11 * 0.5) + v10;
  }
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::Init
==============
*/
void GfxLightmapAtlas::BinaryTreePacker::Init(GfxLightmapAtlas::BinaryTreePacker *this)
{
  __int64 v1; 

  v1 = 32i64;
  do
  {
    *(_QWORD *)this->m_nodes.array = 0i64;
    *(_QWORD *)&this->m_nodes.array[2] = 0i64;
    *(_QWORD *)&this->m_nodes.array[4] = 0i64;
    this = (GfxLightmapAtlas::BinaryTreePacker *)((char *)this + 64);
    *(_QWORD *)&this[-1].m_nodes.array[502] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[504] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[506] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[508] = 0i64;
    *(_QWORD *)&this[-1].m_nodes.array[510] = 0i64;
    --v1;
  }
  while ( v1 );
}

/*
==============
GfxLightmapAtlas::Init
==============
*/
void GfxLightmapAtlas::Init(GfxLightmapAtlas *this, GfxPixelFormat *textureFormats)
{
  unsigned int v4; 
  GfxPixelFormat v5; 
  GfxImageFlags v6; 
  GfxImageFlags v7; 
  GfxImageFlags v8; 
  unsigned int v9; 
  unsigned int v10; 

  *(_QWORD *)this->m_lightmapsUsed.array = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[2] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[4] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[6] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[8] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[10] = 0i64;
  v4 = 0;
  *(_QWORD *)&this->m_lightmapsUsed.array[12] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[14] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[16] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[18] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[20] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[22] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[24] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[26] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[28] = 0i64;
  *(_QWORD *)&this->m_lightmapsUsed.array[30] = 0i64;
  this->m_lightmapSetTextureDesc[0].format = *textureFormats;
  v5 = *textureFormats;
  v6 = IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  *(_QWORD *)&this->m_lightmapSetTextureDesc[0].totalSize = 0i64;
  *(_DWORD *)&this->m_lightmapSetTextureDesc[0].depth = 1;
  this->m_lightmapSetTextureDesc[0].levelCount = 1;
  v7 = IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  if ( (unsigned int)(v5 - 33) > 0xC )
    v7 = IMG_CREATE_FLAG_RW_VIEW|IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  this->m_lightmapSetTextureDesc[0].flags = v7;
  v8 = IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  this->m_lightmapSetTextureDesc[1].format = textureFormats[1];
  v9 = *((_DWORD *)textureFormats + 1) - 33;
  *(_QWORD *)&this->m_lightmapSetTextureDesc[1].totalSize = 0i64;
  *(_DWORD *)&this->m_lightmapSetTextureDesc[1].depth = 1;
  this->m_lightmapSetTextureDesc[1].levelCount = 1;
  if ( v9 > 0xC )
    v8 = IMG_CREATE_FLAG_RW_VIEW|IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  this->m_lightmapSetTextureDesc[1].flags = v8;
  this->m_lightmapSetTextureDesc[2].format = textureFormats[2];
  v10 = *((_DWORD *)textureFormats + 2) - 33;
  *(_QWORD *)&this->m_lightmapSetTextureDesc[2].totalSize = 0i64;
  *(_DWORD *)&this->m_lightmapSetTextureDesc[2].depth = 1;
  this->m_lightmapSetTextureDesc[2].levelCount = 1;
  if ( v10 > 0xC )
    v6 = IMG_CREATE_FLAG_RW_VIEW|IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  this->m_lightmapSetTextureDesc[2].flags = v6;
  do
    R_CreateGfxWrappedBuffer(&this->m_lightmapPackingBuffer[v4++], GfxWrappedBuffer_Structured, 8, 0x800u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "lightmap atlas transform params");
  while ( v4 < 2 );
  memset_0(this->m_lightmapWorldIndexMapping, -1, sizeof(this->m_lightmapWorldIndexMapping));
  *(_QWORD *)&this->m_activePackingBuffer = 0i64;
  this->m_activeAtlasState = 0;
  *(_QWORD *)&this->m_renderPackingBuffer[1] = 0i64;
  this->m_renderAtlasState[1] = 0;
  this->m_state = IDLE;
  *(_QWORD *)&this->m_numExtraCopyWaitFrames = 3i64;
  this->m_singleSliceFefragmentationUtilizationThreshold = 0.25;
  this->m_defragmentationUtilizationThreshold = 0.5;
  this->m_numWaitFrames = 0;
  this->m_zonePendingAdd.m_packed = -65536;
  this->m_flipTexturePending = 0;
  this->m_lightmapAtlasVARangeAllocOffset = 0i64;
  this->m_lightmapAtlasVARangeWrapFrame = 0;
  this->m_lightmapAtlasVARangeSize = 0x40000000i64;
  this->m_lightmapAtlasVARangeStart = (unsigned __int8 *)Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_GPU_PRIVATE, 0x40000000ui64, "lightmap atlas va range");
  this->m_defragRequested._My_val = 0;
  GfxLightmapAtlas::InitLightmapAtlasState(this, this->m_atlasState);
  this->m_zonesToFree.m_allocPtr = 0;
  this->m_zonesToFree.m_writePtr = 0;
  this->m_zonesToFree.m_readPtr = 0;
  this->m_zonesToFree.m_consumerThreadId = 0;
}

/*
==============
GfxLightmapAtlas::InitLightmapAtlasState
==============
*/
void GfxLightmapAtlas::InitLightmapAtlasState(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *state)
{
  GfxShaderTextureRWView (*m_textureSliceRWViews)[8]; 
  GfxImage *m_texture; 
  __int64 v5; 
  __int64 v6; 
  StreamerMemLoan other; 

  m_textureSliceRWViews = state->m_textureSliceRWViews;
  m_texture = state->m_texture;
  v5 = 3i64;
  do
  {
    Image_AllocInPlace(m_texture, "$lightmap_atlas", IMG_CATEGORY_LIGHTMAP, TS_2D);
    v6 = 8i64;
    do
    {
      R_AssignNullShaderTextureRWView((GfxShaderTextureRWView *)m_textureSliceRWViews);
      m_textureSliceRWViews = (GfxShaderTextureRWView (*)[8])((char *)m_textureSliceRWViews + 24);
      --v6;
    }
    while ( v6 );
    ++m_texture;
    --v5;
  }
  while ( v5 );
  memset_0(state->m_packing, 255, sizeof(state->m_packing));
  *(_QWORD *)&state->m_textureSize = 0i64;
  state->m_textureMem = NULL;
  state->m_textureMemSize = 0i64;
  state->m_texturePageRange = MEM_PAGE_RANGE_INVALID_0;
  *(&other.mCookie + 1) = 0;
  other.mUpdateID = 0i64;
  other.mPages = 0i64;
  other.mCookie = -1061110033;
  StreamerMemLoan::operator=(&state->m_streamerMemLoan, &other);
  StreamerMemLoan::~StreamerMemLoan(&other);
}

/*
==============
GfxLightmapAtlas::InitLightmapSetDesc
==============
*/
void GfxLightmapAtlas::InitLightmapSetDesc(GfxLightmapAtlas *this, GfxPixelFormat *textureFormats)
{
  GfxImageFlags v3; 
  unsigned __int32 v4; 
  GfxImageFlags v5; 
  GfxImageFlags v6; 
  unsigned int v7; 
  unsigned int v8; 

  this->m_lightmapSetTextureDesc[0].format = *textureFormats;
  v3 = IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  v4 = *textureFormats - 33;
  *(_DWORD *)&this->m_lightmapSetTextureDesc[0].depth = 1;
  this->m_lightmapSetTextureDesc[0].levelCount = 1;
  v5 = IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  if ( v4 > 0xC )
    v5 = IMG_CREATE_FLAG_RW_VIEW|IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  *(_QWORD *)&this->m_lightmapSetTextureDesc[0].totalSize = 0i64;
  this->m_lightmapSetTextureDesc[0].flags = v5;
  this->m_lightmapSetTextureDesc[1].format = textureFormats[1];
  v6 = IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  v7 = *((_DWORD *)textureFormats + 1) - 33;
  *(_QWORD *)&this->m_lightmapSetTextureDesc[1].totalSize = 0i64;
  *(_DWORD *)&this->m_lightmapSetTextureDesc[1].depth = 1;
  this->m_lightmapSetTextureDesc[1].levelCount = 1;
  if ( v7 > 0xC )
    v6 = IMG_CREATE_FLAG_RW_VIEW|IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  this->m_lightmapSetTextureDesc[1].flags = v6;
  this->m_lightmapSetTextureDesc[2].format = textureFormats[2];
  v8 = *((_DWORD *)textureFormats + 2) - 33;
  *(_QWORD *)&this->m_lightmapSetTextureDesc[2].totalSize = 0i64;
  *(_DWORD *)&this->m_lightmapSetTextureDesc[2].depth = 1;
  if ( v8 > 0xC )
    v3 = IMG_CREATE_FLAG_RW_VIEW|IMG_DISK_FLAG_MAPTYPE_ARRAY|IMG_DISK_FLAG_NOMIPMAPS;
  this->m_lightmapSetTextureDesc[2].levelCount = 1;
  this->m_lightmapSetTextureDesc[2].flags = v3;
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::MarkNodeEmpty
==============
*/
void GfxLightmapAtlas::BinaryTreePacker::MarkNodeEmpty(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  unsigned int v4; 
  bool v5; 
  int v6; 
  unsigned int v7; 
  bool v8; 

  while ( 1 )
  {
    v4 = 2 * nodeIndex;
    v5 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * nodeIndex + 1);
    if ( !(v5 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * nodeIndex) ? 2 : 0)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1646, ASSERT_TYPE_ASSERT, "(GetNodeState( nodeIndex ) != NodeState::EMPTY)", (const char *)&queryFormat, "GetNodeState( nodeIndex ) != NodeState::EMPTY") )
      __debugbreak();
    bitarray_base<bitarray<16384>>::setBitTo((bitarray_base<bitarray<16384> > *)this, v4, 0);
    bitarray_base<bitarray<16384>>::setBitTo((bitarray_base<bitarray<16384> > *)this, v4 + 1, 0);
    if ( nodeIndex <= 0 )
      break;
    v6 = (nodeIndex - 1) / 2;
    v7 = 2 * (nodeIndex + 2 * (nodeIndex & 1)) - 2;
    v8 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v7 + 1);
    if ( v8 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v7) ? 2 : 0) )
    {
      GfxLightmapAtlas::BinaryTreePacker::MarkNodePartial(this, v6);
      return;
    }
    nodeIndex = v6;
  }
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::MarkNodeFull
==============
*/
void GfxLightmapAtlas::BinaryTreePacker::MarkNodeFull(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  unsigned int v4; 
  bool v5; 
  int v6; 
  unsigned int v7; 
  bool v8; 

  while ( 1 )
  {
    v4 = 2 * nodeIndex;
    v5 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * nodeIndex + 1);
    if ( v5 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * nodeIndex) ? 2 : 0) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1623, ASSERT_TYPE_ASSERT, "(GetNodeState( nodeIndex ) != NodeState::FULL)", (const char *)&queryFormat, "GetNodeState( nodeIndex ) != NodeState::FULL") )
      __debugbreak();
    bitarray_base<bitarray<16384>>::setBitTo((bitarray_base<bitarray<16384> > *)this, v4, 1);
    bitarray_base<bitarray<16384>>::setBitTo((bitarray_base<bitarray<16384> > *)this, v4 + 1, 0);
    if ( nodeIndex <= 0 )
      break;
    v6 = (nodeIndex - 1) / 2;
    v7 = 2 * (nodeIndex + 2 * (nodeIndex & 1)) - 2;
    v8 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v7 + 1);
    if ( v8 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v7) ? 2 : 0) != 2 )
    {
      GfxLightmapAtlas::BinaryTreePacker::MarkNodePartial(this, v6);
      return;
    }
    nodeIndex = v6;
  }
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::MarkNodePartial
==============
*/
void GfxLightmapAtlas::BinaryTreePacker::MarkNodePartial(GfxLightmapAtlas::BinaryTreePacker *this, int nodeIndex)
{
  unsigned int v2; 
  int v3; 
  unsigned int v4; 
  bool v6; 
  bool v7; 

  v2 = 2 * nodeIndex;
  v3 = nodeIndex;
  v4 = 2 * nodeIndex + 1;
  v6 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v4);
  if ( v6 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v2) ? 2 : 0) != 1 )
  {
    do
    {
      bitarray_base<bitarray<16384>>::setBitTo((bitarray_base<bitarray<16384> > *)this, v2, 0);
      bitarray_base<bitarray<16384>>::setBitTo((bitarray_base<bitarray<16384> > *)this, v4, 1);
      if ( v3 <= 0 )
        break;
      v3 = (v3 - 1) / 2;
      v2 = 2 * v3;
      v4 = 2 * v3 + 1;
      v7 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, v4);
    }
    while ( v7 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)this, 2 * v3) ? 2 : 0) != 1 );
  }
}

/*
==============
GfxLightmapAtlas::BinaryTreePacker::NodeIndexToPosition
==============
*/
void GfxLightmapAtlas::BinaryTreePacker::NodeIndexToPosition(int atlasSize, int nodeIndex, int *outX, int *outY, int *outWidth, int *outHeight)
{
  __int64 v7; 
  int v10; 
  char *v11; 
  int v12; 
  int v13; 
  int v14; 
  int i; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int *v23; 
  int *v24; 
  char v25; 

  LODWORD(v7) = 0;
  v24 = outHeight;
  v10 = nodeIndex;
  if ( nodeIndex > 0 )
  {
    v11 = &v25;
    do
    {
      *(_DWORD *)v11 = v10;
      v11 += 4;
      LODWORD(v7) = v7 + 1;
      v10 = (v10 - 1) / 2;
    }
    while ( v10 > 0 );
    if ( (int)v7 > 13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1697, ASSERT_TYPE_ASSERT, "(pathLength <= MAX_PATH_LENGTH)", (const char *)&queryFormat, "pathLength <= MAX_PATH_LENGTH") )
      __debugbreak();
  }
  v12 = 0;
  v7 = (int)v7;
  v13 = 0;
  v14 = 0;
  for ( i = atlasSize; v7 > 0; v12 = v22 )
  {
    v16 = 0;
    v17 = 0;
    v18 = i / 2;
    if ( atlasSize == i )
      v17 = i / 2;
    else
      v16 = atlasSize / 2;
    v19 = *((_DWORD *)&v24 + v7 + 1);
    v20 = v17 + v13;
    if ( atlasSize != i )
    {
      v18 = i;
      if ( atlasSize != i )
        atlasSize /= 2;
    }
    --v7;
    v21 = 2 * v14 + 1;
    v14 = v19;
    i = v18;
    if ( v19 == v21 )
      v20 = v13;
    v13 = v20;
    v22 = v16 + v12;
    if ( v19 == v21 )
      v22 = v12;
  }
  v23 = v24;
  *outX = v12;
  *outY = v13;
  *outWidth = atlasSize;
  *v23 = i;
}

/*
==============
GfxLightmapAtlas::Pack
==============
*/
void GfxLightmapAtlas::Pack(GfxLightmapAtlas *this, const GfxLightmapAtlas::LightmapDesc *lightmapsToPack, const bitarray<1024> *lightmapsUsed, GfxLightmapAtlas::LightmapAtlasState *targetState, GfxLightmapAtlas::BinaryTreePacker *packers)
{
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v9; 
  int v10; 
  GfxLightmapAtlas::BinaryTreePacker *v11; 
  GfxLightmapAtlas *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  const GfxLightmapAtlas::LightmapDesc *v16; 
  int v17; 
  signed int v18; 
  __int64 v19; 
  unsigned int width; 
  int LevelForSize; 
  signed int v22; 
  bitarray_base<bitarray<16384> > *v23; 
  bool v24; 
  char v25; 
  int FreeNode; 
  __int64 v27; 
  bitarray_base<bitarray<16384> > *v28; 
  bitarray_base<bitarray<16384> > *v29; 
  bool v30; 
  char v31; 
  int v32; 
  __int64 v33; 
  signed int v34; 
  int v35; 
  int v36; 
  unsigned int i; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  unsigned int v42; 
  int v43; 
  unsigned int v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  int v50; 
  __int64 v52; 
  GfxLightmapAtlas::Pack::__l2::<lambda_b71a143fe433c59cadacfe919e7097f5> _Preda; 
  __int64 v56; 
  __int64 v57[8]; 
  int _Last[1024]; 

  v5 = lightmapsUsed->array[0];
  LODWORD(v6) = 0;
  v7 = 0i64;
  v48 = 0;
  while ( v5 )
  {
LABEL_5:
    v9 = __lzcnt(v5);
    if ( v9 >= 0x20 )
    {
      LODWORD(v47) = 32;
      LODWORD(v46) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v9)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    ++v48;
    v5 &= ~(0x80000000 >> v9);
    _Last[v7++] = v9 + 32 * v6;
  }
  while ( 1 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0x20 )
      break;
    v5 = lightmapsUsed->array[v6];
    if ( v5 )
      goto LABEL_5;
  }
  v10 = v48;
  v52 = v7;
  std::_Sort_unchecked_int____lambda_b71a143fe433c59cadacfe919e7097f5___(_Last, &_Last[v48], v48, (GfxLightmapAtlas::Pack::__l2::<lambda_b71a143fe433c59cadacfe919e7097f5>)lightmapsToPack);
  v11 = packers;
  v12 = this;
  v13 = 1024;
  v50 = 1024;
  v14 = v7;
  v15 = 0;
  while ( 2 )
  {
    v49 = 0;
    v16 = NULL;
    _Preda.lightmapsToPack = NULL;
    v17 = 0;
    v18 = 0;
    if ( v14 <= 0 )
      goto LABEL_70;
    do
    {
      v57[0] = _Last[(_QWORD)v16];
      v19 = v57[0];
      v56 = v57[0];
      if ( v12->m_lightmaps[v57[0]].width < v12->m_lightmaps[v57[0]].height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1442, ASSERT_TYPE_ASSERT, "(lightmapToPack.width >= lightmapToPack.height)", (const char *)&queryFormat, "lightmapToPack.width >= lightmapToPack.height") )
        __debugbreak();
      width = v12->m_lightmaps[v19].width;
      if ( width > v13 )
        break;
      LevelForSize = GfxLightmapAtlas::GetLevelForSize(v13, width, v12->m_lightmaps[v19].height);
      v22 = 0;
      if ( v18 <= 0 )
        goto LABEL_24;
      while ( 1 )
      {
        v23 = (bitarray_base<bitarray<16384> > *)&v11[(__int64)v22];
        v24 = bitarray_base<bitarray<16384>>::testBit(v23, 1u);
        v25 = v24 + (bitarray_base<bitarray<16384>>::testBit(v23, 0) ? 2 : 0);
        if ( v25 == 2 )
          goto LABEL_32;
        if ( !LevelForSize )
          break;
        FreeNode = GfxLightmapAtlas::BinaryTreePacker::FindFreeNode((GfxLightmapAtlas::BinaryTreePacker *)v23, LevelForSize, 1, 1);
        if ( FreeNode == -1 )
          FreeNode = GfxLightmapAtlas::BinaryTreePacker::FindFreeNode((GfxLightmapAtlas::BinaryTreePacker *)v23, LevelForSize, 2, 1);
        if ( FreeNode != -1 )
          goto LABEL_23;
LABEL_32:
        if ( ++v22 >= v18 )
          goto LABEL_24;
      }
      if ( v25 )
        goto LABEL_32;
      FreeNode = 0;
LABEL_23:
      if ( v22 != -1 )
        goto LABEL_43;
LABEL_24:
      if ( v18 == 8 )
      {
        v17 = v49;
        v12 = this;
        break;
      }
      v27 = 32i64;
      v28 = (bitarray_base<bitarray<16384> > *)&v11[(unsigned __int64)(unsigned int)v18];
      v29 = v28;
      do
      {
        *(_QWORD *)v29 = 0i64;
        *(_QWORD *)&v29[8] = 0i64;
        *(_QWORD *)&v29[16] = 0i64;
        v29 += 64;
        *(_QWORD *)&v29[-40] = 0i64;
        *(_QWORD *)&v29[-32] = 0i64;
        *(_QWORD *)&v29[-24] = 0i64;
        *(_QWORD *)&v29[-16] = 0i64;
        *(_QWORD *)&v29[-8] = 0i64;
        --v27;
      }
      while ( v27 );
      v22 = v18;
      v30 = bitarray_base<bitarray<16384>>::testBit(v28, 1u);
      v31 = v30 + (bitarray_base<bitarray<16384>>::testBit(v28, 0) ? 2 : 0);
      if ( v31 == 2 )
      {
LABEL_28:
        FreeNode = -1;
        goto LABEL_40;
      }
      if ( LevelForSize )
      {
        FreeNode = GfxLightmapAtlas::BinaryTreePacker::FindFreeNode((GfxLightmapAtlas::BinaryTreePacker *)v28, LevelForSize, 1, 1);
        if ( FreeNode == -1 )
          FreeNode = GfxLightmapAtlas::BinaryTreePacker::FindFreeNode((GfxLightmapAtlas::BinaryTreePacker *)v28, LevelForSize, 2, 1);
        if ( FreeNode == -1 )
        {
LABEL_40:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1477, ASSERT_TYPE_ASSERT, "(nodeIndexToUse != -1)", (const char *)&queryFormat, "nodeIndexToUse != -1") )
            __debugbreak();
        }
      }
      else
      {
        if ( v31 )
          goto LABEL_28;
        FreeNode = 0;
      }
      ++v18;
LABEL_43:
      v32 = FreeNode;
      v33 = 0i64;
      if ( FreeNode > 0 )
      {
        do
        {
          *((_DWORD *)&v57[1] + v33++) = v32;
          v32 = (v32 - 1) / 2;
        }
        while ( v32 > 0 );
        if ( v33 > 13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1697, ASSERT_TYPE_ASSERT, "(pathLength <= MAX_PATH_LENGTH)", (const char *)&queryFormat, "pathLength <= MAX_PATH_LENGTH") )
          __debugbreak();
      }
      v34 = v13;
      v35 = v13;
      v36 = 0;
      for ( i = 0; v33 > 0; i = v44 )
      {
        v38 = 0;
        v39 = 0;
        v40 = v35 / 2;
        if ( v34 == v35 )
          v39 = v35 / 2;
        else
          v38 = v34 / 2;
        v41 = *((_DWORD *)v57 + v33 + 1);
        v42 = v39 + v15;
        if ( v34 != v35 )
        {
          v40 = v35;
          if ( v34 != v35 )
            v34 /= 2;
        }
        --v33;
        v43 = 2 * v36 + 1;
        v36 = v41;
        v35 = v40;
        if ( v41 == v43 )
          v42 = v15;
        v15 = v42;
        v44 = v38 + i;
        if ( v41 == v43 )
          v44 = i;
      }
      if ( this->m_lightmaps[v56].width != v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1485, ASSERT_TYPE_ASSERT, "((int)lightmapToPack.width == nodeWidth)", (const char *)&queryFormat, "(int)lightmapToPack.width == nodeWidth") )
        __debugbreak();
      if ( this->m_lightmaps[v56].height != v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1486, ASSERT_TYPE_ASSERT, "((int)lightmapToPack.height == nodeHeight)", (const char *)&queryFormat, "(int)lightmapToPack.height == nodeHeight") )
        __debugbreak();
      GfxLightmapAtlas::BinaryTreePacker::MarkNodeFull(&packers[(__int64)v22], FreeNode);
      v17 = v49 + 1;
      v13 = v50;
      v45 = 2 * (v57[0] + 80);
      targetState->m_packing[v56].x = i;
      v11 = packers;
      targetState->m_packing[v56].y = v15;
      v15 = 0;
      targetState->m_packing[v56].slice = v22;
      v12 = this;
      *(&targetState->m_textureSize + 2 * v45) = FreeNode;
      v16 = (const GfxLightmapAtlas::LightmapDesc *)((char *)&_Preda.lightmapsToPack->width + 1);
      ++v49;
      _Preda.lightmapsToPack = v16;
    }
    while ( (__int64)v16 < v52 );
    v14 = v52;
    v10 = v48;
LABEL_70:
    if ( v17 < v10 )
    {
      v13 *= 2;
      v18 = 0;
      v50 = v13;
      if ( v13 > 0x1000 )
        goto LABEL_74;
      continue;
    }
    break;
  }
  if ( v13 > 0x1000 )
  {
LABEL_74:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1507, ASSERT_TYPE_ASSERT, "(atlasSize <= MAX_ATLAS_SIZE)", (const char *)&queryFormat, "atlasSize <= MAX_ATLAS_SIZE") )
      __debugbreak();
  }
  targetState->m_textureSize = v13;
  targetState->m_numTextureSlices = v18;
}

/*
==============
GfxLightmapAtlas::PostCopy
==============
*/
void GfxLightmapAtlas::PostCopy(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  GfxTextureId *p_textureId; 
  __int64 v5; 
  const GfxTexture *Resident; 

  p_textureId = &targetState->m_texture[0].textureId;
  v5 = 3i64;
  do
  {
    if ( *p_textureId && !RB_BackendDataCopier::RemoveRenderableCopyDest(&rbBackendDataCopier, 0, *p_textureId) )
    {
      Resident = R_Texture_GetResident(*p_textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    p_textureId += 58;
    --v5;
  }
  while ( v5 );
  R_FlushResourceTransitions(computeState);
}

/*
==============
GfxLightmapAtlas::PrepareCopyDestAndFlush
==============
*/
void GfxLightmapAtlas::PrepareCopyDestAndFlush(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapAtlas::LightmapAtlasState *targetState, bool targetStateActive)
{
  GfxTextureId *p_textureId; 
  __int64 v6; 
  const GfxTexture *Resident; 

  if ( !targetStateActive )
  {
    p_textureId = &targetState->m_texture[0].textureId;
    v6 = 3i64;
    do
    {
      Resident = R_Texture_GetResident(*p_textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      p_textureId += 58;
      --v6;
    }
    while ( v6 );
  }
  R_FlushResourceTransitions(computeState);
}

/*
==============
GfxLightmapAtlas::PrepareCopySource
==============
*/
void GfxLightmapAtlas::PrepareCopySource(GfxLightmapAtlas *this, ComputeCmdBufState *computeState, GfxLightmapRaw *newLightmaps, unsigned int numNewLightmaps)
{
  ;
}

/*
==============
GfxLightmapAtlas::PrepareForCopy
==============
*/
void GfxLightmapAtlas::PrepareForCopy(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  signed __int64 v4; 
  char *v5; 
  __int64 v6; 
  __int64 m_textureSize; 
  double v9; 
  unsigned int v10; 
  unsigned int m_numTextureSlices; 
  GfxLightmapAtlas *v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int CardMemoryAmount; 
  __int64 v23; 
  unsigned __int64 m_lightmapAtlasVARangeAllocOffset; 
  unsigned __int8 *v25; 
  char *v26; 
  int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  int v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  unsigned __int64 v40; 
  GfxPixelFormat v41; 
  ID3D12Resource *basemap; 
  unsigned int freeSlot; 
  unsigned int *v44; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  bool v46; 
  __m256i v47; 
  __m256i v48; 
  unsigned __int8 *v49; 
  GfxImage *image; 
  GfxTextureId *v51; 
  __int64 v52; 
  GfxLightmapAtlas::LightmapAtlasState *v53; 
  char *v54; 
  __int64 v55; 
  GfxLightmapAtlas *v56; 
  unsigned int v57; 
  unsigned __int64 v58; 
  Image_SetupParams v59; 
  Image_SetupParams params; 
  Image_SetupParams v61; 
  char v62[14]; 
  char v63[66]; 

  v56 = this;
  v53 = targetState;
  if ( this->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 852, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
    __debugbreak();
  GfxLightmapAtlas::InitLightmapAtlasState(this, targetState);
  GfxLightmapAtlas::Pack(this, this->m_lightmaps, &this->m_lightmapsUsed, targetState, this->m_packers);
  v4 = (char *)this - v62;
  v5 = v62;
  v55 = 3i64;
  v6 = 3i64;
  do
  {
    _XMM0 = *(_OWORD *)&v5[v4];
    m_textureSize = targetState->m_textureSize;
    v9 = *(double *)&v5[v4 + 16];
    *(_OWORD *)v5 = _XMM0;
    *((double *)v5 + 2) = v9;
    if ( (unsigned int)m_textureSize > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)m_textureSize, "unsigned", m_textureSize) )
        __debugbreak();
      v10 = targetState->m_textureSize;
    }
    else
    {
      v10 = m_textureSize;
    }
    *((_WORD *)v5 + 6) = m_textureSize;
    if ( v10 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v10, "unsigned", v10) )
      __debugbreak();
    *((_WORD *)v5 + 7) = v10;
    m_numTextureSlices = targetState->m_numTextureSlices;
    if ( m_numTextureSlices > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)m_numTextureSlices, "unsigned", targetState->m_numTextureSlices) )
      __debugbreak();
    *((_WORD *)v5 + 9) = m_numTextureSlices;
    v5 += 24;
    --v6;
  }
  while ( v6 );
  v12 = v56;
  v13 = v63;
  LODWORD(v14) = 0;
  v15 = 3i64;
  do
  {
    v16 = *((unsigned __int16 *)v13 - 1);
    v17 = *(unsigned __int16 *)v13;
    v18 = *((unsigned __int16 *)v13 + 1);
    v19 = *((unsigned __int16 *)v13 + 2);
    v20 = (unsigned __int8)v13[6];
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v48.m256i_u64[1] = _XMM0;
    v47.m256i_i64[0] = __PAIR64__(v17, v16);
    v47.m256i_i64[1] = __PAIR64__(v19, v18);
    v48.m256i_i64[0] = 0i64;
    v48.m256i_i32[6] = -1;
    v21 = Image_CountMipmaps(v16, v17, v18);
    v47.m256i_i32[5] = *(_DWORD *)(v13 - 10);
    if ( v21 == v20 )
      v20 = 0;
    v47.m256i_i32[6] = *(_DWORD *)(v13 - 14);
    v47.m256i_i32[4] = v20;
    *(__m256i *)&params.width = v47;
    *(__m256i *)&params.customAllocFunc = v48;
    CardMemoryAmount = Image_GetCardMemoryAmount(&params);
    if ( (_BYTE)CardMemoryAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 875, ASSERT_TYPE_ASSERT, "(IsAligned( size, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( size, R_IMAGE_ALIGNMENT )") )
      __debugbreak();
    v14 = CardMemoryAmount + (unsigned int)v14;
    v13 += 24;
    --v15;
  }
  while ( v15 );
  v23 = (__int64)v53;
  if ( (unsigned int)v14 > v56->m_lightmapAtlasVARangeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 878, ASSERT_TYPE_ASSERT, "( vaSize ) <= ( m_lightmapAtlasVARangeSize )", "%s <= %s\n\t%llu, %llu", "vaSize", "m_lightmapAtlasVARangeSize", (unsigned int)v14, v56->m_lightmapAtlasVARangeSize) )
    __debugbreak();
  m_lightmapAtlasVARangeAllocOffset = v56->m_lightmapAtlasVARangeAllocOffset;
  if ( m_lightmapAtlasVARangeAllocOffset + v14 > v56->m_lightmapAtlasVARangeSize )
  {
    if ( g_gpuSwapFrame - v56->m_lightmapAtlasVARangeWrapFrame < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 884, ASSERT_TYPE_ASSERT, "(g_gpuSwapFrame - m_lightmapAtlasVARangeWrapFrame >= 3)", (const char *)&queryFormat, "g_gpuSwapFrame - m_lightmapAtlasVARangeWrapFrame >= 3") )
      __debugbreak();
    v56->m_lightmapAtlasVARangeAllocOffset = 0i64;
    m_lightmapAtlasVARangeAllocOffset = v12->m_lightmapAtlasVARangeAllocOffset;
    v12->m_lightmapAtlasVARangeWrapFrame = g_gpuSwapFrame;
  }
  v25 = &v12->m_lightmapAtlasVARangeStart[m_lightmapAtlasVARangeAllocOffset];
  v49 = v25;
  RB_BackendDataCopier::CommitMem(&rbBackendDataCopier, 0, v25, &v25[v14], (StreamerMemLoan *)(v23 + 17688), (Mem_PageRange *)(v23 + 17680), "lightmap atlas");
  if ( ((unsigned __int8)&s_lightmapCommitTotal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_lightmapCommitTotal) )
    __debugbreak();
  _InterlockedExchangeAdd(&s_lightmapCommitTotal, v14);
  *(_QWORD *)(v23 + 17672) = (unsigned int)v14;
  v52 = v23 + 704;
  *(_QWORD *)(v23 + 17664) = v25;
  v12->m_lightmapAtlasVARangeAllocOffset += (unsigned int)v14;
  v51 = (GfxTextureId *)(v23 + 24);
  v26 = v63;
  v54 = v63;
  image = (GfxImage *)(v23 + 8);
  do
  {
    if ( (*(_DWORD *)(v26 - 10) & 0x20000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 912, ASSERT_TYPE_ASSERT, "(desc.flags & IMG_DISK_FLAG_MAPTYPE_ARRAY)", (const char *)&queryFormat, "desc.flags & IMG_DISK_FLAG_MAPTYPE_ARRAY") )
      __debugbreak();
    if ( *((_WORD *)v26 + 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 913, ASSERT_TYPE_ASSERT, "(desc.depth == 1)", (const char *)&queryFormat, "desc.depth == 1") )
      __debugbreak();
    v27 = *(_DWORD *)(v26 - 14);
    if ( v27 )
    {
      v28 = *((unsigned __int16 *)v26 - 1);
      v29 = *(unsigned __int16 *)v26;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v48.m256i_u64[1] = _XMM0;
      v48.m256i_i64[0] = 0i64;
      v31 = *(_DWORD *)(v26 - 10);
      v32 = *((unsigned __int16 *)v26 + 2);
      v47.m256i_i32[5] = v31 | 0x20000;
      v48.m256i_i32[6] = -1;
      *(_OWORD *)&v59.customLayout = *(_OWORD *)&v48.m256i_u64[2];
      v59.customAllocFunc = lambda_29874e1d434f9c0b745e22adb6af095e_::_lambda_invoker_cdecl_;
      v47.m256i_i32[0] = v28;
      *(__int64 *)((char *)v47.m256i_i64 + 4) = v29 | 0x100000000i64;
      *(__int64 *)((char *)&v47.m256i_i64[1] + 4) = v32;
      v47.m256i_i32[6] = v27;
      v59.customAllocUserData = v49;
      *(__m256i *)&v59.width = v47;
      Image_Setup(image, &v59);
      v33 = *((unsigned __int16 *)v26 + 1);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v47.m256i_i32[3] = v32;
      v34 = (unsigned __int8)v26[6];
      v48.m256i_i64[0] = 0i64;
      *(_OWORD *)&v48.m256i_u64[1] = _XMM0;
      v48.m256i_i32[6] = -1;
      v47.m256i_i32[0] = v28;
      *(__int64 *)((char *)v47.m256i_i64 + 4) = __PAIR64__(v33, v29);
      v35 = Image_CountMipmaps(v28, v29, v33);
      *(__int64 *)((char *)&v47.m256i_i64[2] + 4) = __PAIR64__(v27, v31);
      if ( v35 == v34 )
        v34 = 0;
      v47.m256i_i32[4] = v34;
      *(__m256i *)&v61.width = v47;
      *(__m256i *)&v61.customAllocFunc = v48;
      v36 = Image_GetCardMemoryAmount(&v61);
      v37 = v36;
      if ( (_BYTE)v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 927, ASSERT_TYPE_ASSERT, "(IsAligned( textureAllocSize, R_IMAGE_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( textureAllocSize, R_IMAGE_ALIGNMENT )") )
        __debugbreak();
      v49 += v37;
      if ( (unsigned int)(v27 - 33) > 0xC )
      {
        v38 = 0;
        if ( *(int *)(v23 + 4) > 0 )
        {
          v39 = v52;
          v40 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
          do
          {
            v41 = *(_DWORD *)(v26 - 14);
            memset(&v47, 0, sizeof(v47));
            v48.m256i_i64[0] = 0i64;
            v47.m256i_i32[0] = R_D3D_GetDXGIFormatForPixelFormat(v41);
            *(__int64 *)((char *)v47.m256i_i64 + 4) = 5i64;
            v47.m256i_i32[3] = v38;
            v47.m256i_i64[2] = 1i64;
            basemap = R_Texture_GetResident(*v51)->basemap;
            while ( 1 )
            {
              if ( v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
                __debugbreak();
              if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
                break;
              Sys_Sleep(0);
            }
            freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
            v26 = v54;
            v23 = (__int64)v53;
            if ( !g_descriptorPools.shaderViewPool.freeSlot )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
                __debugbreak();
              freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
            }
            v44 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
            g_descriptorPools.shaderViewPool.freeSlot = *v44;
            *v44 = 0;
            ++g_descriptorPools.shaderViewPool.handle.used;
            if ( v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
              __debugbreak();
            _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
            v57 = freeSlot;
            m_pFunction = g_dx.d3d12device->m_pFunction;
            v58 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
            ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, __m256i *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, &v47, v58);
            *(_DWORD *)(v39 + 16) = freeSlot;
            ++v38;
            *(_QWORD *)v39 = basemap;
            *(_QWORD *)(v39 + 8) = 0i64;
            *(_DWORD *)(v39 + 20) = -1;
            v39 += 24i64;
          }
          while ( v38 < *(_DWORD *)(v23 + 4) );
        }
      }
    }
    ++image;
    v51 += 58;
    v52 += 192i64;
    v26 += 24;
    v46 = v55-- == 1;
    v54 = v26;
  }
  while ( !v46 );
  v56->m_flipTexturePending = 1;
}

/*
==============
GfxLightmapAtlas::PrepareForCopyToActiveAtlas
==============
*/
void GfxLightmapAtlas::PrepareForCopyToActiveAtlas(GfxLightmapAtlas *this, GfxLightmapAtlas::LightmapAtlasState *targetState)
{
  GfxTextureId *p_textureId; 
  __int64 v3; 

  p_textureId = &targetState->m_texture[0].textureId;
  v3 = 3i64;
  do
  {
    RB_BackendDataCopier::AddRenderableCopyDest(&rbBackendDataCopier, 0, *p_textureId);
    p_textureId += 58;
    --v3;
  }
  while ( v3 );
}

/*
==============
GfxLightmapAtlas::PrepareRenderResources
==============
*/
void GfxLightmapAtlas::PrepareRenderResources(GfxLightmapAtlas *this, const GfxBackEndData *data)
{
  __int64 v2; 

  v2 = ((unsigned __int8)data->lightmapAtlasIndex - 1) & 1;
  this->m_renderAtlasState[v2] = this->m_activeAtlasState;
  this->m_renderPackingBuffer[v2] = this->m_activePackingBuffer;
}

/*
==============
GfxLightmapAtlas::ProcessRemovedLightmaps
==============
*/
void GfxLightmapAtlas::ProcessRemovedLightmaps(GfxLightmapAtlas *this)
{
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
  int v13; 
  int *v14; 
  __int64 v15; 
  __int64 v16; 
  int m_activeAtlasState; 
  unsigned __int64 v18; 
  GfxLightmapAtlas::LightmapAtlasState *v19; 
  int nodeIndex; 
  unsigned int slice; 
  signed __int32 v22[8]; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  char v27; 
  int v28[32]; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1258, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  m_writePtr = this->m_zonesToFree.m_writePtr;
  m_readPtr = this->m_zonesToFree.m_readPtr;
  v27 = 0;
  if ( m_writePtr != m_readPtr )
  {
    do
    {
      m_consumerThreadId = this->m_zonesToFree.m_consumerThreadId;
      CurrentThreadId = Sys_GetCurrentThreadId();
      if ( m_consumerThreadId )
      {
        if ( this->m_zonesToFree.m_consumerThreadId != CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 42, ASSERT_TYPE_ASSERT, "(m_consumerThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "m_consumerThreadId == Sys_GetCurrentThreadId()") )
          __debugbreak();
      }
      else
      {
        this->m_zonesToFree.m_consumerThreadId = CurrentThreadId;
      }
      if ( this->m_zonesToFree.m_writePtr == this->m_zonesToFree.m_readPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 113, ASSERT_TYPE_ASSERT, "(!Empty())", (const char *)&queryFormat, "!Empty()") )
        __debugbreak();
      v6 = this->m_zonesToFree.m_readPtr;
      _InterlockedOr(v22, 0);
      m_packed = this->m_zonesToFree.m_items[v6 & 0x3FF].m_packed;
      ++this->m_zonesToFree.m_readPtr;
      if ( m_packed == this->m_zonePendingAdd.m_packed )
      {
        v8 = 1;
        v27 = 1;
      }
      else
      {
        v9 = this->m_lightmapsUsed.array[0];
        v10 = 0i64;
        LODWORD(v11) = 0;
        while ( v9 )
        {
LABEL_19:
          v12 = __lzcnt(v9);
          v13 = v12 + 32 * v11;
          if ( v12 >= 0x20 )
          {
            LODWORD(v24) = 32;
            LODWORD(v23) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          if ( (v9 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
            __debugbreak();
          v9 &= ~(0x80000000 >> v12);
          if ( this->m_lightmaps[v13].transientZone.m_packed == m_packed )
          {
            v28[v10] = v13;
            v10 = (unsigned int)(v10 + 1);
          }
        }
        while ( 1 )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= 0x20 )
            break;
          v9 = this->m_lightmapsUsed.array[v11];
          if ( v9 )
            goto LABEL_19;
        }
        if ( (int)v10 > 0 )
        {
          v14 = v28;
          v15 = (unsigned int)v10;
          do
          {
            v16 = (unsigned int)*v14;
            if ( this->m_state == INITIALIZING && this->m_flipTexturePending )
              m_activeAtlasState = 1 - this->m_activeAtlasState;
            else
              m_activeAtlasState = this->m_activeAtlasState;
            v18 = (unsigned int)*v14;
            v19 = &this->m_atlasState[m_activeAtlasState];
            nodeIndex = v19->m_packing[v16].nodeIndex;
            slice = v19->m_packing[v16].slice;
            v19->m_packing[v16].nodeIndex = -1;
            v19->m_packing[v16].slice = -1;
            this->m_lightmapWorldIndexMapping[this->m_lightmaps[v16].worldIndex] = -1;
            GfxLightmapAtlas::BinaryTreePacker::MarkNodeEmpty(&this->m_packers[(unsigned __int64)slice], nodeIndex);
            if ( (unsigned int)v16 >= 0x400 )
            {
              LODWORD(v26) = 1024;
              LODWORD(v25) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
                __debugbreak();
            }
            ++v14;
            this->m_lightmapsUsed.array[v18 >> 5] &= ~(0x80000000 >> (v16 & 0x1F));
            --v15;
          }
          while ( v15 );
        }
        v8 = v27;
      }
    }
    while ( this->m_zonesToFree.m_writePtr != this->m_zonesToFree.m_readPtr );
    if ( v8 )
    {
      if ( this->m_zonePendingAdd.m_zoneIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1312, ASSERT_TYPE_ASSERT, "(m_zonePendingAdd.m_zoneIndex != INVALID_ZONE_INDEX)", (const char *)&queryFormat, "m_zonePendingAdd.m_zoneIndex != INVALID_ZONE_INDEX") )
        __debugbreak();
      GfxLightmapAtlas::RemoveLightmap(this, this->m_zonePendingAdd);
    }
  }
}

/*
==============
RB_Debug_GetLightmapAtlasLightmapDesc
==============
*/
char RB_Debug_GetLightmapAtlasLightmapDesc(const GfxBackEndData *data, GfxLightmapType lightmapType, unsigned int lightmapIndex, unsigned int *width, unsigned int *height, unsigned int *worldIndex, XZoneHandleUnique *zone)
{
  GfxLightmapAtlas *v8; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 

  v8 = &g_lightmapAtlas[lightmapType];
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = v8->m_lightmapsUsed.array[0];
  while ( 1 )
  {
    for ( ; !v11; v11 = v8->m_lightmapsUsed.array[v10] )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= 0x20 )
        return 0;
    }
    v12 = __lzcnt(v11);
    v13 = v12 + 32 * (_DWORD)v10;
    if ( v12 >= 0x20 )
    {
      LODWORD(v16) = 32;
      LODWORD(v15) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( (v11 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v11 &= ~(0x80000000 >> v12);
    if ( v9 == lightmapIndex )
      break;
    ++v9;
  }
  if ( (unsigned int)v13 < 0x400 )
  {
    *width = v8->m_lightmaps[(unsigned int)v13].width;
    *height = v8->m_lightmaps[v13].height;
    *worldIndex = v8->m_lightmaps[(unsigned int)v13].worldIndex;
    *zone = v8->m_lightmaps[(unsigned int)v13].transientZone;
    return 1;
  }
  return 0;
}

/*
==============
RB_Debug_GetLightmapAtlasLightmapsCount
==============
*/
__int64 RB_Debug_GetLightmapAtlasLightmapsCount(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  unsigned int v2; 
  bitarray<1024> *p_m_lightmapsUsed; 
  __int64 v4; 

  v2 = 0;
  p_m_lightmapsUsed = &g_lightmapAtlas[lightmapType].m_lightmapsUsed;
  v4 = 32i64;
  do
  {
    v2 += __popcnt(p_m_lightmapsUsed->array[0]);
    p_m_lightmapsUsed = (bitarray<1024> *)((char *)p_m_lightmapsUsed + 4);
    --v4;
  }
  while ( v4 );
  return v2;
}

/*
==============
RB_GetLightimapPacking
==============
*/
char RB_GetLightimapPacking(GfxLightmapType lightmapType, unsigned int index, unsigned int *x, unsigned int *y, unsigned int *width, unsigned int *height, unsigned int *slice)
{
  __int64 v8; 
  GfxLightmapAtlas *v9; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 
  int v15; 

  v8 = index;
  v9 = &g_lightmapAtlas[lightmapType];
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 648, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( v9->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 652, ASSERT_TYPE_ASSERT, "(m_state == State::IDLE)", (const char *)&queryFormat, "m_state == State::IDLE") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0x800 )
  {
    v15 = 2048;
    LODWORD(v14) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 654, ASSERT_TYPE_ASSERT, "(unsigned)( worldLightmapIndex ) < (unsigned)( MAX_WORLD_LIGHTMAPS )", "worldLightmapIndex doesn't index MAX_WORLD_LIGHTMAPS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v11 = v9->m_lightmapWorldIndexMapping[v8];
  if ( (_DWORD)v11 == -1 || !bitarray_base<bitarray<1024>>::testBit(&v9->m_lightmapsUsed, v11) )
    return 0;
  v13 = 16 * v11 + 17712i64 * v9->m_activeAtlasState;
  *x = *(unsigned int *)((char *)&v9->m_atlasState[0].m_packing[0].x + v13);
  *y = *(unsigned int *)((char *)&v9->m_atlasState[0].m_packing[0].y + v13);
  *width = v9->m_lightmaps[v11].width;
  *height = v9->m_lightmaps[v11].height;
  *slice = *(unsigned int *)((char *)&v9->m_atlasState[0].m_packing[0].slice + v13);
  if ( v9->m_lightmaps[v11].worldIndex != (_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 676, ASSERT_TYPE_ASSERT, "(m_lightmaps[lightmapIndex].worldIndex == worldLightmapIndex)", (const char *)&queryFormat, "m_lightmaps[lightmapIndex].worldIndex == worldLightmapIndex") )
    __debugbreak();
  return 1;
}

/*
==============
RB_GetNumLightmapAtlasSlices
==============
*/
__int64 RB_GetNumLightmapAtlasSlices(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  return g_lightmapAtlas[lightmapType].m_atlasState[g_lightmapAtlas[lightmapType].m_renderAtlasState[data->lightmapAtlasIndex & 1]].m_numTextureSlices;
}

/*
==============
RB_IsLightmapAtlasIdle
==============
*/
bool RB_IsLightmapAtlasIdle(GfxLightmapType lightmapType)
{
  return g_lightmapAtlas[lightmapType].m_state == IDLE;
}

/*
==============
RB_ProcessGfxLightmapAtlasData
==============
*/
char RB_ProcessGfxLightmapAtlasData(GfxLightmapAtlasDataTemp *tempData, DB_BackendCallbackContext *context)
{
  DB_BackendCallbackContext::CallbackType callbackType; 
  bool v5; 
  unsigned __int64 userData; 
  signed int numLightmaps; 
  __int64 v9; 
  __int64 v10; 
  unsigned int i; 
  unsigned int copyDoneFence; 

  callbackType = context->callbackType;
  if ( callbackType == CALLBACK_TYPE_PROCESS )
  {
    if ( !context->userData )
    {
      if ( tempData->numLightmaps >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1893, ASSERT_TYPE_ASSERT, "(tempData->numLightmaps < GfxLightmapAtlas::MAX_ZONE_LIGHTMAPS)", (const char *)&queryFormat, "tempData->numLightmaps < GfxLightmapAtlas::MAX_ZONE_LIGHTMAPS") )
        __debugbreak();
      v5 = tempData->lightmapType < (unsigned int)GFX_LIGHTMAP_TYPE_COUNT;
      copyDoneFence = -1;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1897, ASSERT_TYPE_ASSERT, "(tempData->lightmapType < GfxLightmapType::GFX_LIGHTMAP_TYPE_COUNT)", (const char *)&queryFormat, "tempData->lightmapType < GfxLightmapType::GFX_LIGHTMAP_TYPE_COUNT") )
        __debugbreak();
      if ( GfxLightmapAtlas::AddLightmaps(&g_lightmapAtlas[tempData->lightmapType], context->computeState, tempData->lightmaps, tempData->numLightmaps, context->zoneId, tempData->firstLightmapIndex, &copyDoneFence) )
        context->userData = copyDoneFence | 0xFFFFFFFF00000000ui64;
    }
    userData = context->userData;
    if ( userData && RB_BackendDataCopier::CheckTempFence(&rbBackendDataCopier, userData) )
    {
      RB_BackendDataCopier::FreeTempFence(&rbBackendDataCopier, userData);
      RB_DynamicLightsets_ForceTransientUpdate(tempData->transientZone);
      return 1;
    }
    return 0;
  }
  if ( callbackType != CALLBACK_TYPE_RELEASE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1938, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
    return 0;
  }
  numLightmaps = tempData->numLightmaps;
  if ( numLightmaps > 0 )
  {
    v9 = 0i64;
    v10 = (unsigned int)numLightmaps;
    do
    {
      for ( i = 0; i < 3; ++i )
        ImageRaw_Release(&tempData->lightmaps[v9].textures[i]);
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  return 1;
}

/*
==============
RB_UpdateLightmapAtlas
==============
*/
void RB_UpdateLightmapAtlas(const GfxBackEndData *data, ComputeCmdBufState *state)
{
  GfxLightmapAtlas *v2; 
  __int64 v5; 
  GfxLightmapAtlas::State m_state; 
  __int32 v7; 
  int v8; 
  int v9; 
  __int64 m_activeAtlasState; 
  int m_numTextureSlices; 
  float m_singleSliceFefragmentationUtilizationThreshold; 
  __int128 v13; 
  GfxLightmapAtlas::BinaryTreePacker *m_packers; 
  __int64 v15; 
  double Utilization; 
  __int128 v17; 
  __int64 v18; 

  v2 = g_lightmapAtlas;
  v5 = 3i64;
  do
  {
    if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 496, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
      __debugbreak();
    GfxLightmapAtlas::ProcessRemovedLightmaps(v2);
    m_state = v2->m_state;
    if ( m_state )
    {
      v7 = m_state - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          GfxLightmapAtlas::UpdateWaitForTextureFree(v2);
      }
      else if ( v2->m_copyingFence )
      {
        if ( v2->m_flipTexturePending )
        {
          if ( v2->m_numWaitFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 542, ASSERT_TYPE_ASSERT, "(m_numWaitFrames == 0)", (const char *)&queryFormat, "m_numWaitFrames == 0") )
            __debugbreak();
          v8 = 1 - v2->m_activeAtlasState;
          ++v2->m_numWaitFrames;
          v2->m_activeAtlasState = v8;
          v9 = 2;
        }
        else
        {
          v9 = 0;
        }
        v2->m_state = v9;
        GfxLightmapAtlas::UpdatePackingBuffer(v2, state);
        GfxLightmapAtlas::PostCopy(v2, state, &v2->m_atlasState[v2->m_activeAtlasState]);
      }
      goto LABEL_27;
    }
    if ( v2->m_defragRequested._My_val )
      goto LABEL_26;
    m_activeAtlasState = v2->m_activeAtlasState;
    m_numTextureSlices = v2->m_atlasState[m_activeAtlasState].m_numTextureSlices;
    if ( m_numTextureSlices == 1 )
    {
      m_singleSliceFefragmentationUtilizationThreshold = v2->m_singleSliceFefragmentationUtilizationThreshold;
    }
    else
    {
      m_singleSliceFefragmentationUtilizationThreshold = v2->m_defragmentationUtilizationThreshold;
      if ( m_numTextureSlices > 1 )
        goto LABEL_22;
    }
    if ( v2->m_atlasState[m_activeAtlasState].m_textureSize <= 0x400 )
      goto LABEL_27;
LABEL_22:
    v13 = 0i64;
    if ( m_numTextureSlices > 0 )
    {
      m_packers = v2->m_packers;
      v15 = v2->m_atlasState[m_activeAtlasState].m_numTextureSlices;
      do
      {
        Utilization = GfxLightmapAtlas::BinaryTreePacker::GetUtilization(m_packers++, 0);
        v17 = v13;
        *(float *)&v17 = *(float *)&v13 + *(float *)&Utilization;
        v13 = v17;
        --v15;
      }
      while ( v15 );
    }
    if ( (float)(*(float *)&v13 / (float)m_numTextureSlices) <= m_singleSliceFefragmentationUtilizationThreshold )
LABEL_26:
      GfxLightmapAtlas::Defragment(v2, state);
LABEL_27:
    v18 = ((unsigned __int8)data->lightmapAtlasIndex - 1) & 1;
    v2->m_renderAtlasState[v18] = v2->m_activeAtlasState;
    v2->m_renderPackingBuffer[v18] = v2->m_activePackingBuffer;
    ++v2;
    --v5;
  }
  while ( v5 );
}

/*
==============
R_GetLightMapCommitTotal
==============
*/
unsigned __int64 R_GetLightMapCommitTotal()
{
  return s_lightmapCommitTotal;
}

/*
==============
R_GetLightmapAtlasPackingBuffer
==============
*/
GfxWrappedBuffer *R_GetLightmapAtlasPackingBuffer(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  return &g_lightmapAtlas[lightmapType].m_lightmapPackingBuffer[g_lightmapAtlas[lightmapType].m_renderPackingBuffer[data->lightmapAtlasIndex & 1]];
}

/*
==============
R_GetLightmapAtlasTexture
==============
*/
GfxImage *R_GetLightmapAtlasTexture(const GfxBackEndData *data, GfxLightmapType lightmapType, unsigned int index)
{
  int integer; 
  GfxImage *grayImage; 
  int v5; 
  GfxImage *result; 

  integer = r_lightMap->current.integer;
  if ( integer != 1 )
  {
    grayImage = NULL;
    if ( integer )
    {
      v5 = integer - 2;
      if ( v5 )
      {
        if ( v5 == 1 )
          grayImage = rgp.grayImage;
      }
      else
      {
        grayImage = rgp.whiteImage;
      }
    }
    else
    {
      grayImage = rgp.blackImage;
    }
    if ( !index || index == 1 )
      return grayImage;
  }
  result = &g_lightmapAtlas[lightmapType].m_atlasState[g_lightmapAtlas[lightmapType].m_renderAtlasState[data->lightmapAtlasIndex & 1]].m_texture[index];
  if ( (GfxLightmapAtlas *)((char *)&g_lightmapAtlas[lightmapType] + 17712 * g_lightmapAtlas[lightmapType].m_renderAtlasState[data->lightmapAtlasIndex & 1] + 232 * index) == (GfxLightmapAtlas *)-24904i64 || g_lightmapAtlas[lightmapType].m_atlasState[g_lightmapAtlas[lightmapType].m_renderAtlasState[data->lightmapAtlasIndex & 1]].m_texture[index].textureId == NULLID )
    return rgp.whiteImage;
  return result;
}

/*
==============
R_GetLightmapAtlasTextureSize
==============
*/
__int64 R_GetLightmapAtlasTextureSize(const GfxBackEndData *data, GfxLightmapType lightmapType)
{
  return g_lightmapAtlas[lightmapType].m_atlasState[g_lightmapAtlas[lightmapType].m_renderAtlasState[data->lightmapAtlasIndex & 1]].m_textureSize;
}

/*
==============
R_InitLightmapAtlas
==============
*/
void R_InitLightmapAtlas(void)
{
  __int64 v0; 
  int *v1; 
  unsigned int *p_m_activePackingBuffer; 
  unsigned int v3; 
  int v4; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13[8]; 

  v0 = 3i64;
  v11 = 39;
  v12 = 42;
  v1 = v13;
  v13[0] = 40;
  p_m_activePackingBuffer = &g_lightmapAtlas[0].m_activePackingBuffer;
  v13[1] = 39;
  v13[2] = 32;
  v13[3] = 40;
  v13[4] = 39;
  v13[5] = 32;
  v13[6] = 6;
  do
  {
    v3 = *(v1 - 2);
    v4 = 131074;
    *(_QWORD *)(p_m_activePackingBuffer + 4107) = 0i64;
    v5 = 0;
    *(_QWORD *)(p_m_activePackingBuffer + 4109) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4111) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4113) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4115) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4117) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4119) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4121) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4123) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4125) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4127) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4129) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4131) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4133) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4135) = 0i64;
    *(_QWORD *)(p_m_activePackingBuffer + 4137) = 0i64;
    *(p_m_activePackingBuffer - 36) = v3;
    v6 = v3 - 33 <= 0xC;
    *((_QWORD *)p_m_activePackingBuffer - 17) = 0i64;
    v7 = *(v1 - 1);
    if ( !v6 )
      v4 = 8519682;
    *(p_m_activePackingBuffer - 30) = v7;
    *(p_m_activePackingBuffer - 35) = v4;
    v6 = v7 - 33 <= 0xC;
    *(p_m_activePackingBuffer - 32) = 1;
    v8 = *v1;
    v9 = 131074;
    if ( !v6 )
      v9 = 8519682;
    *(p_m_activePackingBuffer - 24) = v8;
    *(p_m_activePackingBuffer - 29) = v9;
    *((_BYTE *)p_m_activePackingBuffer - 124) = 1;
    v10 = 131074;
    *((_QWORD *)p_m_activePackingBuffer - 14) = 0i64;
    if ( (unsigned int)(v8 - 33) > 0xC )
      v10 = 8519682;
    *(p_m_activePackingBuffer - 26) = 1;
    *(p_m_activePackingBuffer - 23) = v10;
    *((_BYTE *)p_m_activePackingBuffer - 100) = 1;
    *((_QWORD *)p_m_activePackingBuffer - 11) = 0i64;
    *(p_m_activePackingBuffer - 20) = 1;
    *((_BYTE *)p_m_activePackingBuffer - 76) = 1;
    do
      R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)&p_m_activePackingBuffer[8 * v5++ - 16], GfxWrappedBuffer_Structured, 8, 0x800u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "lightmap atlas transform params");
    while ( v5 < 2 );
    memset_0(p_m_activePackingBuffer + 4139, -1, 0x2000ui64);
    *(_QWORD *)p_m_activePackingBuffer = 0i64;
    p_m_activePackingBuffer[15044] = 0;
    *((_QWORD *)p_m_activePackingBuffer + 1) = 0i64;
    p_m_activePackingBuffer[4] = 0;
    *(p_m_activePackingBuffer - 18) = 0;
    *((_QWORD *)p_m_activePackingBuffer + 4) = 3i64;
    p_m_activePackingBuffer[6] = 1048576000;
    p_m_activePackingBuffer[5] = 1056964608;
    p_m_activePackingBuffer[7] = 0;
    p_m_activePackingBuffer[19141] = -65536;
    *((_BYTE *)p_m_activePackingBuffer + 40) = 0;
    *((_QWORD *)p_m_activePackingBuffer + 10086) = 0i64;
    p_m_activePackingBuffer[20176] = 0;
    *((_QWORD *)p_m_activePackingBuffer + 10087) = 0x40000000i64;
    *((_QWORD *)p_m_activePackingBuffer + 10085) = Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_GPU_PRIVATE, 0x40000000ui64, "lightmap atlas va range");
    *((_BYTE *)p_m_activePackingBuffer + 80708) = 0;
    GfxLightmapAtlas::InitLightmapAtlasState((GfxLightmapAtlas *)(p_m_activePackingBuffer - 36), (GfxLightmapAtlas::LightmapAtlasState *)(p_m_activePackingBuffer + 6188));
    p_m_activePackingBuffer[20166] = 0;
    v1 += 3;
    p_m_activePackingBuffer[20167] = 0;
    p_m_activePackingBuffer[20168] = 0;
    p_m_activePackingBuffer[20169] = 0;
    p_m_activePackingBuffer += 20214;
    --v0;
  }
  while ( v0 );
}

/*
==============
R_RemoveZoneLightmapsFromAtlas
==============
*/
void R_RemoveZoneLightmapsFromAtlas(XZoneHandleUnique zone)
{
  __int64 v1; 
  __int64 v3; 
  MPSCQueue<XZoneHandleUnique,1024> *p_m_zonesToFree; 
  volatile int m_readPtr; 
  signed __int32 v6; 
  volatile int *p_m_writePtr; 

  v1 = 0i64;
  v3 = 3i64;
  do
  {
    p_m_zonesToFree = &g_lightmapAtlas[v1].m_zonesToFree;
    m_readPtr = p_m_zonesToFree->m_readPtr;
    if ( (((unsigned __int8)&g_lightmapAtlas[0].m_zonesToFree - 40 * (_BYTE)v1) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &p_m_zonesToFree->m_allocPtr) )
      __debugbreak();
    v6 = _InterlockedExchangeAdd(&p_m_zonesToFree->m_allocPtr, 1u);
    if ( (unsigned int)(v6 - m_readPtr) >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 85, ASSERT_TYPE_ASSERT, "(( writeSlot - readSlot ) < QUEUED_ITEMS_MAX)", (const char *)&queryFormat, "( writeSlot - readSlot ) < QUEUED_ITEMS_MAX") )
      __debugbreak();
    p_m_writePtr = &p_m_zonesToFree->m_writePtr;
    p_m_zonesToFree->m_items[v6 & 0x3FF] = zone;
    while ( 1 )
    {
      if ( (((_BYTE)p_m_zonesToFree + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writePtr) )
        __debugbreak();
      if ( v6 == _InterlockedCompareExchange(p_m_writePtr, v6 + 1, v6) )
        break;
      _mm_pause();
    }
    ++v1;
    --v3;
  }
  while ( v3 );
}

/*
==============
R_RequestLightmapAtlasDefrag
==============
*/
void R_RequestLightmapAtlasDefrag(void)
{
  unsigned int i; 
  __int64 v1; 

  for ( i = 0; i < 3; ++i )
  {
    v1 = (int)i;
    g_lightmapAtlas[v1].m_defragRequested._My_val = 1;
  }
}

/*
==============
R_ShutdownLightmapAtlas
==============
*/
void R_ShutdownLightmapAtlas(void)
{
  GfxLightmapAtlas *v0; 
  GfxImage *m_texture; 
  __int64 v2; 
  GfxTextureId *p_textureId; 
  __int64 v4; 
  GfxImage *v5; 
  __int64 v6; 
  GfxTextureId *v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  GfxLightmapAtlas *v11; 

  v0 = &g_lightmapAtlas[2];
  v11 = &g_lightmapAtlas[2];
  do
  {
    v9 = 0;
    m_texture = v0->m_atlasState[0].m_texture;
    do
    {
      v2 = 3i64;
      p_textureId = &m_texture[3].textureId;
      v10 = 3i64;
      v4 = 0i64;
      v5 = m_texture;
      do
      {
        if ( !Image_IsReleased(v5) )
        {
          Image_Release(v5);
          v6 = 0i64;
          v7 = p_textureId;
          v8 = 8i64;
          do
          {
            if ( (*v7 & 0xFFFFFFFB) != 0 )
            {
              R_ReleaseShaderTextureRWView((GfxShaderTextureRWView *)&m_texture[3] + v4 + v6);
              R_AssignNullShaderTextureRWView((GfxShaderTextureRWView *)&m_texture[3] + v4 + v6);
            }
            ++v6;
            v7 += 6;
            --v8;
          }
          while ( v8 );
          v2 = v10;
        }
        ++v5;
        v4 += 8i64;
        p_textureId += 48;
        v10 = --v2;
      }
      while ( v2 );
      R_ShutdownGfxWrappedBuffer(&v11->m_lightmapPackingBuffer[v9]);
      m_texture = (GfxImage *)((char *)m_texture + 17712);
      ++v9;
    }
    while ( v9 < 2 );
    v0 = v11 - 1;
    v11 = v0;
  }
  while ( (__int64)v0 >= (__int64)g_lightmapAtlas );
}

/*
==============
R_ToggleLightmapAtlasFrame
==============
*/
__int64 R_ToggleLightmapAtlasFrame()
{
  return ++GfxLightmapAtlas::sm_lightmapAtlasFrame;
}

/*
==============
GfxLightmapAtlas::RemoveLightmap
==============
*/
void GfxLightmapAtlas::RemoveLightmap(GfxLightmapAtlas *this, XZoneHandleUnique zoneId)
{
  volatile int m_readPtr; 
  MPSCQueue<XZoneHandleUnique,1024> *p_m_zonesToFree; 
  volatile int *p_m_allocPtr; 
  signed __int32 v6; 
  volatile int *p_m_writePtr; 

  m_readPtr = this->m_zonesToFree.m_readPtr;
  p_m_zonesToFree = &this->m_zonesToFree;
  p_m_allocPtr = &this->m_zonesToFree.m_allocPtr;
  if ( (((_BYTE)this - 88) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_zonesToFree.m_allocPtr) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(p_m_allocPtr, 1u);
  if ( (unsigned int)(v6 - m_readPtr) >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 85, ASSERT_TYPE_ASSERT, "(( writeSlot - readSlot ) < QUEUED_ITEMS_MAX)", (const char *)&queryFormat, "( writeSlot - readSlot ) < QUEUED_ITEMS_MAX") )
    __debugbreak();
  p_m_zonesToFree->m_items[v6 & 0x3FF] = zoneId;
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
GfxLightmapAtlas::ScheduleCopies
==============
*/
void GfxLightmapAtlas::ScheduleCopies(GfxLightmapAtlas *this, const GfxLightmapAtlas::LightmapDesc *lightmaps, const bitarray<1024> *lightmapsUsed, const GfxLightmapAtlas::LightmapAtlasState *oldState, const GfxLightmapAtlas::LightmapAtlasState *newState)
{
  unsigned int v5; 
  const GfxLightmapAtlas::LightmapDesc *v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  const GfxLightmapAtlas::LightmapAtlasState *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int srcSlice; 
  GfxLightmapAtlas::Packing *v16; 
  GfxLightmapAtlas::Packing *v17; 
  GfxTextureId textureId; 
  __int64 width; 
  __int64 height; 

  v5 = lightmapsUsed->array[0];
  v8 = lightmaps;
  LODWORD(v9) = 0;
  while ( v5 )
  {
LABEL_6:
    v10 = __lzcnt(v5);
    v11 = v10 + 32 * (_DWORD)v9;
    if ( v10 >= 0x20 )
    {
      LODWORD(height) = 32;
      LODWORD(width) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", width, height) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v10)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v12 = newState;
    v5 &= ~(0x80000000 >> v10);
    v13 = v8[(unsigned int)v11].width;
    v14 = v8[(unsigned int)v11].height;
    srcSlice = oldState->m_packing[v11].slice;
    v16 = &oldState->m_packing[v11];
    v17 = &newState->m_packing[v11];
    if ( srcSlice == -1 || v16->nodeIndex == -1 )
    {
      v8 = lightmaps;
    }
    else
    {
      textureId = oldState->m_texture[0].textureId;
      if ( textureId )
      {
        RB_BackendDataCopier::CopyTexRect(&rbBackendDataCopier, 0, textureId, v16->x, v16->y, v13, v14, 0, srcSlice, newState->m_texture[0].textureId, v17->x, v17->y, 0, v17->slice);
        srcSlice = v16->slice;
        v12 = newState;
      }
      RB_BackendDataCopier::CopyTexRect(&rbBackendDataCopier, 0, oldState->m_texture[1].textureId, v16->x, v16->y, v13, v14, 0, srcSlice, v12->m_texture[1].textureId, v17->x, v17->y, 0, v17->slice);
      RB_BackendDataCopier::CopyTexRect(&rbBackendDataCopier, 0, oldState->m_texture[2].textureId, v16->x, v16->y, v13, v14, 0, v16->slice, newState->m_texture[2].textureId, v17->x, v17->y, 0, v17->slice);
      v8 = lightmaps;
    }
  }
  while ( 1 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 0x20 )
      break;
    v5 = lightmapsUsed->array[v9];
    if ( v5 )
      goto LABEL_6;
  }
}

/*
==============
GfxLightmapAtlas::ScheduleWaitForCopies
==============
*/
void GfxLightmapAtlas::ScheduleWaitForCopies(GfxLightmapAtlas *this)
{
  this->m_copyingFence = 0;
  RB_BackendDataCopier::InsertCPUFence(&rbBackendDataCopier, 0, &this->m_copyingFence, 1u);
  this->m_state = INITIALIZING;
  this->m_numWaitFrames = 0;
}

/*
==============
GfxLightmapAtlas::ShouldDefragment
==============
*/
bool GfxLightmapAtlas::ShouldDefragment(GfxLightmapAtlas *this)
{
  __int64 m_activeAtlasState; 
  signed int m_numTextureSlices; 
  float m_singleSliceFefragmentationUtilizationThreshold; 
  __int128 v4; 
  GfxLightmapAtlas::BinaryTreePacker *m_packers; 
  __int64 v6; 
  double Utilization; 
  __int128 v8; 

  if ( this->m_defragRequested._My_val )
    return 1;
  m_activeAtlasState = this->m_activeAtlasState;
  m_numTextureSlices = this->m_atlasState[m_activeAtlasState].m_numTextureSlices;
  if ( m_numTextureSlices == 1 )
  {
    m_singleSliceFefragmentationUtilizationThreshold = this->m_singleSliceFefragmentationUtilizationThreshold;
    goto LABEL_5;
  }
  m_singleSliceFefragmentationUtilizationThreshold = this->m_defragmentationUtilizationThreshold;
  if ( m_numTextureSlices <= 1 )
  {
LABEL_5:
    if ( this->m_atlasState[m_activeAtlasState].m_textureSize <= 0x400 )
      return 0;
  }
  v4 = 0i64;
  if ( m_numTextureSlices > 0 )
  {
    m_packers = this->m_packers;
    v6 = this->m_atlasState[m_activeAtlasState].m_numTextureSlices;
    do
    {
      Utilization = GfxLightmapAtlas::BinaryTreePacker::GetUtilization(m_packers++, 0);
      v8 = v4;
      *(float *)&v8 = *(float *)&v4 + *(float *)&Utilization;
      v4 = v8;
      --v6;
    }
    while ( v6 );
  }
  return (float)(*(float *)&v4 / (float)m_numTextureSlices) <= m_singleSliceFefragmentationUtilizationThreshold;
}

/*
==============
GfxLightmapAtlas::Shutdown
==============
*/
void GfxLightmapAtlas::Shutdown(GfxLightmapAtlas *this)
{
  GfxImage *m_texture; 
  __int64 v2; 
  GfxTextureId *p_textureId; 
  __int64 v4; 
  GfxImage *v5; 
  __int64 v6; 
  GfxTextureId *v7; 
  __int64 v8; 
  unsigned int v10; 
  __int64 v11; 

  v10 = 0;
  m_texture = this->m_atlasState[0].m_texture;
  do
  {
    v2 = 3i64;
    p_textureId = &m_texture[3].textureId;
    v11 = 3i64;
    v4 = 0i64;
    v5 = m_texture;
    do
    {
      if ( !Image_IsReleased(v5) )
      {
        Image_Release(v5);
        v6 = 0i64;
        v7 = p_textureId;
        v8 = 8i64;
        do
        {
          if ( (*v7 & 0xFFFFFFFB) != 0 )
          {
            R_ReleaseShaderTextureRWView((GfxShaderTextureRWView *)&m_texture[3] + v4 + v6);
            R_AssignNullShaderTextureRWView((GfxShaderTextureRWView *)&m_texture[3] + v4 + v6);
          }
          ++v6;
          v7 += 6;
          --v8;
        }
        while ( v8 );
        v2 = v11;
      }
      ++v5;
      v4 += 8i64;
      p_textureId += 48;
      v11 = --v2;
    }
    while ( v2 );
    R_ShutdownGfxWrappedBuffer(&this->m_lightmapPackingBuffer[v10]);
    m_texture = (GfxImage *)((char *)m_texture + 17712);
    ++v10;
  }
  while ( v10 < 2 );
}

/*
==============
GfxLightmapAtlas::TryPackLightmap
==============
*/
char GfxLightmapAtlas::TryPackLightmap(GfxLightmapAtlas *this, unsigned int atlasSize, unsigned int numSlices, unsigned int lightmapIndex, unsigned int *outNodeIndex, unsigned int *outSlice)
{
  unsigned __int64 v6; 
  unsigned int width; 
  signed int v11; 
  int LevelForSize; 
  bool v13; 
  char v14; 
  unsigned int FreeNode; 

  v6 = lightmapIndex;
  if ( lightmapIndex >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", lightmapIndex, 1024) )
    __debugbreak();
  if ( ((0x80000000 >> (v6 & 0x1F)) & this->m_lightmapsUsed.array[v6 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1346, ASSERT_TYPE_ASSERT, "(m_lightmapsUsed.testBit( lightmapIndex ))", (const char *)&queryFormat, "m_lightmapsUsed.testBit( lightmapIndex )") )
    __debugbreak();
  if ( this->m_lightmaps[v6].width < this->m_lightmaps[v6].height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1350, ASSERT_TYPE_ASSERT, "(lightmapToPack.width >= lightmapToPack.height)", (const char *)&queryFormat, "lightmapToPack.width >= lightmapToPack.height") )
    __debugbreak();
  width = this->m_lightmaps[v6].width;
  if ( width > atlasSize )
    return 0;
  v11 = 0;
  LevelForSize = GfxLightmapAtlas::GetLevelForSize(atlasSize, width, this->m_lightmaps[v6].height);
  if ( (int)numSlices <= 0 )
    return 0;
  while ( 1 )
  {
    v13 = bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)&this->m_packers[(__int64)v11], 1u);
    v14 = v13 + (bitarray_base<bitarray<16384>>::testBit((bitarray_base<bitarray<16384> > *)&this->m_packers[(__int64)v11], 0) ? 2 : 0);
    if ( v14 == 2 )
      goto LABEL_20;
    if ( !LevelForSize )
      break;
    FreeNode = GfxLightmapAtlas::BinaryTreePacker::FindFreeNode(&this->m_packers[(__int64)v11], LevelForSize, 1, 1);
    if ( FreeNode == -1 )
      FreeNode = GfxLightmapAtlas::BinaryTreePacker::FindFreeNode(&this->m_packers[(__int64)v11], LevelForSize, 2, 1);
    if ( FreeNode != -1 )
      goto LABEL_16;
LABEL_20:
    if ( ++v11 >= (int)numSlices )
      return 0;
  }
  if ( v14 )
    goto LABEL_20;
  FreeNode = 0;
LABEL_16:
  *outNodeIndex = FreeNode;
  *outSlice = v11;
  return 1;
}

/*
==============
GfxLightmapAtlas::Update
==============
*/
void GfxLightmapAtlas::Update(GfxLightmapAtlas *this, const GfxBackEndData *data, ComputeCmdBufState *state)
{
  GfxLightmapAtlas::State m_state; 
  __int32 v7; 
  int v8; 
  GfxLightmapAtlas::State v9; 
  __int64 m_activeAtlasState; 
  signed int m_numTextureSlices; 
  float m_singleSliceFefragmentationUtilizationThreshold; 
  __int128 v13; 
  GfxLightmapAtlas::BinaryTreePacker *m_packers; 
  __int64 v15; 
  double Utilization; 
  __int128 v17; 
  __int64 v18; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 496, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  GfxLightmapAtlas::ProcessRemovedLightmaps(this);
  m_state = this->m_state;
  if ( m_state )
  {
    v7 = m_state - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        GfxLightmapAtlas::UpdateWaitForTextureFree(this);
    }
    else if ( this->m_copyingFence )
    {
      if ( this->m_flipTexturePending )
      {
        if ( this->m_numWaitFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 542, ASSERT_TYPE_ASSERT, "(m_numWaitFrames == 0)", (const char *)&queryFormat, "m_numWaitFrames == 0") )
          __debugbreak();
        v8 = 1 - this->m_activeAtlasState;
        ++this->m_numWaitFrames;
        this->m_activeAtlasState = v8;
        v9 = SEARCHING;
      }
      else
      {
        v9 = IDLE;
      }
      this->m_state = v9;
      GfxLightmapAtlas::UpdatePackingBuffer(this, state);
      GfxLightmapAtlas::PostCopy(this, state, &this->m_atlasState[this->m_activeAtlasState]);
    }
    goto LABEL_26;
  }
  if ( this->m_defragRequested._My_val )
  {
LABEL_25:
    GfxLightmapAtlas::Defragment(this, state);
    goto LABEL_26;
  }
  m_activeAtlasState = this->m_activeAtlasState;
  m_numTextureSlices = this->m_atlasState[m_activeAtlasState].m_numTextureSlices;
  if ( m_numTextureSlices == 1 )
  {
    m_singleSliceFefragmentationUtilizationThreshold = this->m_singleSliceFefragmentationUtilizationThreshold;
  }
  else
  {
    m_singleSliceFefragmentationUtilizationThreshold = this->m_defragmentationUtilizationThreshold;
    if ( m_numTextureSlices > 1 )
      goto LABEL_21;
  }
  if ( this->m_atlasState[m_activeAtlasState].m_textureSize <= 0x400 )
    goto LABEL_26;
LABEL_21:
  v13 = 0i64;
  if ( m_numTextureSlices > 0 )
  {
    m_packers = this->m_packers;
    v15 = this->m_atlasState[m_activeAtlasState].m_numTextureSlices;
    do
    {
      Utilization = GfxLightmapAtlas::BinaryTreePacker::GetUtilization(m_packers++, 0);
      v17 = v13;
      *(float *)&v17 = *(float *)&v13 + *(float *)&Utilization;
      v13 = v17;
      --v15;
    }
    while ( v15 );
  }
  if ( (float)(*(float *)&v13 / (float)m_numTextureSlices) <= m_singleSliceFefragmentationUtilizationThreshold )
    goto LABEL_25;
LABEL_26:
  v18 = ((unsigned __int8)data->lightmapAtlasIndex - 1) & 1;
  this->m_renderAtlasState[v18] = this->m_activeAtlasState;
  this->m_renderPackingBuffer[v18] = this->m_activePackingBuffer;
}

/*
==============
GfxLightmapAtlas::UpdateCopying
==============
*/
void GfxLightmapAtlas::UpdateCopying(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  int v4; 
  GfxLightmapAtlas::State v5; 

  if ( this->m_copyingFence )
  {
    if ( this->m_flipTexturePending )
    {
      if ( this->m_numWaitFrames )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 542, ASSERT_TYPE_ASSERT, "(m_numWaitFrames == 0)", (const char *)&queryFormat, "m_numWaitFrames == 0") )
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
    GfxLightmapAtlas::UpdatePackingBuffer(this, state);
    GfxLightmapAtlas::PostCopy(this, state, &this->m_atlasState[this->m_activeAtlasState]);
  }
}

/*
==============
GfxLightmapAtlas::UpdateIdle
==============
*/
void GfxLightmapAtlas::UpdateIdle(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  __int64 m_activeAtlasState; 
  signed int m_numTextureSlices; 
  float m_singleSliceFefragmentationUtilizationThreshold; 
  __int128 v7; 
  __int64 v8; 
  GfxLightmapAtlas::BinaryTreePacker *m_packers; 
  double Utilization; 
  __int128 v11; 

  if ( this->m_defragRequested._My_val )
  {
LABEL_10:
    GfxLightmapAtlas::Defragment(this, state);
    return;
  }
  m_activeAtlasState = this->m_activeAtlasState;
  m_numTextureSlices = this->m_atlasState[m_activeAtlasState].m_numTextureSlices;
  if ( m_numTextureSlices == 1 )
  {
    m_singleSliceFefragmentationUtilizationThreshold = this->m_singleSliceFefragmentationUtilizationThreshold;
  }
  else
  {
    m_singleSliceFefragmentationUtilizationThreshold = this->m_defragmentationUtilizationThreshold;
    if ( m_numTextureSlices > 1 )
      goto LABEL_6;
  }
  if ( this->m_atlasState[m_activeAtlasState].m_textureSize <= 0x400 )
    return;
LABEL_6:
  v7 = 0i64;
  if ( m_numTextureSlices > 0 )
  {
    v8 = this->m_atlasState[m_activeAtlasState].m_numTextureSlices;
    m_packers = this->m_packers;
    do
    {
      Utilization = GfxLightmapAtlas::BinaryTreePacker::GetUtilization(m_packers++, 0);
      v11 = v7;
      *(float *)&v11 = *(float *)&v7 + *(float *)&Utilization;
      v7 = v11;
      --v8;
    }
    while ( v8 );
  }
  if ( (float)(*(float *)&v7 / (float)m_numTextureSlices) <= m_singleSliceFefragmentationUtilizationThreshold )
    goto LABEL_10;
}

/*
==============
GfxLightmapAtlas::UpdatePackingBuffer
==============
*/
void GfxLightmapAtlas::UpdatePackingBuffer(GfxLightmapAtlas *this, ComputeCmdBufState *state)
{
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  GfxLightmapAtlas::LightmapAtlasState *v8; 
  unsigned int *v9; 
  char *v10; 
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  void *data; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 593, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  v3 = ((unsigned __int8)this->m_activePackingBuffer - 1) & 1;
  this->m_activePackingBuffer = v3;
  data = this->m_lightmapPackingBuffer[v3].data;
  memset_0(data, 0, 0x4000ui64);
  v4 = this->m_lightmapsUsed.array[0];
  LODWORD(v5) = 0;
  while ( v4 )
  {
LABEL_8:
    v6 = __lzcnt(v4);
    v7 = v6 + 32 * (_DWORD)v5;
    if ( v6 >= 0x20 )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v6);
    v8 = &this->m_atlasState[this->m_activeAtlasState];
    v9 = &v8->m_textureSize + 4 * v7;
    v10 = (char *)this + 16 * v7;
    v11 = *((unsigned int *)v10 + 49);
    if ( v9[323] == -1 )
    {
      if ( v8->m_packing[v7].nodeIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 613, ASSERT_TYPE_ASSERT, "(atlasState.m_packing[lightmapIndex].nodeIndex == -1)", (const char *)&queryFormat, "atlasState.m_packing[lightmapIndex].nodeIndex == -1") )
        __debugbreak();
    }
    else
    {
      if ( (v9[323] & 0x3F) != v9[323] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 617, ASSERT_TYPE_ASSERT, "(( atlasState.m_packing[lightmapIndex].slice & ( ( 1 << 6 ) - 1 ) ) == atlasState.m_packing[lightmapIndex].slice)", (const char *)&queryFormat, "( atlasState.m_packing[lightmapIndex].slice & LIGHTMAP_PACKING_PARAMS_SLICE_MASK ) == atlasState.m_packing[lightmapIndex].slice") )
        __debugbreak();
      if ( (v9[321] & 0x1FFF) != v9[321] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 618, ASSERT_TYPE_ASSERT, "(( atlasState.m_packing[lightmapIndex].x & ( ( 1 << 13 ) - 1 ) ) == atlasState.m_packing[lightmapIndex].x)", (const char *)&queryFormat, "( atlasState.m_packing[lightmapIndex].x & LIGHTMAP_PACKING_PARAMS_X_MASK ) == atlasState.m_packing[lightmapIndex].x") )
        __debugbreak();
      if ( (v9[322] & 0x1FFF) != v9[322] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 619, ASSERT_TYPE_ASSERT, "(( atlasState.m_packing[lightmapIndex].y & ( ( 1 << 13 ) - 1 ) ) == atlasState.m_packing[lightmapIndex].y)", (const char *)&queryFormat, "( atlasState.m_packing[lightmapIndex].y & LIGHTMAP_PACKING_PARAMS_Y_MASK ) == atlasState.m_packing[lightmapIndex].y") )
        __debugbreak();
      v12 = v9[321] | ((v9[322] | (v9[323] << 13)) << 13);
      if ( (unsigned __int16)*((_DWORD *)v10 + 47) != *((_DWORD *)v10 + 47) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 626, ASSERT_TYPE_ASSERT, "(( m_lightmaps[lightmapIndex].width & ( ( 1 << 16 ) - 1 ) ) == m_lightmaps[lightmapIndex].width)", (const char *)&queryFormat, "( m_lightmaps[lightmapIndex].width & LIGHTMAP_PACKING_PARAMS_WIDTH_MASK ) == m_lightmaps[lightmapIndex].width") )
        __debugbreak();
      if ( (unsigned __int16)this->m_lightmaps[v7].height != this->m_lightmaps[v7].height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 627, ASSERT_TYPE_ASSERT, "(( m_lightmaps[lightmapIndex].height & ( ( 1 << 16 ) - 1 ) ) == m_lightmaps[lightmapIndex].height)", (const char *)&queryFormat, "( m_lightmaps[lightmapIndex].height & LIGHTMAP_PACKING_PARAMS_HEIGHT_MASK ) == m_lightmaps[lightmapIndex].height") )
        __debugbreak();
      v13 = *((_DWORD *)v10 + 47) | (this->m_lightmaps[v7].height << 16);
      *((_DWORD *)data + 2 * v11) = v12;
      *((_DWORD *)data + 2 * v11 + 1) = v13;
    }
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x20 )
      break;
    v4 = this->m_lightmapsUsed.array[v5];
    if ( v4 )
      goto LABEL_8;
  }
}

/*
==============
GfxLightmapAtlas::UpdateWaitForTextureFree
==============
*/
void GfxLightmapAtlas::UpdateWaitForTextureFree(GfxLightmapAtlas *this)
{
  __int64 v2; 
  GfxLightmapAtlas::LightmapAtlasState *v3; 
  Mem_PageRange v4; 
  unsigned int *p_rwView; 
  GfxImage *m_texture; 
  __int64 v7; 
  unsigned int *v8; 
  __int64 v9; 
  unsigned __int64 m_textureMemSize; 
  unsigned __int8 *m_textureMem; 
  unsigned int v12; 
  __int64 v13; 
  Mem_PageRange inoutPageRange; 
  GfxLightmapAtlas *v15; 
  StreamerMemLoan result; 

  v15 = this;
  if ( !this->m_flipTexturePending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 563, ASSERT_TYPE_ASSERT, "(m_flipTexturePending)", (const char *)&queryFormat, "m_flipTexturePending") )
    __debugbreak();
  if ( ++this->m_numWaitFrames >= 3u )
  {
    v2 = 0i64;
    v3 = &this->m_atlasState[1 - this->m_activeAtlasState];
    v4 = (Mem_PageRange)3i64;
    inoutPageRange = (Mem_PageRange)3i64;
    p_rwView = &v3->m_textureSliceRWViews[0][0].rwView;
    m_texture = v3->m_texture;
    do
    {
      if ( !Image_IsReleased(m_texture) )
      {
        Image_Release(m_texture);
        v7 = 0i64;
        v8 = p_rwView;
        v9 = 8i64;
        do
        {
          if ( (*v8 & 0xFFFFFFFB) != 0 )
          {
            R_ReleaseShaderTextureRWView(&v3->m_textureSliceRWViews[v2][v7]);
            R_AssignNullShaderTextureRWView(&v3->m_textureSliceRWViews[v2][v7]);
          }
          ++v7;
          v8 += 6;
          --v9;
        }
        while ( v9 );
        v4 = inoutPageRange;
      }
      ++m_texture;
      ++v2;
      p_rwView += 48;
      inoutPageRange = (Mem_PageRange)--*(_QWORD *)&v4;
    }
    while ( v4 );
    if ( v3->m_textureMem )
    {
      if ( !v3->m_textureMemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightmap_atlas.cpp", 1007, ASSERT_TYPE_ASSERT, "(prevAtlasState.m_textureMemSize != 0)", (const char *)&queryFormat, "prevAtlasState.m_textureMemSize != 0") )
        __debugbreak();
      m_textureMemSize = v3->m_textureMemSize;
      m_textureMem = v3->m_textureMem;
      inoutPageRange = v3->m_texturePageRange;
      Mem_Paged_DecommitMemoryPartial(&result, m_textureMem, &m_textureMem[m_textureMemSize], m_textureMem, &inoutPageRange);
      StreamerMemLoan::~StreamerMemLoan(&result);
      v12 = -LODWORD(v3->m_textureMemSize);
      if ( ((unsigned __int8)&s_lightmapCommitTotal & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_lightmapCommitTotal) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_lightmapCommitTotal, v12);
    }
    v3->m_texturePageRange = MEM_PAGE_RANGE_INVALID_0;
    v13 = (__int64)v15;
    v3->m_textureMem = NULL;
    v3->m_textureMemSize = 0i64;
    *(_DWORD *)(v13 + 72) = 0;
    *(_BYTE *)(v13 + 184) = 0;
  }
}

