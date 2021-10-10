/*
==============
R_StaticModelData_GetSModelMaterials
==============
*/

unsigned int __fastcall R_StaticModelData_GetSModelMaterials(Material **outSModelMaterials)
{
  return ?R_StaticModelData_GetSModelMaterials@@YAIPEAPEAUMaterial@@@Z(outSModelMaterials);
}

/*
==============
R_ModelData_GetModelSurfDataBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ModelData_GetModelSurfDataBuffer()
{
  return ?R_ModelData_GetModelSurfDataBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
R_StaticModelData_ResetWorld
==============
*/

void R_StaticModelData_ResetWorld(void)
{
  ?R_StaticModelData_ResetWorld@@YAXXZ();
}

/*
==============
RB_ModelData_SetSModelCollectionsData
==============
*/

void __fastcall RB_ModelData_SetSModelCollectionsData(ComputeCmdBufState *state, unsigned int instanceDataSlot)
{
  ?RB_ModelData_SetSModelCollectionsData@@YAXPEAUComputeCmdBufState@@I@Z(state, instanceDataSlot);
}

/*
==============
RB_ModelIndirectionData_Upload
==============
*/

void __fastcall RB_ModelIndirectionData_Upload(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_ModelIndirectionData_Upload@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_ModelIndirectionData_ShutdownWorld
==============
*/

void __fastcall R_ModelIndirectionData_ShutdownWorld(GfxWorld *world)
{
  ?R_ModelIndirectionData_ShutdownWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_ModelData_GetModelDynamicIndirectionBuffer
==============
*/

const GfxWrappedRWBuffer *__fastcall R_ModelData_GetModelDynamicIndirectionBuffer(unsigned int smpFrameIndex)
{
  return ?R_ModelData_GetModelDynamicIndirectionBuffer@@YAPEBUGfxWrappedRWBuffer@@I@Z(smpFrameIndex);
}

/*
==============
R_ModelData_GetSModelExpansionDataBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ModelData_GetSModelExpansionDataBuffer()
{
  return ?R_ModelData_GetSModelExpansionDataBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
R_ModelIndirectionData_InitWorld
==============
*/

void R_ModelIndirectionData_InitWorld(void)
{
  ?R_ModelIndirectionData_InitWorld@@YAXXZ();
}

/*
==============
R_StaticModelData_ShutdownWorld
==============
*/

void __fastcall R_StaticModelData_ShutdownWorld(GfxWorld *world)
{
  ?R_StaticModelData_ShutdownWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
RB_ModelData_SetSModelInstanceData
==============
*/

void __fastcall RB_ModelData_SetSModelInstanceData(ComputeCmdBufState *state, unsigned int instanceDataSlot)
{
  ?RB_ModelData_SetSModelInstanceData@@YAXPEAUComputeCmdBufState@@I@Z(state, instanceDataSlot);
}

/*
==============
R_ModelData_GetSModelCollectionsDataBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ModelData_GetSModelCollectionsDataBuffer()
{
  return ?R_ModelData_GetSModelCollectionsDataBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
RB_ModelData_SetComputeResources
==============
*/

void __fastcall RB_ModelData_SetComputeResources(ComputeCmdBufState *state, unsigned int surfDataSlot, unsigned int instanceDataSlot)
{
  ?RB_ModelData_SetComputeResources@@YAXPEAUComputeCmdBufState@@II@Z(state, surfDataSlot, instanceDataSlot);
}

/*
==============
RB_ModelData_SetSModelExpansionData
==============
*/

void __fastcall RB_ModelData_SetSModelExpansionData(ComputeCmdBufState *state, unsigned int instanceDataSlot)
{
  ?RB_ModelData_SetSModelExpansionData@@YAXPEAUComputeCmdBufState@@I@Z(state, instanceDataSlot);
}

/*
==============
R_ModelData_GetModelSurfMatIndirectionBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ModelData_GetModelSurfMatIndirectionBuffer()
{
  return ?R_ModelData_GetModelSurfMatIndirectionBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
RB_ModelData_SetSModelSurfMatIndirection
==============
*/

void __fastcall RB_ModelData_SetSModelSurfMatIndirection(ComputeCmdBufState *state, unsigned int smodelSurfMatIndirectionSlot)
{
  ?RB_ModelData_SetSModelSurfMatIndirection@@YAXPEAUComputeCmdBufState@@I@Z(state, smodelSurfMatIndirectionSlot);
}

/*
==============
R_StaticModelData_InitWorld
==============
*/

void R_StaticModelData_InitWorld(void)
{
  ?R_StaticModelData_InitWorld@@YAXXZ();
}

/*
==============
R_StaticModelData_DirtySModelCollectionOrder
==============
*/

void R_StaticModelData_DirtySModelCollectionOrder(void)
{
  ?R_StaticModelData_DirtySModelCollectionOrder@@YAXXZ();
}

/*
==============
R_StaticModelData_ShutdownWorldBuffers
==============
*/

void __fastcall R_StaticModelData_ShutdownWorldBuffers(GfxWorld *world)
{
  ?R_StaticModelData_ShutdownWorldBuffers@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
RB_ModelData_SetComputeResources
==============
*/
void RB_ModelData_SetComputeResources(ComputeCmdBufState *state, unsigned int surfDataSlot, unsigned int instanceDataSlot)
{
  GfxShaderBufferView *views; 

  views = &modelDataGlob.smodelSurfDataBuffer.view;
  R_SetComputeViews(state, surfDataSlot, 1, (const GfxShaderBufferView *const *)&views);
  views = &rgp.world->smodels.smodelInstanceDataBuffer.view;
  R_SetComputeViews(state, instanceDataSlot, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
RB_ModelData_SetSModelCollectionsData
==============
*/
void RB_ModelData_SetSModelCollectionsData(ComputeCmdBufState *state, unsigned int instanceDataSlot)
{
  GfxShaderBufferView *views; 

  views = &modelDataGlob.smodelCollectionsDataBuffer.view;
  R_SetComputeViews(state, instanceDataSlot, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
RB_ModelData_SetSModelExpansionData
==============
*/
void RB_ModelData_SetSModelExpansionData(ComputeCmdBufState *state, unsigned int instanceDataSlot)
{
  GfxShaderBufferView *views; 

  views = &modelDataGlob.smodelExpansionDataBuffer.view;
  R_SetComputeViews(state, instanceDataSlot, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
RB_ModelData_SetSModelInstanceData
==============
*/
void RB_ModelData_SetSModelInstanceData(ComputeCmdBufState *state, unsigned int instanceDataSlot)
{
  GfxShaderBufferView *views; 

  views = &rgp.world->smodels.smodelInstanceDataBuffer.view;
  R_SetComputeViews(state, instanceDataSlot, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
RB_ModelData_SetSModelSurfMatIndirection
==============
*/
void RB_ModelData_SetSModelSurfMatIndirection(ComputeCmdBufState *state, unsigned int smodelSurfMatIndirectionSlot)
{
  GfxShaderBufferView *views; 

  views = &modelDataGlob.smodelSurfMatIndirectionBuffer.view;
  R_SetComputeViews(state, smodelSurfMatIndirectionSlot, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
RB_ModelIndirectionData_Upload
==============
*/
void RB_ModelIndirectionData_Upload(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ModelIndirectionGfxBuffers *v3; 
  unsigned int v4; 
  unsigned int v5; 
  _WORD *v6; 
  GfxWorld *world; 
  _WORD *v8; 
  unsigned int instanceCount; 
  __int64 v10; 
  __int64 start; 
  __int64 size; 
  _WORD *v13; 
  __int64 v14; 
  unsigned int first; 
  unsigned int last; 
  unsigned __int16 *indirectionDataBuffer; 

  Sys_ProfBeginNamedEvent(0xFF800000, "RB_ModelIndirectionData_Upload");
  v3 = &modelDataGlob.gfxBuffers[(unsigned __int64)data->smpFrame];
  RB_Reactive_GetSModelIndirectionBuffer(data, &indirectionDataBuffer, &first, &last);
  v4 = first;
  v5 = last;
  if ( first <= last && rgp.world->smodels.instanceCount || rgp.world->smodels.clutterInstancePool.size )
  {
    v6 = R_BeginWrappedBufferDataWrite(&v3->modelIndirectionBufferRW);
    world = rgp.world;
    v8 = v6;
    if ( v4 <= v5 )
    {
      instanceCount = rgp.world->smodels.instanceCount;
      if ( instanceCount )
      {
        if ( v4 >= instanceCount )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 242, ASSERT_TYPE_ASSERT, "(first < rgp.world->smodels.instanceCount)", (const char *)&queryFormat, "first < rgp.world->smodels.instanceCount") )
            __debugbreak();
          world = rgp.world;
        }
        if ( v5 >= world->smodels.instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 243, ASSERT_TYPE_ASSERT, "(last < rgp.world->smodels.instanceCount)", (const char *)&queryFormat, "last < rgp.world->smodels.instanceCount") )
          __debugbreak();
        do
        {
          v10 = v4++;
          v8[2 * v10] = 0;
          v8[2 * v10 + 1] = indirectionDataBuffer[v10];
        }
        while ( v4 <= v5 );
        world = rgp.world;
      }
    }
    if ( !v3->reactiveClutterDataIsValidAndPersists && world->smodels.clutterInstancePool.size )
    {
      if ( v5 >= world->smodels.clutterInstancePool.start )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 258, ASSERT_TYPE_ASSERT, "(last < rgp.world->smodels.clutterInstancePool.start)", (const char *)&queryFormat, "last < rgp.world->smodels.clutterInstancePool.start") )
          __debugbreak();
        world = rgp.world;
      }
      start = world->smodels.clutterInstancePool.start;
      size = world->smodels.clutterInstancePool.size;
      if ( (_DWORD)size + (_DWORD)start != world->smodels.instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 261, ASSERT_TYPE_ASSERT, "(lastClutter == rgp.world->smodels.instanceCount)", (const char *)&queryFormat, "lastClutter == rgp.world->smodels.instanceCount") )
        __debugbreak();
      if ( (unsigned int)start < (int)size + (int)start )
      {
        v13 = &v8[2 * start + 1];
        v14 = size;
        do
        {
          *v13 = -1;
          v13 += 2;
          --v14;
        }
        while ( v14 );
      }
      v3->reactiveClutterDataIsValidAndPersists = 1;
    }
    R_EndWrappedBufferDataWrite(&v3->modelIndirectionBufferRW);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_ModelData_GetModelDynamicIndirectionBuffer
==============
*/
ModelIndirectionGfxBuffers *R_ModelData_GetModelDynamicIndirectionBuffer(unsigned int smpFrameIndex)
{
  return &modelDataGlob.gfxBuffers[(unsigned __int64)smpFrameIndex];
}

/*
==============
R_ModelData_GetModelSurfDataBuffer
==============
*/
GfxWrappedBuffer *R_ModelData_GetModelSurfDataBuffer()
{
  return &modelDataGlob.smodelSurfDataBuffer;
}

/*
==============
R_ModelData_GetModelSurfMatIndirectionBuffer
==============
*/
GfxWrappedBuffer *R_ModelData_GetModelSurfMatIndirectionBuffer()
{
  return &modelDataGlob.smodelSurfMatIndirectionBuffer;
}

/*
==============
R_ModelData_GetSModelCollectionsDataBuffer
==============
*/
GfxWrappedBuffer *R_ModelData_GetSModelCollectionsDataBuffer()
{
  return &modelDataGlob.smodelCollectionsDataBuffer;
}

/*
==============
R_ModelData_GetSModelExpansionDataBuffer
==============
*/
GfxWrappedBuffer *R_ModelData_GetSModelExpansionDataBuffer()
{
  return &modelDataGlob.smodelExpansionDataBuffer;
}

/*
==============
R_ModelIndirectionData_InitWorld
==============
*/
void R_ModelIndirectionData_InitWorld(void)
{
  GfxWorld *world; 
  bool *p_reactiveClutterDataIsValidAndPersists; 
  __int64 v2; 
  ModelIndirectionGfxBuffers *gfxBuffers; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 153, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  PMem_BeginAlloc("ModelIndirection", PMEM_STACK_GAME);
  world = rgp.world;
  if ( rgp.world->smodels.instanceCount )
  {
    p_reactiveClutterDataIsValidAndPersists = &modelDataGlob.gfxBuffers[0].reactiveClutterDataIsValidAndPersists;
    v2 = 2i64;
    gfxBuffers = modelDataGlob.gfxBuffers;
    while ( 1 )
    {
      R_CreateGfxWrappedBuffer(&gfxBuffers->modelIndirectionBufferRW, GfxWrappedBuffer_Structured, 4, world->smodels.instanceCount, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "Model indirection data");
      ++gfxBuffers;
      *p_reactiveClutterDataIsValidAndPersists = 0;
      p_reactiveClutterDataIsValidAndPersists += 64;
      if ( !--v2 )
        break;
      world = rgp.world;
    }
  }
  PMem_EndAlloc("ModelIndirection", PMEM_STACK_GAME);
}

/*
==============
R_ModelIndirectionData_ShutdownWorld
==============
*/
void R_ModelIndirectionData_ShutdownWorld(GfxWorld *world)
{
  ModelIndirectionGfxBuffers *gfxBuffers; 
  __int64 v3; 
  StreamerMemLoan result; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 183, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( world->smodels.instanceCount )
  {
    gfxBuffers = modelDataGlob.gfxBuffers;
    v3 = 2i64;
    do
    {
      R_ShutdownGfxWrappedBuffer(&gfxBuffers->modelIndirectionBufferRW);
      ++gfxBuffers;
      --v3;
    }
    while ( v3 );
  }
  PMem_Free(&result, "ModelIndirection", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
R_StaticModelData_DirtySModelCollectionOrder
==============
*/
void R_StaticModelData_DirtySModelCollectionOrder(void)
{
  modelDataGlob.smodelCollectionOrderChanged = 1;
}

/*
==============
R_StaticModelData_GetSModelMaterials
==============
*/
__int64 R_StaticModelData_GetSModelMaterials(Material **outSModelMaterials)
{
  __int64 v1; 
  unsigned int v3; 
  XModel *model; 
  unsigned __int8 numLods; 
  unsigned int v6; 
  __int64 numsurfs; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 v9; 
  const XModelLodInfo *v10; 
  unsigned __int16 surfIndex; 
  Material **v12; 
  __int64 v13; 
  Material *v14; 
  unsigned int v15; 
  Material **v16; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int i; 
  XModel *v23; 

  v1 = 0i64;
  if ( !outSModelMaterials && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 305, ASSERT_TYPE_ASSERT, "(outSModelMaterials)", (const char *)&queryFormat, "outSModelMaterials") )
    __debugbreak();
  v3 = 0;
  for ( i = 0; v3 < rgp.world->smodels.modelCount; i = v3 )
  {
    model = rgp.world->smodels.models[v3].model;
    v23 = model;
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 312, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
      __debugbreak();
    numLods = model->numLods;
    if ( numLods > 6u )
    {
      LODWORD(v21) = 6;
      LODWORD(v20) = numLods;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 314, ASSERT_TYPE_ASSERT, "( xmodel->numLods ) <= ( NUM_LODS )", "%s <= %s\n\t%i, %i", "xmodel->numLods", "NUM_LODS", v20, v21) )
        __debugbreak();
    }
    v6 = 0;
    if ( model->numLods )
    {
      do
      {
        numsurfs = XModelGetLodInfo(model, v6)->numsurfs;
        if ( (unsigned int)numsurfs > 0x10 )
        {
          LODWORD(v21) = 16;
          LODWORD(v20) = numsurfs;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 318, ASSERT_TYPE_ASSERT, "( lodSurfCount ) <= ( 16 )", "%s <= %s\n\t%i, %i", "lodSurfCount", "R_SMODEL_MAX_SURFS_PER_LOD", v20, v21) )
            __debugbreak();
        }
        LodInfo = XModelGetLodInfo(model, v6);
        v9 = model->numsurfs;
        v10 = LodInfo;
        surfIndex = LodInfo->surfIndex;
        if ( surfIndex >= v9 )
        {
          LODWORD(v19) = v9;
          LODWORD(v18) = surfIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v12 = &model->materialHandles[v10->surfIndex];
        if ( (_DWORD)numsurfs )
        {
          v13 = numsurfs;
          do
          {
            v14 = *v12;
            v15 = 0;
            if ( (_DWORD)v1 )
            {
              v16 = outSModelMaterials;
              while ( *v16 != v14 )
              {
                ++v15;
                ++v16;
                if ( v15 >= (unsigned int)v1 )
                  goto LABEL_24;
              }
            }
            else
            {
LABEL_24:
              if ( (unsigned int)v1 >= 0x4000 )
              {
                LODWORD(v19) = 0x4000;
                LODWORD(v18) = v1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( materialCount ) < (unsigned)( 16384 )", "materialCount doesn't index MAX_STATICMODEL_MATERIALS\n\t%i not in [0, %i)", v18, v19) )
                  __debugbreak();
              }
              outSModelMaterials[v1] = v14;
              v1 = (unsigned int)(v1 + 1);
            }
            ++v12;
            --v13;
          }
          while ( v13 );
          model = v23;
        }
        ++v6;
      }
      while ( v6 < model->numLods );
      v3 = i;
    }
    ++v3;
  }
  std::_Sort_unchecked<Material * *,bool (*)(Material *,Material *)>(outSModelMaterials, &outSModelMaterials[v1], (unsigned int)v1, (bool (__fastcall *)(Material *, Material *))R_StaticModelData_Material_Compare);
  return (unsigned int)v1;
}

/*
==============
R_StaticModelData_InitWorld
==============
*/
void R_StaticModelData_InitWorld(void)
{
  GfxWorld *world; 
  void *data; 
  void *v2; 
  void *v3; 
  void *v4; 
  GfxWorld *v5; 

  PMem_BeginAlloc("StaticModelData", PMEM_STACK_GAME);
  if ( rgp.world->smodels.surfaceCount )
  {
    R_CreateGfxWrappedBuffer(&modelDataGlob.smodelSurfDataBuffer, GfxWrappedBuffer_Structured, 32, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "smodelSurfDataBuffer");
    R_CreateGfxWrappedBuffer(&modelDataGlob.smodelSurfMatIndirectionBuffer, GfxWrappedBuffer_Raw, 4, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "smodelSurfMatIndirectionBuffer");
    R_CreateGfxWrappedBuffer(&modelDataGlob.smodelCollectionsDataBuffer, GfxWrappedBuffer_Raw, 16, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "smodelCollectionsData");
    R_CreateGfxWrappedBuffer(&modelDataGlob.smodelExpansionDataBuffer, GfxWrappedBuffer_Raw, 64, 0x3000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "smodelExpansionData");
    world = rgp.world;
    modelDataGlob.smodelCollectionOrderChanged = 0;
    if ( rgp.world && rgp.world->smodels.surfaceCount )
    {
      if ( !rgp.world->smodels.smodelSurfData )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 549, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.smodelSurfData)", (const char *)&queryFormat, "rgp.world->smodels.smodelSurfData") )
          __debugbreak();
        world = rgp.world;
      }
      data = modelDataGlob.smodelSurfDataBuffer.data;
      v2 = modelDataGlob.smodelSurfMatIndirectionBuffer.data;
      v3 = modelDataGlob.smodelCollectionsDataBuffer.data;
      v4 = modelDataGlob.smodelExpansionDataBuffer.data;
      if ( !modelDataGlob.smodelSurfDataBuffer.data )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 556, ASSERT_TYPE_ASSERT, "(staticSurfData)", (const char *)&queryFormat, "staticSurfData") )
          __debugbreak();
        world = rgp.world;
      }
      memcpy_0(data, world->smodels.smodelSurfData, 32i64 * world->smodels.surfaceCount);
      memcpy_0(v2, rgp.world->smodels.smodelSurfMatIndirection, 4i64 * rgp.world->smodels.surfaceCount);
      memcpy_0(v3, rgp.world->smodels.collections, 16i64 * rgp.world->smodels.collectionCount);
      memcpy_0(v4, rgp.world->smodels.smodelExpansionData, (unsigned __int64)rgp.world->smodels.modelCount << 6);
      v5 = rgp.world;
      if ( !rgp.world->smodels.surfaces )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 573, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.surfaces)", (const char *)&queryFormat, "rgp.world->smodels.surfaces") )
          __debugbreak();
        v5 = rgp.world;
      }
      memcpy_0(modelDataGlob.smodelSurfaces, v5->smodels.surfaces, 4i64 * v5->smodels.surfaceCount);
      memcpy_0(modelDataGlob.smodelSurfMatIndirectionCPU, v5->smodels.smodelSurfMatIndirection, 4i64 * v5->smodels.surfaceCount);
      memcpy_0(modelDataGlob.smodelMaterials, v5->smodels.materials, 8i64 * v5->smodels.materialCount);
      memcpy_0(modelDataGlob.smodelCollectionsCPU, v5->smodels.collections, 16i64 * v5->smodels.collectionCount);
      memcpy_0(modelDataGlob.smodelExpansionData, v5->smodels.smodelExpansionData, (unsigned __int64)v5->smodels.modelCount << 6);
      R_ShutdownGfxWrappedBuffer(&v5->smodels.smodelSurfDataBuffer);
      R_ShutdownGfxWrappedBuffer(&rgp.world->smodels.smodelSurfMatIndirectionBuffer);
      R_ShutdownGfxWrappedBuffer(&rgp.world->smodels.smodelCollectionsDataBuffer);
      R_ShutdownGfxWrappedBuffer(&rgp.world->smodels.smodelExpansionDataBuffer);
      world = rgp.world;
    }
    modelDataGlob.ffsmodelSurfData = world->smodels.smodelSurfData;
    modelDataGlob.ffsmodelSurfaces = world->smodels.surfaces;
    modelDataGlob.ffsmodelCollections = world->smodels.collections;
    modelDataGlob.ffsmodelSurfaceCount = world->smodels.surfaceCount;
    world->smodels.smodelSurfData = NULL;
    rgp.world->smodels.surfaces = modelDataGlob.smodelSurfaces;
    rgp.world->smodels.smodelSurfMatIndirection = modelDataGlob.smodelSurfMatIndirectionCPU;
    rgp.world->smodels.materials = modelDataGlob.smodelMaterials;
    rgp.world->smodels.collections = modelDataGlob.smodelCollectionsCPU;
    rgp.world->smodels.smodelExpansionData = modelDataGlob.smodelExpansionData;
  }
  PMem_EndAlloc("StaticModelData", PMEM_STACK_GAME);
}

/*
==============
R_StaticModelData_Material_Compare
==============
*/
bool R_StaticModelData_Material_Compare(Material *const lhs, Material *const rhs)
{
  const Material *v3; 
  unsigned int SortedIndex; 
  const Material *v5; 

  v3 = Material_FromHandle(lhs);
  SortedIndex = Material_GetSortedIndex(v3);
  v5 = Material_FromHandle(rhs);
  return SortedIndex < Material_GetSortedIndex(v5);
}

/*
==============
R_StaticModelData_ResetWorld
==============
*/
void R_StaticModelData_ResetWorld(void)
{
  void *v0; 
  unsigned int v1; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  GfxStaticModel *models; 
  const char **p_name; 
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  __int64 v12; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 v14; 
  const XModelLodInfo *v15; 
  unsigned __int16 surfIndex; 
  unsigned __int64 v17; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  unsigned int numsurfs; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 i; 
  __int64 v25; 
  char v26; 
  __int64 v27; 
  unsigned __int8 v28; 
  __int64 v29; 
  unsigned __int8 v30; 
  __int64 v31; 
  unsigned __int8 v32; 
  unsigned __int8 v33; 
  unsigned __int8 v34; 
  unsigned __int8 v35; 
  unsigned __int8 v36; 
  unsigned __int8 v37; 
  const XModelLodInfo *v38; 
  const XModelLodInfo *v40; 
  const XModelLodInfo *v41; 
  __int64 v42; 
  __m256i v43; 
  GfxWorld *world; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int SModelMaterials; 
  unsigned int v52; 
  __m256i *v53; 
  __int64 v54; 
  __int64 v55; 
  void *v56; 
  __int64 v57; 
  void *v58; 
  vec4_t outBoundingBoxData[2]; 

  if ( rgp.world && rgp.world->smodels.modelCount )
  {
    R_LockGfxImmediateContext();
    Sys_EnterCriticalSection(CRITSECT_RESET_SMODEL_DATA);
    v53 = (__m256i *)R_BeginWrappedBufferDataWrite(&modelDataGlob.smodelSurfDataBuffer);
    v56 = R_BeginWrappedBufferDataWrite(&modelDataGlob.smodelSurfMatIndirectionBuffer);
    v58 = R_BeginWrappedBufferDataWrite(&modelDataGlob.smodelExpansionDataBuffer);
    v0 = v58;
    memset_0(v53, 0, 0x200000ui64);
    memset_0(modelDataGlob.smodelSurfaces, 0, sizeof(modelDataGlob.smodelSurfaces));
    memset_0(modelDataGlob.smodelMaterials, 0, sizeof(modelDataGlob.smodelMaterials));
    memset_0(v56, 0, 0x40000ui64);
    memset_0(modelDataGlob.smodelSurfMatIndirectionCPU, 0, sizeof(modelDataGlob.smodelSurfMatIndirectionCPU));
    memset_0(modelDataGlob.smodelExpansionData, 0, sizeof(modelDataGlob.smodelExpansionData));
    SModelMaterials = R_StaticModelData_GetSModelMaterials(modelDataGlob.smodelMaterials);
    memcpy_0(rgp.world->smodels.materials, modelDataGlob.smodelMaterials, 8i64 * SModelMaterials);
    v1 = 0;
    v2 = 0i64;
    v49 = 0;
    rgp.world->smodels.materialCount = SModelMaterials;
    v3 = 0;
    v50 = 0;
    if ( rgp.world->smodels.modelCount )
    {
      do
      {
        v4 = v3;
        v5 = v3;
        models = rgp.world->smodels.models;
        v54 = v4 * 16;
        p_name = &models[v4].model->name;
        if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 404, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
          __debugbreak();
        v8 = *((_BYTE *)p_name + 10);
        if ( v8 > 6u )
        {
          LODWORD(v48) = 6;
          LODWORD(v47) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 406, ASSERT_TYPE_ASSERT, "( xmodel->numLods ) <= ( NUM_LODS )", "%s <= %s\n\t%i, %i", "xmodel->numLods", "NUM_LODS", v47, v48) )
            __debugbreak();
        }
        v9 = v5 << 6;
        *(unsigned __int16 *)((char *)&modelDataGlob.smodelExpansionData[0].firstStaticModelSurfaceIndex + v9) = models[v4].firstStaticModelSurfaceIndex;
        *(&modelDataGlob.smodelExpansionData[0].numLods + v9) = *((_BYTE *)p_name + 10);
        v10 = *((_WORD *)p_name + 4);
        if ( v10 > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)v10, "unsigned", v10) )
          __debugbreak();
        *(&modelDataGlob.smodelExpansionData[0].numSurfs + v9) = v10;
        *(_OWORD *)((char *)modelDataGlob.smodelExpansionData[0].modelBounds.midPoint.v + v9) = *(_OWORD *)((char *)p_name + 44);
        *(double *)((char *)&modelDataGlob.smodelExpansionData[0].modelBounds.halfSize.y + v9) = *(double *)((char *)p_name + 60);
        v11 = 0i64;
        if ( *((_BYTE *)p_name + 10) )
        {
          v12 = 32 * v5;
          v57 = v12;
          do
          {
            LodInfo = XModelGetLodInfo((const XModel *)p_name, v11);
            v14 = *((_WORD *)p_name + 4);
            v15 = LodInfo;
            surfIndex = LodInfo->surfIndex;
            if ( surfIndex >= v14 )
            {
              LODWORD(v46) = v14;
              LODWORD(v45) = surfIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v45, v46) )
                __debugbreak();
            }
            v55 = (__int64)&p_name[27][8 * v15->surfIndex];
            if ( (unsigned int)v11 >= *((unsigned __int8 *)p_name + 10) )
            {
              LODWORD(v46) = *((unsigned __int8 *)p_name + 10);
              LODWORD(v45) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 209, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v45, v46) )
                __debugbreak();
            }
            v17 = (unsigned __int64)(unsigned int)v11 << 6;
            v18 = *(_WORD *)((char *)p_name + v17 + 246);
            if ( v18 > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)v18, "unsigned", v18) )
              __debugbreak();
            modelDataGlob.smodelExpansionData[0].lodInfo[v11 + v12].surfOffset = v18;
            v19 = *(_WORD *)((char *)p_name + v17 + 244);
            if ( v19 > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)v19, "unsigned", v19) )
              __debugbreak();
            modelDataGlob.smodelExpansionData[0].lodInfo[v11 + v12].surfCount = v19;
            modelDataGlob.smodelExpansionData[0].lodDist[(unsigned int)v11 + v54] = *(float *)((char *)p_name + v17 + 240);
            numsurfs = XModelGetLodInfo((const XModel *)p_name, v11)->numsurfs;
            v52 = numsurfs;
            if ( numsurfs > 0x10 )
            {
              LODWORD(v48) = 16;
              LODWORD(v47) = numsurfs;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 424, ASSERT_TYPE_ASSERT, "( lodSurfCount ) <= ( 16 )", "%s <= %s\n\t%i, %i", "lodSurfCount", "R_SMODEL_MAX_SURFS_PER_LOD", v47, v48) )
                __debugbreak();
            }
            v1 = v49;
            v21 = 0i64;
            if ( numsurfs )
            {
              do
              {
                if ( v1 >= 0x10000 )
                {
                  LODWORD(v48) = 0x10000;
                  LODWORD(v47) = v1;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 427, ASSERT_TYPE_ASSERT, "( smodelSurfaceCount ) < ( 65536 )", "%s < %s\n\t%i, %i", "smodelSurfaceCount", "MAX_STATICMODEL_SURFACES", v47, v48) )
                    __debugbreak();
                }
                v22 = 0i64;
                v23 = v1;
                modelDataGlob.smodelSurfaces[v1].smodelIndex = v50;
                modelDataGlob.smodelSurfaces[v1].lodIndex = v11;
                modelDataGlob.smodelSurfaces[v1].surfIndex = v21;
                for ( i = *(_QWORD *)(v55 + 8 * v21); (unsigned int)v22 < SModelMaterials; v22 = (unsigned int)(v22 + 1) )
                {
                  if ( modelDataGlob.smodelMaterials[v22] == (Material *)i )
                    break;
                }
                if ( (_DWORD)v22 == SModelMaterials && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 443, ASSERT_TYPE_ASSERT, "(matIndex != materialCount)", (const char *)&queryFormat, "matIndex != materialCount") )
                  __debugbreak();
                if ( (unsigned int)v22 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v22, "unsigned", (unsigned int)v22) )
                  __debugbreak();
                modelDataGlob.smodelSurfMatIndirectionCPU[v23].smodelMaterialIndex = v22;
                if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
                  __debugbreak();
                if ( !*(_QWORD *)i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
                  __debugbreak();
                if ( !**(_BYTE **)i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
                  __debugbreak();
                if ( !*(_QWORD *)(i + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 663, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
                  __debugbreak();
                v25 = *(_QWORD *)(i + 64);
                v26 = 95;
                if ( (*(_DWORD *)(v25 + 8) & 0xE006i64) == 0 )
                  v26 = 127;
                if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 719, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
                  __debugbreak();
                v27 = *(_QWORD *)(i + 64);
                v28 = v26 & 0xFE;
                if ( (*(_BYTE *)(v27 + 8) & 1) == 0 )
                  v28 = v26;
                if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 706, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
                  __debugbreak();
                v29 = *(_QWORD *)(i + 64);
                v30 = v28 & 0xB0;
                if ( (*(_DWORD *)(v29 + 8) & 0x8000) == 0 )
                  v30 = v28;
                if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 757, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
                  __debugbreak();
                v31 = *(_QWORD *)(i + 64);
                v32 = v30 & 0xF7;
                if ( (*(_QWORD *)(v31 + 8) & 0x1000000000i64) != 0 )
                  v32 = v30;
                if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 727, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
                  __debugbreak();
                v33 = v32 & 0xEF;
                if ( (*(_DWORD *)(*(_QWORD *)(i + 64) + 8i64) & 0x10000) != 0 )
                  v33 = v32;
                v34 = v33 & 0xBF;
                if ( (*(_DWORD *)(i + 20) & 0xA0000) != 655360 )
                  v34 = v33;
                modelDataGlob.smodelSurfMatIndirectionCPU[v23].cullType = v34;
                if ( !*(_QWORD *)i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
                  __debugbreak();
                if ( !**(_BYTE **)i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
                  __debugbreak();
                if ( !*(_QWORD *)(i + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 892, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
                  __debugbreak();
                v35 = ((*(_DWORD *)(i + 12) & 0x80) == 0) | 0xC;
                if ( (*(_DWORD *)(i + 12) & 0x40000) == 0 )
                  v35 = ((*(_DWORD *)(i + 12) & 0x80) == 0) | 0xE;
                if ( !*(_QWORD *)(i + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 655, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
                  __debugbreak();
                v36 = v35 & 0xFB;
                if ( (*(_QWORD *)(*(_QWORD *)(i + 64) + 8i64) & 0x800000000i64) == 0 )
                  v36 = v35;
                v37 = v36 & 0xF7;
                if ( (*(_DWORD *)(i + 20) & 0x88000) != 557056 )
                  v37 = v36;
                modelDataGlob.smodelSurfMatIndirectionCPU[v23].emitType = v37;
                *((_DWORD *)v56 + v23) = modelDataGlob.smodelSurfMatIndirectionCPU[v23];
                while ( modelDataGlob.ffsmodelSurfaces[v2].smodelIndex < v50 || modelDataGlob.ffsmodelSurfaces[v2].lodIndex < (unsigned int)v11 || modelDataGlob.ffsmodelSurfaces[v2].surfIndex < (unsigned int)v21 )
                  v2 = (unsigned int)(v2 + 1);
                v38 = XModelGetLodInfo((const XModel *)p_name, v11);
                if ( v38->surfs && Stream_MeshIsSafeToUse(v38->modelSurfsStaging) )
                {
                  v40 = XModelGetLodInfo((const XModel *)p_name, v11);
                  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 286, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
                    __debugbreak();
                  if ( !v40->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 287, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
                    __debugbreak();
                  if ( v40->modelSurfsStaging->surfs != v40->surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 288, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging->surfs == lodInfo->surfs)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging->surfs == lodInfo->surfs") )
                    __debugbreak();
                  if ( v40->modelSurfsStaging->numsurfs != v40->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 289, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging->numsurfs == lodInfo->numsurfs)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging->numsurfs == lodInfo->numsurfs") )
                    __debugbreak();
                  v41 = XModelGetLodInfo((const XModel *)p_name, v11);
                  if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 331, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
                    __debugbreak();
                  if ( (unsigned int)v21 >= v41->numsurfs )
                  {
                    LODWORD(v46) = v41->numsurfs;
                    LODWORD(v45) = v21;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 332, ASSERT_TYPE_ASSERT, "(unsigned)( surfIndex ) < (unsigned)( lodInfo->numsurfs )", "surfIndex doesn't index lodInfo->numsurfs\n\t%i not in [0, %i)", v45, v46) )
                      __debugbreak();
                  }
                  if ( (unsigned int)v21 + v41->surfIndex >= *((unsigned __int16 *)p_name + 4) )
                  {
                    LODWORD(v46) = *((unsigned __int16 *)p_name + 4);
                    LODWORD(v45) = v21 + v41->surfIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 333, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex + surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex + surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v45, v46) )
                      __debugbreak();
                  }
                  if ( !v41->surfs )
                  {
                    LODWORD(v47) = v11;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 340, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", *p_name, v47) )
                      __debugbreak();
                  }
                  if ( !v41->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 341, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
                    __debugbreak();
                  v42 = (__int64)&v41->surfs[(int)v21];
                  if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 467, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
                    __debugbreak();
                  R_SetBoundingBoxData((const Bounds *)(v42 + 144), outBoundingBoxData);
                  *(_QWORD *)outBoundingBoxData[1].v = *(_QWORD *)(v42 + 156);
                  outBoundingBoxData[1].v[2] = *(float *)(v42 + 164);
                  v43 = *(__m256i *)outBoundingBoxData[0].v;
                }
                else
                {
                  v43 = (__m256i)modelDataGlob.ffsmodelSurfData[(unsigned int)v2];
                }
                v21 = (unsigned int)(v21 + 1);
                v1 = ++v49;
                v53[v23] = v43;
              }
              while ( (unsigned int)v21 < v52 );
            }
            v11 = (unsigned int)(v11 + 1);
            v12 = v57;
          }
          while ( (unsigned int)v11 < *((unsigned __int8 *)p_name + 10) );
        }
        v3 = v50 + 1;
        v50 = v3;
      }
      while ( v3 < rgp.world->smodels.modelCount );
      v0 = v58;
    }
    rgp.world->smodels.surfaceCount = v1;
    if ( modelDataGlob.smodelCollectionOrderChanged )
    {
      world = rgp.world;
      if ( rgp.world->smodels.collections != modelDataGlob.smodelCollectionsCPU )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 489, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.collections == modelDataGlob.smodelCollectionsCPU)", (const char *)&queryFormat, "rgp.world->smodels.collections == modelDataGlob.smodelCollectionsCPU") )
          __debugbreak();
        world = rgp.world;
      }
      memcpy_0(modelDataGlob.smodelCollectionsDataBuffer.data, world->smodels.collections, 16i64 * world->smodels.collectionCount);
      modelDataGlob.smodelCollectionOrderChanged = 0;
    }
    memcpy_0(v0, modelDataGlob.smodelExpansionData, (unsigned __int64)rgp.world->smodels.modelCount << 6);
    R_EndWrappedBufferDataWrite(&modelDataGlob.smodelSurfDataBuffer);
    R_EndWrappedBufferDataWrite(&modelDataGlob.smodelSurfMatIndirectionBuffer);
    R_EndWrappedBufferDataWrite(&modelDataGlob.smodelExpansionDataBuffer);
    Sys_LeaveCriticalSection(CRITSECT_RESET_SMODEL_DATA);
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
R_StaticModelData_ShutdownWorld
==============
*/
void R_StaticModelData_ShutdownWorld(GfxWorld *world)
{
  StreamerMemLoan result; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 611, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  R_ShutdownGfxWrappedBuffer(&modelDataGlob.smodelSurfDataBuffer);
  R_ShutdownGfxWrappedBuffer(&modelDataGlob.smodelSurfMatIndirectionBuffer);
  R_ShutdownGfxWrappedBuffer(&modelDataGlob.smodelCollectionsDataBuffer);
  R_ShutdownGfxWrappedBuffer(&modelDataGlob.smodelExpansionDataBuffer);
  world->smodels.smodelSurfData = modelDataGlob.ffsmodelSurfData;
  world->smodels.surfaces = modelDataGlob.ffsmodelSurfaces;
  world->smodels.collections = modelDataGlob.ffsmodelCollections;
  world->smodels.surfaceCount = modelDataGlob.ffsmodelSurfaceCount;
  PMem_Free(&result, "StaticModelData", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
R_StaticModelData_ShutdownWorldBuffers
==============
*/
void R_StaticModelData_ShutdownWorldBuffers(GfxWorld *world)
{
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_data.cpp", 644, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( world->smodels.surfaceCount )
  {
    R_ShutdownGfxWrappedBuffer(&world->smodels.smodelSurfDataBuffer);
    R_ShutdownGfxWrappedBuffer(&world->smodels.smodelSurfMatIndirectionBuffer);
    R_ShutdownGfxWrappedBuffer(&world->smodels.smodelSurfUGBIndirectionBuffer);
  }
  if ( world->smodels.modelCount )
    R_ShutdownGfxWrappedBuffer(&world->smodels.smodelExpansionDataBuffer);
  if ( world->smodels.collectionCount )
    R_ShutdownGfxWrappedBuffer(&world->smodels.smodelCollectionsDataBuffer);
  if ( world->smodels.clutterCollectionCount )
  {
    R_ShutdownGfxWrappedBuffer(&world->smodels.clutterCollectionsDataBuffer);
    R_ShutdownGfxWrappedBuffer(&world->smodels.clutterCollectionGPUDataBuffer);
  }
  if ( world->smodels.clutterTintCount )
    R_ShutdownGfxWrappedBuffer(&world->smodels.clutterTintDataBuffer);
  if ( world->smodels.instanceCount )
  {
    R_ShutdownGfxWrappedBuffer(&world->smodels.modelStaticIndirectionBuffer);
    R_ShutdownGfxWrappedBuffer(&world->smodels.smodelInstanceDataBuffer);
  }
  if ( world->smodels.lmapTransformsCount )
    R_ShutdownGfxWrappedBuffer(&world->smodels.lmapTransformsBuffer);
  if ( world->smodels.splinedModelInstanceCount )
  {
    R_ShutdownGfxWrappedBuffer(&world->smodels.splinedModelInstanceBuffer);
    if ( world->smodels.splinedModelInstanceBoundsBuffer.data )
    {
      if ( world->smodels.splinedModelInstanceBoundsBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&world->smodels.splinedModelInstanceBoundsBuffer);
    }
  }
  if ( world->smodels.splineSegmentCount )
    R_ShutdownGfxWrappedBuffer(&world->smodels.splineSegmentBuffer);
}

