/*
==============
R_ST_SelectClutterCollection
==============
*/

void __fastcall R_ST_SelectClutterCollection(int clutterCollectionIndex)
{
  ?R_ST_SelectClutterCollection@@YAXH@Z(clutterCollectionIndex);
}

/*
==============
R_ST_ClutterRegisterDvars
==============
*/

void R_ST_ClutterRegisterDvars(void)
{
  ?R_ST_ClutterRegisterDvars@@YAXXZ();
}

/*
==============
R_ST_GetCameraCoords
==============
*/

vec2_t __fastcall R_ST_GetCameraCoords(const vec3_t *cameraPos, const GfxPlacement *surfacePlacement)
{
  return ?R_ST_GetCameraCoords@@YA?ATvec2_t@@AEBTvec3_t@@AEBUGfxPlacement@@@Z(cameraPos, surfacePlacement);
}

/*
==============
R_ST_GetClutterCollectionGPUDataBuffer
==============
*/

const GfxClutterCollectionGPUData *__fastcall R_ST_GetClutterCollectionGPUDataBuffer()
{
  return ?R_ST_GetClutterCollectionGPUDataBuffer@@YAPEBUGfxClutterCollectionGPUData@@XZ();
}

/*
==============
R_ST_Clutter_InitWorld
==============
*/

void R_ST_Clutter_InitWorld(void)
{
  ?R_ST_Clutter_InitWorld@@YAXXZ();
}

/*
==============
R_ST_ClutterSetSceneConstants
==============
*/

void __fastcall R_ST_ClutterSetSceneConstants(GfxViewInfo *viewInfo)
{
  ?R_ST_ClutterSetSceneConstants@@YAXAEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_ST_ClutterUpdateStats
==============
*/

void __fastcall RB_ST_ClutterUpdateStats(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_ST_ClutterUpdateStats@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_ST_GetClutterTilesCovered
==============
*/

bool __fastcall R_ST_GetClutterTilesCovered(const vec2_t *coords, const vec2_t *layerWorldSize, const float drawDistance, const vec2_t *tileSizeUV, base_vec2_t<unsigned int> *tileStart, base_vec2_t<unsigned int> *tileCount)
{
  return ?R_ST_GetClutterTilesCovered@@YA_NAEBTvec2_t@@0M0AEAT?$base_vec2_t@I@@1@Z(coords, layerWorldSize, drawDistance, tileSizeUV, tileStart, tileCount);
}

/*
==============
R_ST_Clutter_Init
==============
*/

void R_ST_Clutter_Init(void)
{
  ?R_ST_Clutter_Init@@YAXXZ();
}

/*
==============
R_ST_ClutterCollectionEnabled
==============
*/

bool __fastcall R_ST_ClutterCollectionEnabled(unsigned int clutterCollectionIndex)
{
  return ?R_ST_ClutterCollectionEnabled@@YA_NI@Z(clutterCollectionIndex);
}

/*
==============
R_ST_GetClutterLayerForCollection
==============
*/

const StTerrainClutterLayer *__fastcall R_ST_GetClutterLayerForCollection(const GfxClutterCollection *collection)
{
  return ?R_ST_GetClutterLayerForCollection@@YAAEBUStTerrainClutterLayer@@AEBUGfxClutterCollection@@@Z(collection);
}

/*
==============
R_ST_GetClutterTilesInstanceCount
==============
*/

unsigned int __fastcall R_ST_GetClutterTilesInstanceCount(const StDiskTerrainSurface *surface, const StTerrainClutterLayer *layer, const base_vec2_t<unsigned int> *tileStart, const base_vec2_t<unsigned int> *tileCount)
{
  return ?R_ST_GetClutterTilesInstanceCount@@YAIAEBUStDiskTerrainSurface@@AEBUStTerrainClutterLayer@@AEBT?$base_vec2_t@I@@2@Z(surface, layer, tileStart, tileCount);
}

/*
==============
R_ST_GetClutterLayerBitmaskSizeBytes
==============
*/

unsigned int __fastcall R_ST_GetClutterLayerBitmaskSizeBytes(const StTerrainClutterLayer *layer)
{
  return ?R_ST_GetClutterLayerBitmaskSizeBytes@@YAIAEBUStTerrainClutterLayer@@@Z(layer);
}

/*
==============
R_ST_Clutter_ShutdownWorld
==============
*/

void R_ST_Clutter_ShutdownWorld(void)
{
  ?R_ST_Clutter_ShutdownWorld@@YAXXZ();
}

/*
==============
R_ST_GetClutterTilesCoveredForCollection
==============
*/

bool __fastcall R_ST_GetClutterTilesCoveredForCollection(const vec3_t *cameraPos, const GfxClutterCollection *collection, base_vec2_t<unsigned int> *tileStart, base_vec2_t<unsigned int> *tileCount)
{
  return ?R_ST_GetClutterTilesCoveredForCollection@@YA_NAEBTvec3_t@@AEBUGfxClutterCollection@@AEAT?$base_vec2_t@I@@2@Z(cameraPos, collection, tileStart, tileCount);
}

/*
==============
RB_ST_ClutterUpdateStats
==============
*/
void RB_ST_ClutterUpdateStats(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  unsigned int readbackIndex; 
  unsigned int instanceCountBufferSize; 
  unsigned int cpuIndex; 

  if ( rgp.world->smodels.clutterCollectionCount )
  {
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_drawClutterInfo, "cg_drawClutterInfo") )
    {
      readbackIndex = s_clutterReadBackRing.readbackIndex;
      instanceCountBufferSize = s_clutterReadBackRing.instanceCountBufferSize;
      cpuIndex = s_clutterReadBackRing.cpuIndex;
      R_CopyBufferData(state, &s_clutterReadBackRing.clutterCollectionGPUDataReadback[s_clutterReadBackRing.readbackIndex], 0, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0, s_clutterReadBackRing.instanceCountBufferSize);
      s_clutterReadBackRing.readbackIndex = (readbackIndex + 1) % 3;
      R_ReadbackGfxWrappedBuffer(&s_clutterReadBackRing.clutterCollectionGPUDataReadback[cpuIndex], s_clutterReadBackRing.clutterCollectionGPUDataCPU[(cpuIndex + 1) % 3], instanceCountBufferSize);
      s_clutterReadBackRing.cpuIndex = (cpuIndex + 1) % 3;
    }
  }
}

/*
==============
R_ST_ClutterBitmask_StreamKeyLoadedFrontend
==============
*/
void R_ST_ClutterBitmask_StreamKeyLoadedFrontend(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  StreamKeyData *p_data; 
  unsigned __int8 *data; 
  unsigned int v5; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  if ( !*((_DWORD *)behaviorUserPtr + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 232, ASSERT_TYPE_ASSERT, "(bitmask->wordCount > 0)", (const char *)&queryFormat, "bitmask->wordCount > 0") )
    __debugbreak();
  if ( *((_QWORD *)behaviorUserPtr + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 233, ASSERT_TYPE_ASSERT, "(bitmask->bitmask == nullptr)", (const char *)&queryFormat, "bitmask->bitmask == nullptr") )
    __debugbreak();
  if ( *((_QWORD *)behaviorUserPtr + 6) && *((_DWORD *)behaviorUserPtr + 10) >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 234, ASSERT_TYPE_ASSERT, "(bitmask->bitmaskBuffer.IsNull())", (const char *)&queryFormat, "bitmask->bitmaskBuffer.IsNull()") )
    __debugbreak();
  p_data = &streamKey->data;
  if ( (streamKey->flags & 2) != 0 )
    data = (unsigned __int8 *)p_data->dataHandle.data;
  else
    data = Stream_AddressSpace_ResolveHandle(&p_data->dataHandle);
  v5 = *((_DWORD *)behaviorUserPtr + 2);
  *((_QWORD *)behaviorUserPtr + 2) = data;
  Load_GfxWrappedBuffer((GfxWrappedBuffer *)(behaviorUserPtr + 24), GfxWrappedBuffer_Raw, 4u, v5, data, "clutter sample bitmasks", 0);
}

/*
==============
R_ST_ClutterBitmask_StreamKeyPtrFixupRelocateBackend
==============
*/
void R_ST_ClutterBitmask_StreamKeyPtrFixupRelocateBackend(const StreamKey *streamKey)
{
  unsigned __int8 *data; 
  unsigned int v3; 

  _RBX = (char *)streamKey->behaviorUserPtr;
  if ( *((_QWORD *)_RBX + 2) )
  {
    if ( (streamKey->flags & 2) != 0 )
      data = streamKey->data.residentData;
    else
      data = Stream_AddressSpace_ResolveHandle(&streamKey->data.dataHandle);
    v3 = *((_DWORD *)_RBX + 2);
    _RCX = _RBX + 24;
    __asm { vmovups ymm0, ymmword ptr [rcx] }
    *((_QWORD *)_RBX + 2) = data;
    __asm { vmovups ymmword ptr [rbx+38h], ymm0 }
    Load_GfxWrappedBuffer((GfxWrappedBuffer *)(_RBX + 24), GfxWrappedBuffer_Raw, 4u, v3, data, "clutter sample bitmasks", 0);
  }
}

/*
==============
R_ST_ClutterBitmask_StreamKeyUnloadedBackend
==============
*/
void R_ST_ClutterBitmask_StreamKeyUnloadedBackend(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  GfxWrappedBuffer result; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  _RBX = behaviorUserPtr + 24;
  if ( *((_QWORD *)behaviorUserPtr + 6) && *((_DWORD *)behaviorUserPtr + 10) >= 2u )
    R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(behaviorUserPtr + 24));
  _RAX = R_GetNullGfxWrappedBuffer(&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
  }
}

/*
==============
R_ST_ClutterBitmask_StreamKeyUnloadedFrontend
==============
*/
void R_ST_ClutterBitmask_StreamKeyUnloadedFrontend(const StreamKey *streamKey)
{
  *(_QWORD *)(streamKey->assetHash + 16) = 0i64;
}

/*
==============
R_ST_ClutterBitmask_StreamKeyUnmapOldAddressBackend
==============
*/
void R_ST_ClutterBitmask_StreamKeyUnmapOldAddressBackend(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  GfxWrappedBuffer result; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  _RBX = behaviorUserPtr + 56;
  if ( *((_QWORD *)behaviorUserPtr + 10) )
  {
    if ( *((_DWORD *)behaviorUserPtr + 18) >= 2u )
    {
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(behaviorUserPtr + 56));
      _RAX = R_GetNullGfxWrappedBuffer(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx], ymm0
      }
    }
  }
}

/*
==============
R_ST_ClutterCollectionEnabled
==============
*/
_BOOL8 R_ST_ClutterCollectionEnabled(unsigned int clutterCollectionIndex)
{
  return s_clutterCollectionToggles[clutterCollectionIndex];
}

/*
==============
R_ST_ClutterLayerToggle
==============
*/
void R_ST_ClutterLayerToggle()
{
  int integer; 

  if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_drawClutterInfo, "cg_drawClutterInfo") )
    integer = s_selectedClutterCollection;
  else
    integer = r_st_clutterLayerSelected->current.integer;
  if ( integer >= 0 && integer < rgp.world->smodels.clutterCollectionCount )
    s_clutterCollectionToggles[integer] = !s_clutterCollectionToggles[integer];
}

/*
==============
R_ST_ClutterRegisterDvars
==============
*/

void __fastcall R_ST_ClutterRegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v6; 
  const dvar_t *v10; 
  const dvar_t *v14; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3f000000; value
  }
  r_st_clutterTintSampleLevel = Dvar_RegisterInt("NPRKKSMKOQ", 2, 0, 11, 0, "What combined map level to sample when tinting clutter. Too high resolution of mip may result in very high frequency tint changes.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v6 = Dvar_RegisterFloat("NPLPQTQRSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "When to begin flattening distant clutter objects based on their draw distances. 0 starts flattening out immediately, while 1.0 doesn't flatten at all. Requires the material to have Draw Distance Flattening enabled");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm2, cs:__real@3f000000; min
    vmovss  xmm1, cs:__real@3f800000; value
  }
  r_st_clutterFlattenPercentage = v6;
  v10 = Dvar_RegisterFloat("OPPKROMLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Similar to r_lodScale, but allows for additional scaling specifically for generated clutter. It combines with r_lodScale to determine the final scale for clutter");
  __asm { vmovss  xmm2, cs:__real@c47a0000; min }
  r_st_clutterLodScale = v10;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v14 = Dvar_RegisterFloat("NQTSLKSSTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Similar to r_lodBias, but allows for additional baising specifically for generated clutter. It combines with r_lodBias to determine the final bias for clutter");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@43fa0000; value
  }
  r_st_clutterLodBias = v14;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_st_clutterStreamDistance = Dvar_RegisterFloat("LORPPQRPNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The distance (from the drawing distance) that we should start streaming in clutter. 0.0 only begins streaming clutter once it's visible");
  r_st_clutterStreamBoost = Dvar_RegisterInt("OKNQOORNNM", 100, 0, 100, 0, "The streaming boost amount for when clutter is visible, but not yet streamed in");
  r_st_clutterEnable = Dvar_RegisterBool("NLLLOMTPPM", 1, 0, "Enable generation and rendering of runtime clutter");
  r_st_clutterLayerSelected = Dvar_RegisterInt("NRMTSPRMPL", -1, -1, 1024, 0, "Select a specific runtime clutter layer");
  r_st_clutterBitmaskStreamingEnabled = Dvar_RegisterBool("NKMOTSMPTT", 1, 0, "Enable streaming of clutter bitmasks");
  Cmd_AddCommandInternal("r_st_clutterLayerToggle", R_ST_ClutterLayerToggle, &R_ST_ClutterLayerToggle_VAR);
  Cmd_AddCommandInternal("r_st_clutterResetLayers", R_ST_ResetClutterLayers, &R_ST_ResetClutterLayers_VAR);
}

/*
==============
R_ST_ClutterSetSceneConstants
==============
*/
void R_ST_ClutterSetSceneConstants(GfxViewInfo *viewInfo)
{
  LODWORD(viewInfo->input.sceneConstants.drawDistanceFlatteningPercent) = r_st_clutterFlattenPercentage->current.integer;
  viewInfo->input.sceneConstants.clutterFirstInstanceIndex = rgp.world->smodels.clutterInstancePool.start;
}

/*
==============
R_ST_Clutter_Init
==============
*/
void R_ST_Clutter_Init(void)
{
  __m256i v4; 
  __m256i v5; 
  __int64 v6; 
  StreamKeyBehavior v7; 
  void *retaddr; 

  _R11 = &retaddr;
  v4.m256i_i64[1] = 0i64;
  *(_OWORD *)v5.m256i_i8 = 0ui64;
  LOBYTE(v6) = 0;
  v4.m256i_i64[0] = (__int64)R_ST_ClutterBitmask_StreamKeyLoadedFrontend;
  v4.m256i_i64[2] = (__int64)R_ST_ClutterBitmask_StreamKeyUnloadedFrontend;
  v4.m256i_i64[3] = (__int64)R_ST_ClutterBitmask_StreamKeyUnloadedBackend;
  v5.m256i_i64[2] = (__int64)R_ST_ClutterBitmask_StreamKeyPtrFixupRelocateBackend;
  v5.m256i_i64[3] = (__int64)R_ST_ClutterBitmask_StreamKeyUnmapOldAddressBackend;
  __asm
  {
    vmovups ymm0, [rsp+0C8h+var_A8]
    vmovups ymm1, [rsp+0C8h+var_88]
    vmovups ymmword ptr [rsp+0C8h+var_58.loadedFrontend], ymm0
  }
  HIDWORD(v6) = 64;
  __asm
  {
    vmovsd  xmm0, [rsp+0C8h+var_68]
    vmovsd  qword ptr [r11-18h], xmm0
    vmovups ymmword ptr [r11-38h], ymm1
  }
  StreamKey_SetBehavior(SKBI_CLUTTER_BITMASK, &v7);
}

/*
==============
R_ST_Clutter_InitWorld
==============
*/
void R_ST_Clutter_InitWorld(void)
{
  unsigned int v0; 
  unsigned __int64 clutterCollectionCount; 
  unsigned int v2; 
  char *v3; 
  unsigned __int64 v5; 
  bool *v15; 
  char v16; 
  GfxWrappedBuffer buffer[3]; 
  char v18; 
  int v19; 
  int v20; 
  int v21; 
  GfxWrappedBuffer result; 

  v0 = 0;
  PMem_BeginAlloc("Clutter World Data", PMEM_STACK_GAME);
  clutterCollectionCount = rgp.world->smodels.clutterCollectionCount;
  v2 = 0;
  v3 = &v18;
  _R14 = buffer;
  do
  {
    if ( (_DWORD)clutterCollectionCount )
    {
      R_CreateGfxWrappedBuffer(&buffer[v2], GfxWrappedBuffer_Structured, 8, clutterCollectionCount, GFX_DATA_FORMAT_R32_UINT, 0x1008u, D3D12_RESOURCE_STATE_COPY_DEST, NULL, NULL, "Clutter Collection GPU Data Readback Buffer");
      v5 = clutterCollectionCount;
      *(_QWORD *)v3 = PMem_Alloc(8 * clutterCollectionCount, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Clutter Collection GPU Data CPU Info");
    }
    else
    {
      _RAX = R_GetNullGfxWrappedBuffer(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r14], ymm0
      }
      *(_QWORD *)v3 = 0i64;
      v5 = clutterCollectionCount;
    }
    ++v2;
    ++_R14;
    v3 += 8;
  }
  while ( v2 < 3 );
  v19 = 8 * clutterCollectionCount;
  v20 = 0;
  v21 = 2;
  _RCX = &s_clutterReadBackRing;
  _RAX = &v16;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx+80h], ymm1
  }
  if ( (_DWORD)clutterCollectionCount )
  {
    v15 = (bool *)PMem_Alloc(v5, 1ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Clutter Collection Toggles");
    s_clutterCollectionToggles = v15;
    if ( rgp.world->smodels.clutterCollectionCount )
    {
      do
        v15[v0++] = 1;
      while ( v0 < rgp.world->smodels.clutterCollectionCount );
    }
  }
  PMem_EndAlloc("Clutter World Data", PMEM_STACK_GAME);
}

/*
==============
R_ST_Clutter_ShutdownWorld
==============
*/
void R_ST_Clutter_ShutdownWorld(void)
{
  unsigned int v0; 
  __int64 v1; 
  StreamerMemLoan result; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    if ( s_clutterReadBackRing.clutterCollectionGPUDataReadback[v1].data && s_clutterReadBackRing.clutterCollectionGPUDataReadback[v1].view.view >= 2 )
      R_ShutdownGfxWrappedBuffer(&s_clutterReadBackRing.clutterCollectionGPUDataReadback[v0]);
    ++v0;
    ++v1;
  }
  while ( v0 < 3 );
  PMem_Free(&result, "Clutter World Data", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
R_ST_GetCameraCoords
==============
*/
vec2_t R_ST_GetCameraCoords(const vec3_t *cameraPos, const GfxPlacement *surfacePlacement)
{
  vec3_t in; 
  vec4_t quat; 
  vec3_t out; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [rdx+10h]
    vmovss  xmm2, dword ptr [rcx+4]
    vsubss  xmm0, xmm2, dword ptr [rdx+14h]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsp+68h+in], xmm1
    vmovss  xmm1, dword ptr [rcx+8]
    vsubss  xmm2, xmm1, dword ptr [rdx+18h]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+68h+in+4], xmm0
    vmovss  xmm0, dword ptr [rdx]
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rsp+68h+in+8], xmm2
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+68h+quat], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+68h+quat+4], xmm2
    vmovss  xmm2, dword ptr [rdx+0Ch]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+68h+quat+8], xmm1
    vmovss  dword ptr [rsp+68h+quat+0Ch], xmm2
  }
  QuatTransform(&quat, &in, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+out]
    vmovss  xmm1, dword ptr [rsp+68h+out+4]
    vmovss  dword ptr [rsp+68h+in], xmm0
    vmovss  dword ptr [rsp+68h+in+4], xmm1
  }
  return *(vec2_t *)in.v;
}

/*
==============
R_ST_GetClutterCollectionGPUDataBuffer
==============
*/
GfxClutterCollectionGPUData *R_ST_GetClutterCollectionGPUDataBuffer()
{
  return s_clutterReadBackRing.clutterCollectionGPUDataCPU[s_clutterReadBackRing.cpuIndex];
}

/*
==============
R_ST_GetClutterLayerBitmaskSizeBytes
==============
*/
__int64 R_ST_GetClutterLayerBitmaskSizeBytes(const StTerrainClutterLayer *layer)
{
  return ((layer->tileCount.v[0] * layer->tileCount.v[1]) << 8) & 0x1FFFFFFF;
}

/*
==============
R_ST_GetClutterLayerForCollection
==============
*/
const StTerrainClutterLayer *R_ST_GetClutterLayerForCollection(const GfxClutterCollection *collection)
{
  const StTerrain *terrain; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned int surfaceCount; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 358, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  if ( collection->terrainSurfaceIndex >= terrain->surfaceCount )
  {
    surfaceCount = terrain->surfaceCount;
    LODWORD(v5) = collection->terrainSurfaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 360, ASSERT_TYPE_ASSERT, "(unsigned)( collection.terrainSurfaceIndex ) < (unsigned)( terrain->surfaceCount )", "collection.terrainSurfaceIndex doesn't index terrain->surfaceCount\n\t%i not in [0, %i)", v5, surfaceCount) )
      __debugbreak();
  }
  v3 = (__int64)&terrain->surfaces[collection->terrainSurfaceIndex];
  if ( (unsigned int)collection->clutterLayerIndex >= *(_DWORD *)(v3 + 168) )
  {
    LODWORD(v6) = *(_DWORD *)(v3 + 168);
    LODWORD(v5) = collection->clutterLayerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( collection.clutterLayerIndex ) < (unsigned)( surface.clutterLayerCount )", "collection.clutterLayerIndex doesn't index surface.clutterLayerCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return (const StTerrainClutterLayer *)(*(_QWORD *)(v3 + 176) + 84i64 * collection->clutterLayerIndex);
}

/*
==============
R_ST_GetClutterTilesCovered
==============
*/
bool R_ST_GetClutterTilesCovered(const vec2_t *coords, const vec2_t *layerWorldSize, const float drawDistance, const vec2_t *tileSizeUV)
{
  bool result; 

  __asm
  {
    vmovss  xmm5, cs:__real@3f800000
    vmovss  xmm3, cs:__real@3f000000
    vdivss  xmm1, xmm5, dword ptr [rdx+4]
    vdivss  xmm4, xmm5, dword ptr [rdx]
    vmulss  xmm0, xmm4, dword ptr [rcx]
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vaddss  xmm7, xmm0, xmm3
    vmulss  xmm0, xmm1, dword ptr [rcx+4]
    vsubss  xmm0, xmm3, xmm0
    vmulss  xmm4, xmm4, xmm2
    vmulss  xmm3, xmm1, xmm2
    vsubss  xmm1, xmm7, xmm4
    vcomiss xmm1, xmm5
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm6, [rsp+38h+var_18]
  }
  result = 0;
  __asm
  {
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
  }
  return result;
}

/*
==============
R_ST_GetClutterTilesCoveredForCollection
==============
*/
bool R_ST_GetClutterTilesCoveredForCollection(const vec3_t *cameraPos, const GfxClutterCollection *collection, base_vec2_t<unsigned int> *tileStart, base_vec2_t<unsigned int> *tileCount)
{
  const StTerrain *terrain; 
  GfxStaticModelCollection *collections; 
  __int64 smodelCollectionIndex; 
  char v34; 
  char v35; 
  bool result; 
  vec3_t in; 
  vec4_t quat; 
  vec3_t out; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
  }
  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 409, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.scaleWithoutFovScale; r_globals_t rg
    vmovss  xmm6, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.biasWithoutFovScale; r_globals_t rg
  }
  collections = rgp.world->smodels.collections;
  smodelCollectionIndex = collection->smodelCollectionIndex;
  __asm { vmovaps [rsp+0C8h+var_58], xmm8 }
  _RBX = (__int64)&terrain->surfaces[collection->terrainSurfaceIndex];
  *(double *)&_XMM0 = XModelGetLodOutDist(rgp.world->smodels.models[collections[smodelCollectionIndex].smodelIndex].model);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
    vsubss  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
    vdivss  xmm6, xmm1, xmm7
    vsubss  xmm1, xmm0, dword ptr [rbx+38h]
    vsubss  xmm0, xmm2, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+0C8h+in], xmm1
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
    vsubss  xmm2, xmm1, dword ptr [rbx+40h]
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rsp+0C8h+in+4], xmm0
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rsp+0C8h+in+8], xmm2
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+0C8h+quat], xmm0
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  dword ptr [rsp+0C8h+quat+4], xmm2
    vmovss  xmm2, dword ptr [rbx+34h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+0C8h+quat+8], xmm1
    vmovss  dword ptr [rsp+0C8h+quat+0Ch], xmm2
  }
  QuatTransform(&quat, &in, &out);
  __asm
  {
    vmovss  xmm5, cs:__real@3f800000
    vmovss  xmm2, cs:__real@3f000000
    vdivss  xmm1, xmm5, dword ptr [rsi+1Ch]
    vdivss  xmm3, xmm5, dword ptr [rsi+18h]
    vmulss  xmm0, xmm3, dword ptr [rsp+0C8h+out]
    vaddss  xmm4, xmm0, xmm2
    vmulss  xmm0, xmm1, dword ptr [rsp+0C8h+out+4]
    vsubss  xmm0, xmm2, xmm0
    vmulss  xmm3, xmm3, xmm6
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm1, xmm4, xmm3
    vcomiss xmm1, xmm5
  }
  if ( !(v34 | v35) )
    goto LABEL_9;
  __asm
  {
    vsubss  xmm6, xmm0, xmm2
    vcomiss xmm6, xmm5
  }
  if ( !(v34 | v35) )
    goto LABEL_9;
  __asm
  {
    vaddss  xmm8, xmm3, xmm4
    vxorps  xmm4, xmm4, xmm4
    vcomiss xmm8, xmm4
  }
  if ( !v34 )
  {
    __asm
    {
      vaddss  xmm7, xmm2, xmm0
      vcomiss xmm7, xmm4
      vdivss  xmm2, xmm5, dword ptr [rsi+10h]
      vdivss  xmm3, xmm5, dword ptr [rsi+14h]
      vminss  xmm0, xmm1, xmm5
      vmaxss  xmm0, xmm0, xmm4
      vmulss  xmm1, xmm0, xmm2
      vcvttss2si rcx, xmm1
      vminss  xmm0, xmm6, xmm5
      vmaxss  xmm0, xmm0, xmm4
      vmulss  xmm1, xmm0, xmm3
      vcvttss2si rax, xmm1
    }
    tileStart->v[1] = _RAX;
    __asm
    {
      vminss  xmm0, xmm8, xmm5
      vmaxss  xmm0, xmm0, xmm4
      vmulss  xmm1, xmm0, xmm2
      vcvttss2si rax, xmm1
    }
    tileStart->v[0] = _RCX;
    tileCount->v[0] = _RAX - _RCX + 1;
    __asm
    {
      vminss  xmm0, xmm7, xmm5
      vmaxss  xmm0, xmm0, xmm4
      vmulss  xmm1, xmm0, xmm3
      vcvttss2si rax, xmm1
    }
    tileCount->v[1] = _RAX - tileStart->v[1] + 1;
    result = 1;
  }
  else
  {
LABEL_9:
    result = 0;
  }
  __asm
  {
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm7, [rsp+0C8h+var_48]
  }
  return result;
}

/*
==============
R_ST_GetClutterTilesInstanceCount
==============
*/
__int64 R_ST_GetClutterTilesInstanceCount(const StDiskTerrainSurface *surface, const StTerrainClutterLayer *layer, const base_vec2_t<unsigned int> *tileStart, const base_vec2_t<unsigned int> *tileCount)
{
  const StDiskTerrainSurface *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *i; 
  unsigned int j; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  if ( tileStart->v[0] >= layer->tileCount.v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 426, ASSERT_TYPE_ASSERT, "(tileStart.x < layer.tileCount.x)", (const char *)&queryFormat, "tileStart.x < layer.tileCount.x") )
    __debugbreak();
  if ( tileStart->v[1] >= layer->tileCount.v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 427, ASSERT_TYPE_ASSERT, "(tileStart.y < layer.tileCount.y)", (const char *)&queryFormat, "tileStart.y < layer.tileCount.y") )
    __debugbreak();
  if ( tileCount->v[0] + tileStart->v[0] > layer->tileCount.v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 428, ASSERT_TYPE_ASSERT, "(tileStart.x + tileCount.x <= layer.tileCount.x)", (const char *)&queryFormat, "tileStart.x + tileCount.x <= layer.tileCount.x") )
    __debugbreak();
  if ( tileCount->v[1] + tileStart->v[1] > layer->tileCount.v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 429, ASSERT_TYPE_ASSERT, "(tileStart.y + tileCount.y <= layer.tileCount.y)", (const char *)&queryFormat, "tileStart.y + tileCount.y <= layer.tileCount.y") )
    __debugbreak();
  v7 = surface;
  v8 = 0;
  v9 = 0;
  for ( i = &surface->clutterTileInstanceCounts[layer->tileInstanceCountOffset]; v9 < tileCount->v[1]; ++v9 )
  {
    for ( j = 0; j < tileCount->v[0]; ++j )
    {
      v12 = j + tileStart->v[0] + layer->tileCount.v[0] * (v9 + tileStart->v[1]);
      if ( (unsigned int)v12 >= v7->clutterTileCount )
      {
        LODWORD(v15) = v7->clutterTileCount;
        LODWORD(v14) = j + tileStart->v[0] + layer->tileCount.v[0] * (v9 + tileStart->v[1]);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 440, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( surface.clutterTileCount )", "index doesn't index surface.clutterTileCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
        v7 = surface;
      }
      v8 += i[v12];
    }
  }
  return v8;
}

/*
==============
R_ST_ResetClutterLayers
==============
*/
void R_ST_ResetClutterLayers()
{
  __int64 v0; 
  bool *v1; 

  v0 = 0i64;
  if ( rgp.world->smodels.clutterCollectionCount )
  {
    v1 = s_clutterCollectionToggles;
    do
    {
      v1[v0] = 1;
      v0 = (unsigned int)(v0 + 1);
    }
    while ( (unsigned int)v0 < rgp.world->smodels.clutterCollectionCount );
  }
}

/*
==============
R_ST_SelectClutterCollection
==============
*/
void R_ST_SelectClutterCollection(int clutterCollectionIndex)
{
  s_selectedClutterCollection = clutterCollectionIndex;
}

