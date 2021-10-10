/*
==============
Material_Init
==============
*/

void Material_Init(void)
{
  ?Material_Init@@YAXXZ();
}

/*
==============
Material_ReleaseComputeShaderResources
==============
*/

void __fastcall Material_ReleaseComputeShaderResources(ComputeShader *shader)
{
  ?Material_ReleaseComputeShaderResources@@YAXPEAUComputeShader@@@Z(shader);
}

/*
==============
Validate_CreateShader<ComputeShader *>
==============
*/

void __fastcall Validate_CreateShader<ComputeShader *>(HRESULT returnCode, ComputeShader *shader, const char *functionName)
{
  ??$Validate_CreateShader@PEAUComputeShader@@@@YAXJPEAUComputeShader@@PEBD@Z(returnCode, shader, functionName);
}

/*
==============
Material_GetNameWithoutPrefix
==============
*/

const char *__fastcall Material_GetNameWithoutPrefix(Material *handle)
{
  return ?Material_GetNameWithoutPrefix@@YAPEBDPEAUMaterial@@@Z(handle);
}

/*
==============
Material_GetDefault2DTextureCoordsForAtlasing
==============
*/

void __fastcall Material_GetDefault2DTextureCoordsForAtlasing(const Material *material, float *s0, float *s1, float *t0, float *t1)
{
  ?Material_GetDefault2DTextureCoordsForAtlasing@@YAXPEBUMaterial@@PEAM111@Z(material, s0, s1, t0, t1);
}

/*
==============
Load_CreateComputeShader
==============
*/

void __fastcall Load_CreateComputeShader(unsigned __int8 **program, ComputeShader *mtlShader)
{
  ?Load_CreateComputeShader@@YAXPEAPEAEPEAUComputeShader@@@Z(program, mtlShader);
}

/*
==============
Material_RefreshAllTechniqueSets
==============
*/

void Material_RefreshAllTechniqueSets(void)
{
  ?Material_RefreshAllTechniqueSets@@YAXXZ();
}

/*
==============
Material_Register_FastFile
==============
*/

Material *__fastcall Material_Register_FastFile(const char *name, ImageTrack imageTrack)
{
  return ?Material_Register_FastFile@@YAPEAUMaterial@@PEBDW4ImageTrack@@@Z(name, imageTrack);
}

/*
==============
Material_CreateComputePipelineState
==============
*/

void __fastcall Material_CreateComputePipelineState(ComputeShader *computeShader)
{
  ?Material_CreateComputePipelineState@@YAXPEAUComputeShader@@@Z(computeShader);
}

/*
==============
Load_MaterialTechnique
==============
*/

void __fastcall Load_MaterialTechnique(const DBStreamStart streamStart)
{
  ?Load_MaterialTechnique@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Material_IsDefault
==============
*/

bool __fastcall Material_IsDefault(const Material *material)
{
  return ?Material_IsDefault@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Load_FixupComputeShaderProgram
==============
*/

void __fastcall Load_FixupComputeShaderProgram(GfxComputeShaderLoadDef *loadDef, ComputeShaderProgram *program)
{
  ?Load_FixupComputeShaderProgram@@YAXPEAUGfxComputeShaderLoadDef@@PEAUComputeShaderProgram@@@Z(loadDef, program);
}

/*
==============
Material_DirtySort
==============
*/

void Material_DirtySort(void)
{
  ?Material_DirtySort@@YAXXZ();
}

/*
==============
Material_RegisterComputeShader
==============
*/

ComputeShader *__fastcall Material_RegisterComputeShader(const char *name)
{
  return ?Material_RegisterComputeShader@@YAPEAUComputeShader@@PEBD@Z(name);
}

/*
==============
Material_InitConstantBuffers
==============
*/

void __fastcall Material_InitConstantBuffers(Material *material)
{
  ?Material_InitConstantBuffers@@YAXPEAUMaterial@@@Z(material);
}

/*
==============
Material_GetRefractionOverrideMaterial
==============
*/

Material *__fastcall Material_GetRefractionOverrideMaterial(Material *baseMaterial)
{
  return ?Material_GetRefractionOverrideMaterial@@YAPEAUMaterial@@PEAU1@@Z(baseMaterial);
}

/*
==============
Material_RegisterComputeShader_FastFile
==============
*/

ComputeShader *__fastcall Material_RegisterComputeShader_FastFile(const char *name)
{
  return ?Material_RegisterComputeShader_FastFile@@YAPEAUComputeShader@@PEBD@Z(name);
}

/*
==============
Material_RegisterHandle
==============
*/

Material *__fastcall Material_RegisterHandle(const char *name, ImageTrack imageTrack)
{
  return ?Material_RegisterHandle@@YAPEAUMaterial@@PEBDW4ImageTrack@@@Z(name, imageTrack);
}

/*
==============
Material_TransientDirtySortFinished
==============
*/

int __fastcall Material_TransientDirtySortFinished()
{
  return ?Material_TransientDirtySortFinished@@YAHXZ();
}

/*
==============
Load_CreateMaterialPipelineStates
==============
*/

void __fastcall Load_CreateMaterialPipelineStates(MaterialPipelineState **pipelineStates, unsigned __int8 pipelineStateCount, const GfxStateBits *stateBits, MaterialGeometryType materialType, MaterialTechniqueType techniqueType)
{
  ?Load_CreateMaterialPipelineStates@@YAXPEAPEAUMaterialPipelineState@@EPEBUGfxStateBits@@W4MaterialGeometryType@@W4MaterialTechniqueType@@@Z(pipelineStates, pipelineStateCount, stateBits, materialType, techniqueType);
}

/*
==============
Material_TransientDirtySort
==============
*/

void Material_TransientDirtySort(void)
{
  ?Material_TransientDirtySort@@YAXXZ();
}

/*
==============
Material_GetName
==============
*/

const char *__fastcall Material_GetName(Material *handle)
{
  return ?Material_GetName@@YAPEBDPEAUMaterial@@@Z(handle);
}

/*
==============
IsValidMaterialHandle
==============
*/

bool __fastcall IsValidMaterialHandle(Material *const handle)
{
  return ?IsValidMaterialHandle@@YA_NQEAUMaterial@@@Z(handle);
}

/*
==============
Load_MaterialTechnique
==============
*/

void __fastcall Load_MaterialTechnique(MaterialTechnique **materialTechnique, const char *techniqueSetName)
{
  ?Load_MaterialTechnique@@YAXPEAPEAUMaterialTechnique@@PEBD@Z(materialTechnique, techniqueSetName);
}

/*
==============
Material_FinishLoading
==============
*/

void Material_FinishLoading(void)
{
  ?Material_FinishLoading@@YAXXZ();
}

/*
==============
Material_ReleaseTechniqueSetResources
==============
*/

void __fastcall Material_ReleaseTechniqueSetResources(MaterialTechniqueSet *mtlTechniqueSet)
{
  ?Material_ReleaseTechniqueSetResources@@YAXPEAUMaterialTechniqueSet@@@Z(mtlTechniqueSet);
}

/*
==============
Material_GetGeometryTypeFromGeomeyryOverrideType
==============
*/

MaterialGeometryType __fastcall Material_GetGeometryTypeFromGeomeyryOverrideType(MaterialOverrideGeometryType overrideGeometryType)
{
  return ?Material_GetGeometryTypeFromGeomeyryOverrideType@@YA?AW4MaterialGeometryType@@W4MaterialOverrideGeometryType@@@Z(overrideGeometryType);
}

/*
==============
Material_GetGeometryOverrideTypeFromGeometryType
==============
*/

MaterialOverrideGeometryType __fastcall Material_GetGeometryOverrideTypeFromGeometryType(MaterialGeometryType geometryType)
{
  return ?Material_GetGeometryOverrideTypeFromGeometryType@@YA?AW4MaterialOverrideGeometryType@@W4MaterialGeometryType@@@Z(geometryType);
}

/*
==============
Material_ReleaseTechniquePipelineStates
==============
*/

void __fastcall Material_ReleaseTechniquePipelineStates(MaterialTechnique *technique)
{
  ?Material_ReleaseTechniquePipelineStates@@YAXPEAUMaterialTechnique@@@Z(technique);
}

/*
==============
Material_FixupPipelineStates
==============
*/

void __fastcall Material_FixupPipelineStates(MaterialTechniqueSet *techSet)
{
  ?Material_FixupPipelineStates@@YAXPEAUMaterialTechniqueSet@@@Z(techSet);
}

/*
==============
Material_SetTextureAtlasTime
==============
*/

void __fastcall Material_SetTextureAtlasTime(unsigned int ms)
{
  ?Material_SetTextureAtlasTime@@YAXI@Z(ms);
}

/*
==============
Material_ReleaseMaterialResources
==============
*/

void __fastcall Material_ReleaseMaterialResources(Material *mtl)
{
  ?Material_ReleaseMaterialResources@@YAXPEAUMaterial@@@Z(mtl);
}

/*
==============
Material_Register
==============
*/

Material *__fastcall Material_Register(const char *name, ImageTrack imageTrack)
{
  return ?Material_Register@@YAPEAUMaterial@@PEBDW4ImageTrack@@@Z(name, imageTrack);
}

/*
==============
Load_MaterialConstantBufferTable
==============
*/

void __fastcall Load_MaterialConstantBufferTable(MaterialConstantBufferDef **__formal, Material *material)
{
  ?Load_MaterialConstantBufferTable@@YAXPEAPEAUMaterialConstantBufferDef@@PEAUMaterial@@@Z(__formal, material);
}

/*
==============
Material_Process2DTextureCoordsForAtlasing
==============
*/

void __fastcall Material_Process2DTextureCoordsForAtlasing(const Material *material, float *s0, float *s1, float *t0, float *t1)
{
  ?Material_Process2DTextureCoordsForAtlasing@@YAXPEBUMaterial@@PEAM111@Z(material, s0, s1, t0, t1);
}

/*
==============
Load_MaterialTechnique
==============
*/
void Load_MaterialTechnique(const DBStreamStart streamStart)
{
  const char **v1; 
  MaterialTechnique *v2; 
  MaterialPipelineState **p_pipelineStates; 
  MaterialPipelineState *v4; 
  __int64 pipelineStateInputLayoutCount; 
  MaterialPipelineState *i; 
  GfxStateBits *v7; 
  MaterialTechnique *v8; 
  MaterialShaderArgument *v9; 

  Load_Stream(streamStart, varMaterialTechnique, 0x70ui64);
  v1 = varXString;
  varXString = &varMaterialTechnique->name;
  Load_XString(NotAtStart);
  v2 = varMaterialTechnique;
  p_pipelineStates = &varMaterialTechnique->pipelineStates;
  varXString = v1;
  if ( varMaterialTechnique->pipelineStates )
  {
    v4 = varMaterialPipelineState;
    DB_PatchMem_FixStreamAlignment(7ui64);
    DB_CheckCanIncStreamPos(0i64);
    *p_pipelineStates = (MaterialPipelineState *)g_streamPosGlob.pos;
    varMaterialPipelineState = (MaterialPipelineState *)g_streamPosGlob.pos;
    pipelineStateInputLayoutCount = varMaterialTechnique->pipelineStateInputLayoutCount;
    Load_Stream(AtStart, g_streamPosGlob.pos, 104 * pipelineStateInputLayoutCount);
    for ( i = varMaterialPipelineState; pipelineStateInputLayoutCount; --pipelineStateInputLayoutCount )
    {
      varMaterialPipelineState = i;
      Load_MaterialPipelineState(NotAtStart);
      ++i;
    }
    Load_CreateMaterialPipelineStates(p_pipelineStates, varMaterialTechnique->pipelineStateInputLayoutCount, &varMaterialTechnique->stateBits, varMaterialTechniqueSet->materialType, varMaterialTechnique->type);
    v2 = varMaterialTechnique;
    varMaterialPipelineState = v4;
  }
  v7 = varGfxStateBits;
  varGfxStateBits = &v2->stateBits;
  Load_Stream(NotAtStart, &v2->stateBits, 0x10ui64);
  v8 = varMaterialTechnique;
  varGfxStateBits = v7;
  if ( varMaterialTechnique->args )
  {
    v9 = varMaterialShaderArgument;
    DB_PatchMem_FixStreamAlignment(1ui64);
    DB_CheckCanIncStreamPos(0i64);
    v8->args = (MaterialShaderArgument *)g_streamPosGlob.pos;
    varMaterialShaderArgument = (MaterialShaderArgument *)g_streamPosGlob.pos;
    Load_Stream(AtStart, g_streamPosGlob.pos, 6 * (varMaterialTechnique->perPrimArgCount + varMaterialTechnique->perObjArgCount + varMaterialTechnique->stableArgCount + (unsigned __int64)varMaterialTechnique->neverArgCount));
    varMaterialShaderArgument = v9;
  }
}

/*
==============
Validate_CreateShader<ComputeShader *>
==============
*/
void Validate_CreateShader<ComputeShader *>(HRESULT returnCode, ComputeShader *shader, const char *functionName)
{
  const char *v4; 

  if ( returnCode < 0 )
  {
    Com_PrintError(1, "%s failed for %s (%s)\n", functionName, shader->debugName, shader->name);
    Com_PrintError(1, "This usually means the shader uses functionality not supported by this GPU.\n");
    v4 = R_ErrorDescription(returnCode);
    Sys_Error((const ObfuscateErrorText)&stru_144416000, 1668i64, v4);
  }
}

/*
==============
IsValidMaterialHandle
==============
*/
bool IsValidMaterialHandle(Material *const handle)
{
  char inData[8]; 
  Material *v4; 

  v4 = handle;
  inData[0] = 0;
  DB_EnumXAssets(ASSET_TYPE_MATERIAL, ValidMaterialCallback, inData, 1);
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !handle->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
    __debugbreak();
  if ( !*handle->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
    __debugbreak();
  if ( ((unsigned __int8)handle & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4696, ASSERT_TYPE_ASSERT, "(( 0x0003 & reinterpret_cast<uintptr_t>( Material_FromHandle( handle ) ) ) == 0x0)", (const char *)&queryFormat, "( 0x0003 & reinterpret_cast<uintptr_t>( Material_FromHandle( handle ) ) ) == 0x0") )
    __debugbreak();
  if ( !inData[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4697, ASSERT_TYPE_ASSERT, "(validMaterialContext.matchesAny)", (const char *)&queryFormat, "validMaterialContext.matchesAny") )
    __debugbreak();
  return handle->name && *handle->name;
}

/*
==============
Load_CreateComputeShader
==============
*/
void Load_CreateComputeShader(unsigned __int8 **program, ComputeShader *mtlShader)
{
  Material_CreateComputePipelineState(mtlShader);
  *program = (unsigned __int8 *)mtlShader->prog.derivedCS;
}

/*
==============
Load_CreateMaterialPipelineState
==============
*/
void Load_CreateMaterialPipelineState(MaterialPipelineState *mtlPipelineState, const GfxStateBits *stateBits, MaterialGeometryType materialType, MaterialTechniqueType techniqueType)
{
  bool v8; 
  MaterialSerializedShader *v9; 
  MaterialSerializedShader *v10; 
  MaterialSerializedShader *v11; 
  MaterialSerializedShader *v12; 
  HRESULT v13; 
  const char *v14; 
  __int64 v15[5]; 
  unsigned __int8 *program; 
  __int64 programSize; 
  unsigned __int8 *metaData; 
  __int64 metaDataSize; 
  unsigned __int8 *v20; 
  __int64 v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int8 *v32; 
  __int64 v33; 
  unsigned __int8 *v34; 
  __int64 v35; 
  unsigned __int8 *v36; 
  __int64 v37; 
  unsigned __int8 *v38; 
  __int64 v39; 

  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2864, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  if ( !g_rootSignatureDescs[0].rootSignature && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2865, ASSERT_TYPE_ASSERT, "(g_rootSignatureDescs[GRAPHICS_DEFAULT_ROOT_SIGNATURE].rootSignature)", (const char *)&queryFormat, "g_rootSignatureDescs[GRAPHICS_DEFAULT_ROOT_SIGNATURE].rootSignature") )
    __debugbreak();
  if ( mtlPipelineState->pso && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2867, ASSERT_TYPE_ASSERT, "(mtlPipelineState->pso == nullptr)", (const char *)&queryFormat, "mtlPipelineState->pso == nullptr") )
    __debugbreak();
  v8 = mtlPipelineState->metaDataSize == 0;
  v15[0] = (__int64)g_rootSignatureDescs[0].rootSignature;
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2871, ASSERT_TYPE_ASSERT, "(mtlPipelineState->metaDataSize)", (const char *)&queryFormat, "mtlPipelineState->metaDataSize", v15[0]) )
    __debugbreak();
  if ( !mtlPipelineState->metaData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2872, ASSERT_TYPE_ASSERT, "(mtlPipelineState->metaData)", (const char *)&queryFormat, "mtlPipelineState->metaData") )
    __debugbreak();
  ProfLoad_Begin("DeserializeGraphicsPipelineStateX");
  v9 = mtlPipelineState->serializedShaders[0];
  v15[3] = (__int64)mtlPipelineState->metaData;
  v15[4] = mtlPipelineState->metaDataSize;
  v15[1] = (__int64)mtlPipelineState->packet;
  v15[2] = mtlPipelineState->packetSize;
  if ( v9 )
  {
    if ( v9->programSize )
    {
      program = v9->program;
      programSize = v9->programSize;
      metaData = v9->metaData;
      metaDataSize = v9->metaDataSize;
      goto LABEL_21;
    }
    Com_PrintWarning(8, "Failed to load pipelinestate because of missing serializedshader asset %s. Check fastfile dependencies.", v9->name);
  }
  program = NULL;
  programSize = 0i64;
  metaData = NULL;
  metaDataSize = 0i64;
LABEL_21:
  v10 = mtlPipelineState->serializedShaders[1];
  if ( v10 )
  {
    if ( v10->programSize )
    {
      v20 = v10->program;
      v21 = v10->programSize;
      v22 = v10->metaData;
      v23 = v10->metaDataSize;
      goto LABEL_26;
    }
    Com_PrintWarning(8, "Failed to load pipelinestate because of missing serializedshader asset %s. Check fastfile dependencies.", v10->name);
  }
  v20 = NULL;
  v21 = 0i64;
  v22 = NULL;
  v23 = 0i64;
LABEL_26:
  v11 = mtlPipelineState->serializedShaders[2];
  if ( v11 )
  {
    if ( v11->programSize )
    {
      v32 = v11->program;
      v33 = v11->programSize;
      v34 = v11->metaData;
      v35 = v11->metaDataSize;
      goto LABEL_31;
    }
    Com_PrintWarning(8, "Failed to load pipelinestate because of missing serializedshader asset %s. Check fastfile dependencies.", v11->name);
  }
  v32 = NULL;
  v33 = 0i64;
  v34 = NULL;
  v35 = 0i64;
LABEL_31:
  v12 = mtlPipelineState->serializedShaders[3];
  if ( v12 )
  {
    if ( v12->programSize )
    {
      v36 = v12->program;
      v37 = v12->programSize;
      v38 = v12->metaData;
      v39 = v12->metaDataSize;
      goto LABEL_36;
    }
    Com_PrintWarning(8, "Failed to load pipelinestate because of missing serializedshader asset %s. Check fastfile dependencies.", v12->name);
  }
  v36 = NULL;
  v37 = 0i64;
  v38 = NULL;
  v39 = 0i64;
LABEL_36:
  v28 = 0i64;
  v29 = 0i64;
  v30 = 0i64;
  v31 = 0i64;
  v24 = 0i64;
  v25 = 0i64;
  v26 = 0i64;
  v27 = 0i64;
  v13 = ((__int64 (__fastcall *)(ID3D12Device *, __int64 *, GUID *, ID3D12PipelineState **))g_dx.d3d12device->m_pFunction[19].QueryInterface)(g_dx.d3d12device, v15, &GUID_765a30f3_f624_4c6f_a828_ace948622445, &mtlPipelineState->pso);
  if ( v13 < 0 )
  {
    v14 = R_ErrorDescription(v13);
    Sys_Error((const ObfuscateErrorText)&stru_144415420, 2886i64, v14);
  }
  if ( !mtlPipelineState->pso && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2887, ASSERT_TYPE_ASSERT, "(mtlPipelineState->pso)", (const char *)&queryFormat, "mtlPipelineState->pso") )
    __debugbreak();
  mtlPipelineState->sourceShaders[0] = program;
  mtlPipelineState->sourceShaders[1] = v20;
  mtlPipelineState->sourceShaders[2] = v32;
  mtlPipelineState->sourceShaders[3] = v36;
  Load_DeriveMaterialPipelineState(mtlPipelineState, stateBits, materialType, techniqueType);
  ProfLoad_End();
}

/*
==============
Load_CreateMaterialPipelineStates
==============
*/
void Load_CreateMaterialPipelineStates(MaterialPipelineState **pipelineStates, unsigned __int8 pipelineStateCount, const GfxStateBits *stateBits, MaterialGeometryType materialType, MaterialTechniqueType techniqueType)
{
  __int64 v8; 
  __int64 v9; 

  if ( pipelineStateCount )
  {
    v8 = 0i64;
    v9 = pipelineStateCount;
    do
    {
      Load_CreateMaterialPipelineState(&(*pipelineStates)[v8++], stateBits, materialType, techniqueType);
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
Load_DeriveMaterialPipelineState
==============
*/
void Load_DeriveMaterialPipelineState(MaterialPipelineState *pipelineState, const GfxStateBits *stateBits, MaterialGeometryType materialType, MaterialTechniqueType techniqueType)
{
  ID3D12PipelineState **p_derivedPso; 
  GfxOtherStateBits otherBits; 
  GfxBlendStateBits blendBits; 
  __int64 v13; 
  float v14; 
  D3D12_BLEND_DESC *v15; 
  char *v16; 
  __int64 v17; 
  __int128 v18; 
  __int64 v19; 
  HRESULT v20; 
  const char *v21; 
  __int64 v22; 
  __m256i v23; 
  __m256i v24; 
  __int128 v25; 
  D3D12_BLEND_DESC result; 
  int v27; 
  D3D12XBOX_GRAPHICS_SHADER_LIMITS_DESC shaderLimitsDesc; 
  int v29; 
  D3D12XBOX_TESSELLATION_PARAMETERS_DESC shaderTessFactorsDesc; 
  int v31; 
  __m256i v32; 
  double v33; 
  int v34; 
  int v35; 
  char v36; 
  int v37; 
  __m256i v38; 
  __int128 v39; 
  D3D12_COMPARISON_FUNC v40; 
  int v41; 
  __int128 v42; 
  __int64 v43; 
  int v44; 
  __m256i v45; 

  p_derivedPso = &pipelineState->derivedPso;
  if ( pipelineState->derivedPso && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2801, ASSERT_TYPE_ASSERT, "(pipelineState->derivedPso == nullptr)", (const char *)&queryFormat, "pipelineState->derivedPso == nullptr") )
    __debugbreak();
  v27 = 6;
  Material_SetupPassLimits(&shaderLimitsDesc, materialType, techniqueType);
  v29 = 7;
  Material_SetupTessParams(&shaderTessFactorsDesc, materialType);
  otherBits = stateBits->otherBits;
  blendBits = stateBits->blendBits;
  v31 = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  if ( ((unsigned __int8)otherBits & 3u) >= 3 )
  {
    LODWORD(v22) = otherBits & 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 741, ASSERT_TYPE_ASSERT, "(unsigned)( stateBits & GFXS_CULL_MASK ) < (unsigned)( ( sizeof( *array_counter( s_cullTable ) ) + 0 ) )", "stateBits & GFXS_CULL_MASK doesn't index ARRAY_COUNT( s_cullTable )\n\t%i not in [0, %i)", v22, 3) )
      __debugbreak();
  }
  *(__int64 *)((char *)v23.m256i_i64 + 4) = (unsigned int)s_cullTable[otherBits & 3];
  v13 = otherBits & 0x30;
  if ( (otherBits & 0x30) != 0 )
  {
    switch ( v13 )
    {
      case 16i64:
        v23.m256i_i32[3] = -r_polygonOffsetBias->current.integer;
        v23.m256i_i32[5] = r_polygonOffsetScale->current.integer ^ _xmm;
        LODWORD(v14) = r_polygonOffsetClamp->current.integer ^ _xmm;
        break;
      case 32i64:
        v23.m256i_i32[3] = -sm_polygonOffsetBias->current.integer;
        v23.m256i_i32[5] = sm_polygonOffsetScale->current.integer ^ _xmm;
        LODWORD(v14) = sm_polygonOffsetClamp->current.integer ^ _xmm;
        break;
      case 48i64:
        v23.m256i_i32[3] = -r_st_sm_polygonOffsetBias->current.integer;
        v23.m256i_i32[5] = r_st_sm_polygonOffsetScale->current.integer ^ _xmm;
        LODWORD(v14) = r_st_sm_polygonOffsetClamp->current.integer ^ _xmm;
        break;
      default:
        CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 729, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
        __debugbreak();
    }
  }
  else
  {
    v14 = 0.0;
    *(float *)&v23.m256i_i32[5] = 0.0;
    v23.m256i_i32[3] = 0;
  }
  *(float *)&v23.m256i_i32[4] = v14;
  v35 = 2;
  v23.m256i_i64[3] = (otherBits & 8) == 0;
  v23.m256i_i32[0] = ((otherBits & 4) == 0) | 2;
  v32 = v23;
  v33 = 0.0;
  v34 = 0;
  v15 = R_HW_CreateBlendStateDesc(&result, blendBits);
  v16 = &v36;
  v17 = 2i64;
  do
  {
    v16 += 128;
    v18 = *(_OWORD *)&v15->AlphaToCoverageEnable;
    v15 = (D3D12_BLEND_DESC *)((char *)v15 + 128);
    *((_OWORD *)v16 - 8) = v18;
    *((_OWORD *)v16 - 7) = *(_OWORD *)&v15[-1].RenderTarget[5].SrcBlend;
    *((_OWORD *)v16 - 6) = *(_OWORD *)&v15[-1].RenderTarget[5].DestBlendAlpha;
    *((_OWORD *)v16 - 5) = *(_OWORD *)&v15[-1].RenderTarget[6].BlendEnable;
    *((_OWORD *)v16 - 4) = *(_OWORD *)&v15[-1].RenderTarget[6].BlendOp;
    *((_OWORD *)v16 - 3) = *(_OWORD *)&v15[-1].RenderTarget[6].LogicOp;
    *((_OWORD *)v16 - 2) = *(_OWORD *)&v15[-1].RenderTarget[7].SrcBlend;
    *((_OWORD *)v16 - 1) = *(_OWORD *)&v15[-1].RenderTarget[7].DestBlendAlpha;
    --v17;
  }
  while ( v17 );
  *(_OWORD *)v16 = *(_OWORD *)&v15->AlphaToCoverageEnable;
  *((_OWORD *)v16 + 1) = *(_OWORD *)&v15->RenderTarget[0].SrcBlend;
  *((_OWORD *)v16 + 2) = *(_OWORD *)&v15->RenderTarget[0].DestBlendAlpha;
  *((_OWORD *)v16 + 3) = *(_OWORD *)&v15->RenderTarget[1].BlendEnable;
  *((_QWORD *)v16 + 8) = *(_QWORD *)&v15->RenderTarget[1].BlendOp;
  v24.m256i_i32[1] = ((unsigned __int64)otherBits >> 9) & 1;
  v24.m256i_i16[9] = 0;
  v24.m256i_i8[16] = BYTE6(otherBits);
  v24.m256i_i32[0] = (otherBits & 0xE00) != 0;
  v24.m256i_i8[17] = HIBYTE(otherBits);
  v37 = 0;
  v41 = 5;
  v24.m256i_i32[2] = s_depthTestTable[((unsigned __int64)otherBits >> 10) & 3];
  v24.m256i_i32[3] = (otherBits & 0xFFFFFF000i64) != 0;
  v24.m256i_i32[7] = s_stencilOpTable[((unsigned __int64)otherBits >> 12) & 7];
  v24.m256i_i32[5] = s_stencilOpTable[((unsigned __int64)otherBits >> 15) & 7];
  v24.m256i_i32[6] = s_stencilOpTable[((unsigned __int64)otherBits >> 18) & 7];
  v38 = v24;
  SHIDWORD(v25) = s_stencilOpTable[((unsigned __int64)otherBits >> 24) & 7];
  SDWORD1(v25) = s_stencilOpTable[((unsigned __int64)otherBits >> 27) & 7];
  SDWORD2(v25) = s_stencilOpTable[((unsigned __int64)otherBits >> 30) & 7];
  SLODWORD(v25) = s_stencilFuncTable[((unsigned __int64)otherBits >> 21) & 7];
  v39 = v25;
  v40 = s_stencilFuncTable[((unsigned __int64)otherBits >> 33) & 7];
  v24.m256i_i8[16] = BYTE6(otherBits);
  v24.m256i_i8[17] = HIBYTE(otherBits);
  *(int *)((char *)&v24.m256i_i32[4] + 2) = 16842752;
  v44 = 4;
  v42 = 0u;
  v45 = (__m256i)0;
  v43 = v24.m256i_i64[2];
  v19 = otherBits & 0x180;
  if ( (otherBits & 0x180) == 0 )
  {
    v32.m256i_i32[7] = 0;
    goto LABEL_26;
  }
  if ( v19 == 128 )
  {
    v45.m256i_i32[0] = 1;
    v32.m256i_i32[7] = 1;
    goto LABEL_27;
  }
  if ( v19 == 256 )
  {
    v32.m256i_i32[7] = 1;
LABEL_26:
    v45.m256i_i32[0] = 2;
    goto LABEL_27;
  }
  LODWORD(v22) = otherBits & 0x180;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2850, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp(2850): unhandled case %d in switch statement", v22) )
    __debugbreak();
LABEL_27:
  v20 = ((__int64 (__fastcall *)(ID3D12Device *, ID3D12PipelineState *, __int64, int *, GUID *, ID3D12PipelineState **))g_dx.d3d12device->m_pFunction[18].AddRef)(g_dx.d3d12device, pipelineState->pso, 7i64, &v27, &GUID_765a30f3_f624_4c6f_a828_ace948622445, p_derivedPso);
  if ( v20 < 0 )
  {
    v21 = R_ErrorDescription(v20);
    Sys_Error((const ObfuscateErrorText)&stru_1444150F0, 2854i64, v21);
  }
  R_GetTrackingZoneName();
}

/*
==============
Load_FixupComputeShaderProgram
==============
*/
void Load_FixupComputeShaderProgram(GfxComputeShaderLoadDef *loadDef, ComputeShaderProgram *program)
{
  if ( !program->cs )
  {
    program->cs = (ID3D12PipelineState *)loadDef->program;
    loadDef->program = NULL;
  }
}

/*
==============
Load_MaterialConstantBufferTable
==============
*/
void Load_MaterialConstantBufferTable(MaterialConstantBufferDef **__formal, Material *material)
{
  const char *name; 
  int v4; 
  const char *TrackingZoneName; 
  __int64 v6; 
  MaterialConstantBufferDef *constantBufferTable; 
  unsigned int vsDataSize; 
  unsigned __int8 *vsData; 
  unsigned int hsDataSize; 
  unsigned __int8 *hsData; 
  unsigned int dsDataSize; 
  unsigned __int8 *dsData; 
  unsigned int psDataSize; 
  unsigned __int8 *psData; 
  GfxBufferCreationContext v16; 
  GfxBufferCreationContext v17; 
  GfxBufferCreationContext v18; 
  GfxBufferCreationContext v19; 
  GfxBufferCreationContext v20[2]; 

  name = material->name;
  v4 = 0;
  TrackingZoneName = R_GetTrackingZoneName();
  if ( material->constantBufferCount )
  {
    v6 = 0i64;
    do
    {
      constantBufferTable = material->constantBufferTable;
      vsDataSize = constantBufferTable[v6].vsDataSize;
      if ( vsDataSize )
      {
        vsData = constantBufferTable[v6].vsData;
        v16.zoneName = TrackingZoneName;
        v16.objectName = name;
        v20[0] = v16;
        Material_CreateConstantBuffer(vsData, vsDataSize, &constantBufferTable[v6].vsConstantBuffer, v20);
      }
      hsDataSize = constantBufferTable[v6].hsDataSize;
      if ( hsDataSize )
      {
        hsData = constantBufferTable[v6].hsData;
        v17.zoneName = TrackingZoneName;
        v17.objectName = name;
        v20[0] = v17;
        Material_CreateConstantBuffer(hsData, hsDataSize, &constantBufferTable[v6].hsConstantBuffer, v20);
      }
      dsDataSize = constantBufferTable[v6].dsDataSize;
      if ( dsDataSize )
      {
        dsData = constantBufferTable[v6].dsData;
        v18.zoneName = TrackingZoneName;
        v18.objectName = name;
        v20[0] = v18;
        Material_CreateConstantBuffer(dsData, dsDataSize, &constantBufferTable[v6].dsConstantBuffer, v20);
      }
      psDataSize = constantBufferTable[v6].psDataSize;
      if ( psDataSize )
      {
        psData = constantBufferTable[v6].psData;
        v19.zoneName = TrackingZoneName;
        v19.objectName = name;
        v20[0] = v19;
        Material_CreateConstantBuffer(psData, psDataSize, &constantBufferTable[v6].psConstantBuffer, v20);
      }
      ++v4;
      ++v6;
    }
    while ( v4 < material->constantBufferCount );
  }
}

/*
==============
Load_MaterialTechnique
==============
*/
void Load_MaterialTechnique(MaterialTechnique **materialTechnique, const char *techniqueSetName)
{
  ;
}

/*
==============
Material_CreateComputePipelineState
==============
*/
void Material_CreateComputePipelineState(ComputeShader *computeShader)
{
  __m256i v2; 
  HRESULT v5; 
  const char *v6; 
  ID3D12DeviceChild *v7; 
  const char *name; 
  ID3D12PipelineState *cs; 
  HRESULT v10; 
  const char *v11; 
  __int64 v12[3]; 
  int v13; 
  __int64 v14[3]; 
  __m256i v15; 
  ID3D12DeviceChild *resource; 

  if ( !computeShader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2253, ASSERT_TYPE_ASSERT, "(computeShader)", (const char *)&queryFormat, "computeShader") )
    __debugbreak();
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2257, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  if ( computeShader->prog.loadDef.program )
  {
    v14[1] = (__int64)computeShader->prog.loadDef.program;
    v14[2] = computeShader->prog.loadDef.programSize;
    v14[0] = 0i64;
    resource = NULL;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v15 = v2;
    v5 = ((__int64 (__fastcall *)(ID3D12Device *, __int64 *, _QWORD, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[20].Release)(g_dx.d3d12device, v14, 0i64, 0i64, &GUID_765a30f3_f624_4c6f_a828_ace948622445, &resource);
    if ( v5 < 0 )
    {
      Com_PrintError(1, "%s failed for %s (%s)\n", "CreateComputePipelineState", computeShader->debugName, computeShader->name);
      Com_PrintError(1, "This usually means the shader uses functionality not supported by this GPU.\n");
      v6 = R_ErrorDescription(v5);
      Sys_Error((const ObfuscateErrorText)&stru_144416000, 1668i64, v6);
    }
    PIXSetDebugName(resource, computeShader->name);
    v7 = resource;
    name = computeShader->name;
    computeShader->prog.cs = (ID3D12PipelineState *)resource;
    PIXSetDebugName(v7, name);
    if ( !computeShader->prog.cs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2235, ASSERT_TYPE_ASSERT, "(computeShader->cs != nullptr)", (const char *)&queryFormat, "computeShader->cs != nullptr") )
      __debugbreak();
    if ( computeShader->prog.derivedCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2236, ASSERT_TYPE_ASSERT, "(computeShader->derivedCS == nullptr)", (const char *)&queryFormat, "computeShader->derivedCS == nullptr") )
      __debugbreak();
    cs = computeShader->prog.cs;
    memset(v12, 0, sizeof(v12));
    v13 = 0;
    v10 = ((__int64 (__fastcall *)(ID3D12Device *, ID3D12PipelineState *, __int64, __int64 *, GUID *, ID3D12PipelineState **))g_dx.d3d12device->m_pFunction[21].QueryInterface)(g_dx.d3d12device, cs, 1i64, v12, &GUID_765a30f3_f624_4c6f_a828_ace948622445, &computeShader->prog.derivedCS);
    if ( v10 < 0 )
    {
      v11 = R_ErrorDescription(v10);
      Sys_Error((const ObfuscateErrorText)&stru_144414C40, 2244i64, v11);
    }
    R_GetTrackingZoneName();
    PIXSetDebugName(computeShader->prog.derivedCS, computeShader->name);
  }
  else
  {
    computeShader->prog.cs = NULL;
    computeShader->prog.derivedCS = NULL;
  }
}

/*
==============
Material_CreateConstantBuffer
==============
*/
void Material_CreateConstantBuffer(const void *data, unsigned int dataSize, GfxConstantBuffer *constantBuffer, GfxBufferCreationContext *context)
{
  GfxBufferCreationContext v8; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3273, ASSERT_TYPE_ASSERT, "(data != 0)", (const char *)&queryFormat, "data != NULL") )
    __debugbreak();
  if ( !dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3274, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( !constantBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3275, ASSERT_TYPE_ASSERT, "(constantBuffer != 0)", (const char *)&queryFormat, "constantBuffer != NULL") )
    __debugbreak();
  v8 = *context;
  R_CreateConstantBuffer(dataSize, 1u, 0, data, constantBuffer, &v8);
}

/*
==============
Material_DirtySort
==============
*/
void Material_DirtySort(void)
{
  if ( !g_dbPreloading && !g_dbPreloadUnloading )
  {
    if ( DB_IsDoingTransientOnlyWork() && (DB_Zones_GetInUseFlags() & 0x600000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3743, ASSERT_TYPE_ASSERT, "(!DB_IsDoingTransientOnlyWork() || !( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP ))", "%s\n\tIf this fires, it's likely we're unloading or loading a transient after a level has been preloaded, but before the transition.  This is not supported", "!DB_IsDoingTransientOnlyWork() || !( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP )") )
      __debugbreak();
    rgp.transientMaterialSort = 0;
  }
}

/*
==============
Material_FinishLoading
==============
*/
void Material_FinishLoading(void)
{
  ;
}

/*
==============
Material_FixupPipelineStates
==============
*/
void Material_FixupPipelineStates(MaterialTechniqueSet *techSet)
{
  const ObfuscateErrorText *v1; 
  int v3; 
  TechniqueMask *p_techniqueMask; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  MaterialTechnique *v8; 
  unsigned __int8 pipelineStateInputLayoutCount; 
  __int64 v10; 
  __int64 v11; 
  MaterialPipelineState *v12; 
  __int64 v13; 
  void **sourceShaders; 
  __int64 v15; 
  ID3D12PipelineState *derivedPso; 
  int v17; 
  ID3D12PipelineState *pso; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v1 = &queryFormat;
  if ( !techSet )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2980, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
      __debugbreak();
    v1 = &queryFormat;
  }
  v3 = 0;
  p_techniqueMask = &techSet->techniqueMask;
  v5 = 4i64;
  do
  {
    v3 += __popcnt(p_techniqueMask->mask[0]);
    p_techniqueMask = (TechniqueMask *)((char *)p_techniqueMask + 8);
    --v5;
  }
  while ( v5 );
  v6 = v3;
  v23 = v3;
  if ( v3 > 0 )
  {
    v7 = 0i64;
    v22 = 0i64;
    do
    {
      v8 = techSet->maskedTechniques[v7];
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2990, ASSERT_TYPE_ASSERT, "(technique)", (const char *)&queryFormat, "technique") )
        __debugbreak();
      pipelineStateInputLayoutCount = v8->pipelineStateInputLayoutCount;
      if ( pipelineStateInputLayoutCount )
      {
        v10 = 0i64;
        v11 = pipelineStateInputLayoutCount;
        do
        {
          v12 = &v8->pipelineStates[v10];
          v13 = 0i64;
          sourceShaders = v12->sourceShaders;
          while ( 1 )
          {
            v15 = (__int64)*(sourceShaders - 4);
            if ( v15 )
            {
              if ( *(void **)(v15 + 16) != *sourceShaders )
                break;
            }
            v13 = (unsigned int)(v13 + 1);
            ++sourceShaders;
            if ( (unsigned int)v13 >= 4 )
            {
              if ( v12->pso )
                goto LABEL_32;
              break;
            }
          }
          derivedPso = v12->derivedPso;
          if ( derivedPso )
          {
            v12->derivedPso = NULL;
            v17 = ((__int64 (__fastcall *)(ID3D12PipelineState *, unsigned int (__fastcall *)(IGraphicsUnknown *), __int64, const ObfuscateErrorText *))derivedPso->m_pFunction->Release)(derivedPso, derivedPso->m_pFunction->Release, v13, v1);
            if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() )
            {
              if ( v17 )
              {
                LODWORD(v21) = v17;
                LODWORD(v20) = 2923;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", v20, "pipelineState->derivedPso", v21) )
                  __debugbreak();
              }
            }
          }
          pso = v12->pso;
          if ( pso )
          {
            v12->pso = NULL;
            v19 = ((__int64 (__fastcall *)(ID3D12PipelineState *, unsigned int (__fastcall *)(IGraphicsUnknown *), __int64, const ObfuscateErrorText *))pso->m_pFunction->Release)(pso, pso->m_pFunction->Release, v13, v1);
            if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v19 )
            {
              LODWORD(v21) = v19;
              LODWORD(v20) = 2940;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", v20, "pipelineState->pso", v21) )
                __debugbreak();
            }
          }
          Load_CreateMaterialPipelineState(v12, &v8->stateBits, techSet->materialType, v8->type);
LABEL_32:
          ++v10;
          --v11;
        }
        while ( v11 );
        v7 = v22;
        v6 = v23;
      }
      ++v7;
      v1 = &queryFormat;
      v22 = v7;
    }
    while ( v7 < v6 );
  }
}

/*
==============
Material_GetDefault2DTextureCoordsForAtlasing
==============
*/
void Material_GetDefault2DTextureCoordsForAtlasing(const Material *material, float *s0, float *s1, float *t0, float *t1)
{
  *s0 = 0.0;
  *s1 = 1.0;
  *t0 = 0.0;
  *t1 = 1.0;
  Material_Process2DTextureCoordsForAtlasing(material, s0, s1, t0, t1);
}

/*
==============
Material_GetGeometryOverrideTypeFromGeometryType
==============
*/
__int64 Material_GetGeometryOverrideTypeFromGeometryType(MaterialGeometryType geometryType)
{
  __int64 result; 
  MaterialGeometryType *i; 

  result = 0i64;
  for ( i = s_materialOverrideGeometryTypes; geometryType != *i; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 6 )
    {
      Com_Printf(8, "WARNING: Material_GetGeometryOverrideTypeFromGeometryType called for type %d, which is not valid!\n", (unsigned int)geometryType);
      return 0i64;
    }
  }
  return result;
}

/*
==============
Material_GetGeometryTypeFromGeomeyryOverrideType
==============
*/
__int64 Material_GetGeometryTypeFromGeomeyryOverrideType(MaterialOverrideGeometryType overrideGeometryType)
{
  __int64 v1; 

  v1 = (unsigned int)overrideGeometryType;
  if ( (unsigned int)overrideGeometryType >= MTL_OVERRIDE_GEOMETRY_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4821, ASSERT_TYPE_ASSERT, "(overrideGeometryType < MTL_OVERRIDE_GEOMETRY_TYPE_COUNT)", (const char *)&queryFormat, "overrideGeometryType < MTL_OVERRIDE_GEOMETRY_TYPE_COUNT") )
    __debugbreak();
  return (unsigned int)s_materialOverrideGeometryTypes[v1];
}

/*
==============
Material_GetName
==============
*/
const char *Material_GetName(Material *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4324, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  return Material_FromHandle(handle)->name;
}

/*
==============
Material_GetNameWithoutPrefix
==============
*/
const char *Material_GetNameWithoutPrefix(Material *handle)
{
  const char *result; 
  const char *v3; 
  char i; 
  const char *v5; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4333, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  result = Material_FromHandle(handle)->name;
  v3 = result;
  for ( i = *result; *v3; result = v5 )
  {
    v5 = ++v3;
    if ( i != 47 )
      v5 = result;
    i = *v3;
  }
  return result;
}

/*
==============
Material_GetRefractionOverrideMaterial
==============
*/
Material *Material_GetRefractionOverrideMaterial(Material *baseMaterial)
{
  __int64 materialType; 
  MaterialGeometryType *v3; 
  unsigned int v4; 
  unsigned int v5; 
  Material *result; 

  if ( !baseMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4844, ASSERT_TYPE_ASSERT, "(baseMaterial)", (const char *)&queryFormat, "baseMaterial") )
    __debugbreak();
  materialType = (unsigned int)baseMaterial->materialType;
  v3 = s_materialOverrideGeometryTypes;
  v4 = 0;
  v5 = 0;
  while ( (_DWORD)materialType != *v3 )
  {
    ++v5;
    ++v3;
    if ( v5 >= 6 )
    {
      Com_Printf(8, "WARNING: Material_GetGeometryOverrideTypeFromGeometryType called for type %d, which is not valid!\n", materialType);
      goto LABEL_9;
    }
  }
  v4 = v5;
LABEL_9:
  result = rgp.refracationOverrideMaterial[v4];
  if ( !result )
  {
    Com_Printf(8, "WARNING: Trying to use refraction override material with type %d, but the override material for that prefix doesn't exist\n", (unsigned int)baseMaterial->materialType);
    return 0i64;
  }
  return result;
}

/*
==============
Material_Init
==============
*/
void Material_Init(void)
{
  const BuiltinComputeShaderTable *v0; 
  const BuiltInMaterialTable *v1; 
  unsigned int i; 
  Material *MaterialAtIndex; 
  char *v4; 

  Com_Printf(8, "Loading %d built in compute shaders\n", 533i64);
  v0 = s_builtInComputeShaders;
  do
  {
    if ( *v0->shader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4353, ASSERT_TYPE_ASSERT, "( ( isOverride || !*shaderTable[builtInShaderIndex].shader ) )", "( shaderTable[builtInShaderIndex].name ) = %s", v0->name) )
      __debugbreak();
    *(XAssetHeader *)v0->shader = DB_FindXAssetHeader(ASSET_TYPE_COMPUTESHADER, v0->name, 1);
    if ( !*v0->shader )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144415A08, 667i64, v0->name);
    ++v0;
  }
  while ( (__int64)v0 < (__int64)&unk_148001AF0 );
  Com_Printf(8, "Loading %d built in materials\n", 258i64);
  v1 = s_builtInMaterials;
  do
  {
    *(XAssetHeader *)v1->material = DB_FindXAssetHeader(ASSET_TYPE_MATERIAL, v1->name, 1);
    if ( !*v1->material )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144415A70, 668i64, v1->name);
    ++v1;
  }
  while ( (__int64)v1 < (__int64)s_srcBlendTable );
  DB_FindXAssetHeader(ASSET_TYPE_MATERIAL, "statmon_warning_tris", 1);
  R_DecalVolumes_InitDefaultMask();
  for ( i = 0; i < 0x800; ++i )
  {
    MaterialAtIndex = DB_GetMaterialAtIndex(i);
    if ( !MaterialAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4573, ASSERT_TYPE_ASSERT, "(physicalMaterial)", (const char *)&queryFormat, "physicalMaterial") )
      __debugbreak();
    *MaterialAtIndex = *rgp.overrideMaterial;
    rgp.physicalMaterialsForSort[i] = i;
    rgp.physicalMaterialSortedIndex[i] = i;
    v4 = name_0[i];
    Com_sprintf(v4, 0x10ui64, "mtl_ovrd_%d", i);
    MaterialAtIndex->name = v4;
    MaterialAtIndex->sortKey = 63;
  }
}

/*
==============
Material_InitConstantBuffers
==============
*/
void Material_InitConstantBuffers(Material *material)
{
  const char *name; 
  int v3; 
  const char *TrackingZoneName; 
  __int64 v5; 
  MaterialConstantBufferDef *constantBufferTable; 
  unsigned int vsDataSize; 
  unsigned __int8 *vsData; 
  unsigned int hsDataSize; 
  unsigned __int8 *hsData; 
  unsigned int dsDataSize; 
  unsigned __int8 *dsData; 
  unsigned int psDataSize; 
  unsigned __int8 *psData; 
  GfxBufferCreationContext v15; 
  GfxBufferCreationContext v16; 
  GfxBufferCreationContext v17; 
  GfxBufferCreationContext v18; 
  GfxBufferCreationContext v19[2]; 

  name = material->name;
  v3 = 0;
  TrackingZoneName = R_GetTrackingZoneName();
  if ( material->constantBufferCount )
  {
    v5 = 0i64;
    do
    {
      constantBufferTable = material->constantBufferTable;
      vsDataSize = constantBufferTable[v5].vsDataSize;
      if ( vsDataSize )
      {
        vsData = constantBufferTable[v5].vsData;
        v15.zoneName = TrackingZoneName;
        v15.objectName = name;
        v19[0] = v15;
        Material_CreateConstantBuffer(vsData, vsDataSize, &constantBufferTable[v5].vsConstantBuffer, v19);
      }
      hsDataSize = constantBufferTable[v5].hsDataSize;
      if ( hsDataSize )
      {
        hsData = constantBufferTable[v5].hsData;
        v16.zoneName = TrackingZoneName;
        v16.objectName = name;
        v19[0] = v16;
        Material_CreateConstantBuffer(hsData, hsDataSize, &constantBufferTable[v5].hsConstantBuffer, v19);
      }
      dsDataSize = constantBufferTable[v5].dsDataSize;
      if ( dsDataSize )
      {
        dsData = constantBufferTable[v5].dsData;
        v17.zoneName = TrackingZoneName;
        v17.objectName = name;
        v19[0] = v17;
        Material_CreateConstantBuffer(dsData, dsDataSize, &constantBufferTable[v5].dsConstantBuffer, v19);
      }
      psDataSize = constantBufferTable[v5].psDataSize;
      if ( psDataSize )
      {
        psData = constantBufferTable[v5].psData;
        v18.zoneName = TrackingZoneName;
        v18.objectName = name;
        v19[0] = v18;
        Material_CreateConstantBuffer(psData, psDataSize, &constantBufferTable[v5].psConstantBuffer, v19);
      }
      ++v3;
      ++v5;
    }
    while ( v3 < material->constantBufferCount );
  }
}

/*
==============
Material_IsDefault
==============
*/
bool Material_IsDefault(const Material *material)
{
  Material *defaultMaterial; 
  const char *name; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3947, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  defaultMaterial = rgp.defaultMaterial;
  if ( !rgp.defaultMaterial )
  {
    name = "<NULL NAME>";
    if ( material->name )
      name = material->name;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3948, ASSERT_TYPE_ASSERT, "(rgp.defaultMaterial)", "%s\n\tno default material to check against '%s', have you converted assets ?", "rgp.defaultMaterial", name) )
      __debugbreak();
    defaultMaterial = rgp.defaultMaterial;
  }
  return material->textureTable == defaultMaterial->textureTable && material->constantTable == defaultMaterial->constantTable && material->techniqueSet == defaultMaterial->techniqueSet;
}

/*
==============
Material_Process2DTextureCoordsForAtlasing
==============
*/
void Material_Process2DTextureCoordsForAtlasing(const Material *material, float *s0, float *s1, float *t0, float *t1)
{
  float *v8; 
  unsigned int unsignedInt; 
  unsigned __int8 textureAtlasColumnCount; 
  unsigned __int8 textureAtlasRowCount; 
  unsigned int v12; 
  unsigned int textureAtlasTime; 
  unsigned int v14; 
  unsigned int v15; 
  float v16; 
  float v17; 
  float s0a; 
  float *v19; 
  float dt; 
  float v21; 

  v19 = s0;
  if ( !s0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4708, ASSERT_TYPE_ASSERT, "(s0)", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !s1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4709, ASSERT_TYPE_ASSERT, "(s1)", (const char *)&queryFormat, "s1") )
    __debugbreak();
  if ( !t0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4710, ASSERT_TYPE_ASSERT, "(t0)", (const char *)&queryFormat, "t0") )
    __debugbreak();
  v8 = t1;
  if ( !t1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4711, ASSERT_TYPE_ASSERT, "(t1)", (const char *)&queryFormat, "t1") )
    __debugbreak();
  if ( material && (material->textureAtlasColumnCount != 1 || material->textureAtlasRowCount != 1) )
  {
    unsignedInt = r_atlasAnimFPS->current.unsignedInt;
    if ( !unsignedInt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4720, ASSERT_TYPE_ASSERT, "(fps > 0)", (const char *)&queryFormat, "fps > 0") )
      __debugbreak();
    if ( !material->textureAtlasColumnCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4721, ASSERT_TYPE_ASSERT, "(material->textureAtlasColumnCount > 0)", (const char *)&queryFormat, "material->textureAtlasColumnCount > 0") )
      __debugbreak();
    if ( !material->textureAtlasRowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4722, ASSERT_TYPE_ASSERT, "(material->textureAtlasRowCount > 0)", (const char *)&queryFormat, "material->textureAtlasRowCount > 0") )
      __debugbreak();
    textureAtlasColumnCount = material->textureAtlasColumnCount;
    if ( textureAtlasColumnCount )
    {
      textureAtlasRowCount = material->textureAtlasRowCount;
      if ( textureAtlasRowCount )
      {
        if ( unsignedInt )
        {
          v12 = textureAtlasColumnCount * textureAtlasRowCount;
          textureAtlasTime = rg.textureAtlasTime;
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4741, ASSERT_TYPE_ASSERT, "(frameCount)", (const char *)&queryFormat, "frameCount") )
            __debugbreak();
          v14 = 1000 * v12 / unsignedInt;
          v15 = unsignedInt * (textureAtlasTime % v14) / 0x3E8;
          if ( v15 >= v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4746, ASSERT_TYPE_ASSERT, "((frame < frameCount))", "%s\n\tframe:%i  ms:%i  fps:%i  fc:%i  msTtP:%i  msSLB:%i\n", "(frame < frameCount)", unsignedInt * (textureAtlasTime % v14) / 0x3E8, textureAtlasTime, unsignedInt, v12, 1000 * v12 / unsignedInt, textureAtlasTime % v14) )
            __debugbreak();
          TextureAtlas_GetCoords_ByIndex(v15, material->textureAtlasColumnCount, material->textureAtlasRowCount, &s0a, (float *)&t1, &v21, &dt);
          v16 = *(float *)&t1;
          v17 = dt;
          *v19 = (float)(*(float *)&t1 * *v19) + s0a;
          *s1 = (float)(v16 * *s1) + s0a;
          *t0 = (float)(v17 * *t0) + v21;
          *v8 = (float)(v17 * *v8) + v21;
        }
      }
    }
  }
}

/*
==============
Material_RefreshAllTechniqueSets
==============
*/
void Material_RefreshAllTechniqueSets(void)
{
  DB_EnumXAssets(ASSET_TYPE_TECHNIQUE_SET, Material_RefreshDerivedPipelineStates, NULL, 1);
}

/*
==============
Material_RefreshDerivedPipelineStates
==============
*/
void Material_RefreshDerivedPipelineStates(XAssetHeader header, void *data)
{
  int v2; 
  unsigned __int64 *v4; 
  __int64 v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v2 = 0;
  v4 = (unsigned __int64 *)&header.physicsLibrary[1];
  v5 = 4i64;
  do
  {
    v2 += __popcnt(*v4++);
    --v5;
  }
  while ( v5 );
  v19 = v2;
  if ( v2 > 0 )
  {
    v6 = "pipelineState";
    v7 = 0i64;
    v18 = 0i64;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)&header.physicsLibrary[2].isMaterialList + 8 * v7);
      v9 = *(_BYTE *)(v8 + 14);
      if ( v9 )
      {
        v10 = 0i64;
        v11 = v9;
        v12 = 0i64;
        do
        {
          v13 = v10 + *(_QWORD *)(v8 + 48);
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2918, ASSERT_TYPE_ASSERT, "(pipelineState)", (const char *)&queryFormat, "pipelineState") )
            __debugbreak();
          v14 = *(_QWORD *)(v13 + 88);
          if ( v14 )
          {
            *(_QWORD *)(v13 + 88) = 0i64;
            v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, const char *, const char *))(*(_QWORD *)v14 + 16i64))(v14, *(_QWORD *)(*(_QWORD *)v14 + 16i64), v6, "var");
            if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v15 )
            {
              LODWORD(v17) = v15;
              LODWORD(v16) = 2923;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", v16, "pipelineState->derivedPso", v17) )
                __debugbreak();
            }
          }
          Load_DeriveMaterialPipelineState((MaterialPipelineState *)(v12 + *(_QWORD *)(v8 + 48)), (const GfxStateBits *)(v8 + 88), (MaterialGeometryType)header.physicsLibrary->havokData, *(MaterialTechniqueType *)(v8 + 8));
          v12 += 104i64;
          v10 += 104i64;
          v6 = "pipelineState";
          --v11;
        }
        while ( v11 );
        v7 = v18;
        v6 = "pipelineState";
      }
      v18 = ++v7;
    }
    while ( v7 < v19 );
  }
}

/*
==============
Material_Register
==============
*/
Material *Material_Register(const char *name, ImageTrack imageTrack)
{
  return DB_FindXAssetHeader(ASSET_TYPE_MATERIAL, name, 1).material;
}

/*
==============
Material_RegisterComputeShader
==============
*/
ComputeShader *Material_RegisterComputeShader(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_COMPUTESHADER, name, 1).computeShader;
}

/*
==============
Material_RegisterComputeShader_FastFile
==============
*/
ComputeShader *Material_RegisterComputeShader_FastFile(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_COMPUTESHADER, name, 1).computeShader;
}

/*
==============
Material_RegisterHandle
==============
*/
Material *Material_RegisterHandle(const char *name, ImageTrack imageTrack)
{
  const char *v3; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4140, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !rgp.defaultMaterial )
  {
    v3 = name;
    if ( !*name )
      v3 = "<NULL NAME>";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 4141, ASSERT_TYPE_ASSERT, "(rgp.defaultMaterial)", "%s\n\tnull default material when registering '%s', have you converted assets ?", "rgp.defaultMaterial", v3) )
      __debugbreak();
  }
  if ( !*name )
    return rgp.defaultMaterial;
  return DB_FindXAssetHeader(ASSET_TYPE_MATERIAL, name, 1).material;
}

/*
==============
Material_Register_FastFile
==============
*/
Material *Material_Register_FastFile(const char *name, ImageTrack imageTrack)
{
  return DB_FindXAssetHeader(ASSET_TYPE_MATERIAL, name, 1).material;
}

/*
==============
Material_ReleaseComputeShaderResources
==============
*/
void Material_ReleaseComputeShaderResources(ComputeShader *shader)
{
  ID3D12PipelineState *derivedCS; 
  unsigned int v3; 
  ID3D12PipelineState *cs; 

  if ( shader->prog.cs && shader->prog.loadDef.program )
  {
    derivedCS = shader->prog.derivedCS;
    shader->prog.derivedCS = NULL;
    if ( !derivedCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
      __debugbreak();
    v3 = derivedCS->m_pFunction->Release(derivedCS);
    if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3432, "shader->prog.derivedCS", v3) )
      __debugbreak();
    cs = shader->prog.cs;
    shader->prog.cs = NULL;
    R_ReleaseAndSetNULL<ID3D12PipelineState>(cs, "shader->prog.cs", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 3433);
  }
}

/*
==============
Material_ReleaseMaterialResources
==============
*/
void Material_ReleaseMaterialResources(Material *mtl)
{
  int v1; 

  v1 = 0;
  if ( mtl->constantBufferCount )
  {
    do
    {
      R_DestroyConstantBuffer(&mtl->constantBufferTable[v1].vsConstantBuffer);
      R_DestroyConstantBuffer(&mtl->constantBufferTable[v1].hsConstantBuffer);
      R_DestroyConstantBuffer(&mtl->constantBufferTable[v1].dsConstantBuffer);
      R_DestroyConstantBuffer(&mtl->constantBufferTable[v1++].psConstantBuffer);
    }
    while ( v1 < mtl->constantBufferCount );
  }
}

/*
==============
Material_ReleaseTechniquePipelineStates
==============
*/
void Material_ReleaseTechniquePipelineStates(MaterialTechnique *technique)
{
  unsigned __int8 pipelineStateInputLayoutCount; 
  __int64 v3; 
  __int64 v4; 
  MaterialPipelineState *v5; 
  ID3D12PipelineState *derivedPso; 
  unsigned int v7; 
  MaterialPipelineState *v8; 
  ID3D12PipelineState *pso; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !technique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2968, ASSERT_TYPE_ASSERT, "(technique)", (const char *)&queryFormat, "technique") )
    __debugbreak();
  pipelineStateInputLayoutCount = technique->pipelineStateInputLayoutCount;
  if ( pipelineStateInputLayoutCount )
  {
    v3 = 0i64;
    v4 = pipelineStateInputLayoutCount;
    do
    {
      v5 = &technique->pipelineStates[v3];
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2918, ASSERT_TYPE_ASSERT, "(pipelineState)", (const char *)&queryFormat, "pipelineState") )
        __debugbreak();
      derivedPso = v5->derivedPso;
      if ( derivedPso )
      {
        v5->derivedPso = NULL;
        v7 = derivedPso->m_pFunction->Release(derivedPso);
        if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() )
        {
          if ( v7 )
          {
            LODWORD(v12) = v7;
            LODWORD(v11) = 2923;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", v11, "pipelineState->derivedPso", v12) )
              __debugbreak();
          }
        }
      }
      v8 = &technique->pipelineStates[v3];
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2931, ASSERT_TYPE_ASSERT, "(pipelineState)", (const char *)&queryFormat, "pipelineState") )
        __debugbreak();
      pso = v8->pso;
      if ( pso )
      {
        v8->pso = NULL;
        v10 = pso->m_pFunction->Release(pso);
        if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v10 )
        {
          LODWORD(v12) = v10;
          LODWORD(v11) = 2940;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", v11, "pipelineState->pso", v12) )
            __debugbreak();
        }
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
Material_ReleaseTechniqueSetResources
==============
*/
void Material_ReleaseTechniqueSetResources(MaterialTechniqueSet *mtlTechniqueSet)
{
  __int64 v1; 
  TechniqueMask *p_techniqueMask; 
  int v3; 
  __int64 v5; 
  __int64 v6; 

  v1 = 0i64;
  p_techniqueMask = &mtlTechniqueSet->techniqueMask;
  v3 = 0;
  v5 = 4i64;
  do
  {
    v3 += __popcnt(p_techniqueMask->mask[0]);
    p_techniqueMask = (TechniqueMask *)((char *)p_techniqueMask + 8);
    --v5;
  }
  while ( v5 );
  v6 = v3;
  if ( v3 > 0 )
  {
    do
      Material_ReleaseTechniquePipelineStates(mtlTechniqueSet->maskedTechniques[v1++]);
    while ( v1 < v6 );
  }
}

/*
==============
Material_SetTextureAtlasTime
==============
*/
void Material_SetTextureAtlasTime(unsigned int ms)
{
  rg.textureAtlasTime = ms;
}

/*
==============
Material_SetupPassLimits
==============
*/
void Material_SetupPassLimits(D3D12XBOX_GRAPHICS_SHADER_LIMITS_DESC *shaderLimitsDesc, MaterialGeometryType materialType, MaterialTechniqueType techniqueType)
{
  unsigned __int32 v6; 
  unsigned int gpuLateAllocParamCacheST; 
  unsigned int gpuVSWaveLimitST; 
  int gpuPSWaveLimitST; 
  __int64 v10; 
  __int64 v11; 

  if ( !shaderLimitsDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2679, ASSERT_TYPE_ASSERT, "(shaderLimitsDesc)", (const char *)&queryFormat, "shaderLimitsDesc") )
    __debugbreak();
  *(_QWORD *)&shaderLimitsDesc->MaxWavesWithLateAllocParameterCache = 22i64;
  *(_QWORD *)&shaderLimitsDesc->DSDisableFlags = 0i64;
  *(_QWORD *)&shaderLimitsDesc->PSDisableFlags = 0i64;
  *(_QWORD *)&shaderLimitsDesc->HSMaxWaves = 0i64;
  *(_QWORD *)&shaderLimitsDesc->GSMaxWaves = 0i64;
  *(_QWORD *)&shaderLimitsDesc->VSMaxWavesForCuLocking = 0i64;
  *(_QWORD *)&shaderLimitsDesc->DSMaxWavesForCuLocking = 0i64;
  shaderLimitsDesc->PSMaxWavesForCuLocking = 0;
  v6 = techniqueType % 39;
  if ( (materialType & 0x210080) == 2162816 )
  {
    gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheST;
    gpuVSWaveLimitST = rg.gpuVSWaveLimitST;
    gpuPSWaveLimitST = rg.gpuPSWaveLimitST;
    if ( v6 <= 0x1A )
      gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheSTDepthOnly;
    if ( v6 <= 0x1A )
    {
      gpuVSWaveLimitST = rg.gpuVSWaveLimitSTDepthOnly;
      gpuPSWaveLimitST = rg.gpuPSWaveLimitSTDepthOnly;
    }
  }
  else if ( (materialType & 0x200000) != 0 )
  {
    gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheBSP;
    gpuVSWaveLimitST = rg.gpuVSWaveLimitBSP;
    gpuPSWaveLimitST = rg.gpuPSWaveLimitBSP;
    if ( v6 <= 0x1A )
      gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheBSPDepthOnly;
    if ( v6 <= 0x1A )
    {
      gpuVSWaveLimitST = rg.gpuVSWaveLimitBSPDepthOnly;
      gpuPSWaveLimitST = rg.gpuPSWaveLimitBSPDepthOnly;
    }
  }
  else if ( (materialType & 0x88000) == 557056 )
  {
    gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheSubdiv;
    gpuVSWaveLimitST = rg.gpuVSWaveLimitSubdiv;
    gpuPSWaveLimitST = rg.gpuPSWaveLimitSubdiv;
    if ( v6 <= 0x1A )
      gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheSubdivDepthOnly;
    if ( v6 <= 0x1A )
    {
      gpuVSWaveLimitST = rg.gpuVSWaveLimitSubdivDepthOnly;
      gpuPSWaveLimitST = rg.gpuPSWaveLimitSubdivDepthOnly;
    }
  }
  else if ( (materialType & 0x400000) != 0 )
  {
    gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheEffects;
    gpuVSWaveLimitST = rg.gpuVSWaveLimitEffects;
    gpuPSWaveLimitST = rg.gpuPSWaveLimitEffects;
  }
  else
  {
    gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheDefault;
    gpuVSWaveLimitST = rg.gpuVSWaveLimitDefault;
    gpuPSWaveLimitST = rg.gpuPSWaveLimitDefault;
    if ( v6 <= 0x1A )
      gpuLateAllocParamCacheST = rg.gpuLateAllocParamCacheDefaultDepthOnly;
    if ( v6 <= 0x1A )
    {
      gpuVSWaveLimitST = rg.gpuVSWaveLimitDefaultDepthOnly;
      gpuPSWaveLimitST = rg.gpuPSWaveLimitDefaultDepthOnly;
    }
  }
  if ( gpuLateAllocParamCacheST > 0x3F )
  {
    LODWORD(v10) = gpuLateAllocParamCacheST;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2714, ASSERT_TYPE_ASSERT, "( 0 ) <= ( late ) && ( late ) <= ( 63U )", "late not in [0, D3D12XBOX_SHADER_MAX_WAVES_WITH_LATE_ALLOC_PARAMETER_CACHE_MAX]\n\t%i not in [%i, %i]", v10, 0i64, 63) )
      __debugbreak();
  }
  if ( gpuVSWaveLimitST > 0x1E0 )
  {
    LODWORD(v11) = 480;
    LODWORD(v10) = gpuVSWaveLimitST;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2715, ASSERT_TYPE_ASSERT, "( 0 ) <= ( vsWaveLimit ) && ( vsWaveLimit ) <= ( 480U )", "vsWaveLimit not in [0, D3D12XBOX_SHADER_MAX_WAVES_MAX]\n\t%i not in [%i, %i]", v10, 0i64, v11) )
      __debugbreak();
  }
  shaderLimitsDesc->VSMaxWaves = gpuVSWaveLimitST;
  shaderLimitsDesc->VSDisableFlags = D3D12XBOX_SHADER_UNIT_DISABLE_FLAG_CU_1;
  shaderLimitsDesc->DSDisableFlags = D3D12XBOX_SHADER_UNIT_DISABLE_FLAG_CU_1;
  shaderLimitsDesc->GSDisableFlags = D3D12XBOX_SHADER_UNIT_DISABLE_FLAG_CU_1;
  shaderLimitsDesc->MaxWavesWithLateAllocParameterCache = gpuLateAllocParamCacheST;
  shaderLimitsDesc->PSMaxWaves = gpuPSWaveLimitST;
}

/*
==============
Material_SetupTessParams
==============
*/
void Material_SetupTessParams(D3D12XBOX_TESSELLATION_PARAMETERS_DESC *shaderTessFactorsDesc, MaterialGeometryType materialType)
{
  int defaultPatchCount; 

  if ( !shaderTessFactorsDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material.cpp", 2744, ASSERT_TYPE_ASSERT, "(shaderTessFactorsDesc)", (const char *)&queryFormat, "shaderTessFactorsDesc") )
    __debugbreak();
  *(_QWORD *)&shaderTessFactorsDesc->PatchesPerThreadgroup = 0i64;
  shaderTessFactorsDesc->DsWaveThreshold = 0;
  if ( rg.patchCountAllowed )
  {
    if ( (materialType & 0x200000) != 0 )
    {
      shaderTessFactorsDesc->PatchesPerThreadgroup = rg.displacementPatchCount;
    }
    else
    {
      defaultPatchCount = rg.defaultPatchCount;
      if ( (materialType & 0x88000) == 557056 )
        defaultPatchCount = rg.subdivPatchCount;
      shaderTessFactorsDesc->PatchesPerThreadgroup = defaultPatchCount;
    }
  }
}

/*
==============
Material_TransientDirtySort
==============
*/
void Material_TransientDirtySort(void)
{
  int LogChannel; 

  if ( (DB_Zones_GetInUseFlags() & 0x600000) == 0 && !rgp.needSortMaterials )
  {
    LogChannel = DB_GetLogChannel();
    Com_Printf(LogChannel, "Enabling rgp.transientMaterialSort\n");
    rgp.transientMaterialSort = 1;
  }
}

/*
==============
Material_TransientDirtySortFinished
==============
*/
_BOOL8 Material_TransientDirtySortFinished()
{
  return rgp.transientMaterialSort == 0;
}

/*
==============
ValidMaterialCallback
==============
*/
void ValidMaterialCallback(XAssetHeader header, void *data)
{
  if ( (PhysicsLibrary *)*((_QWORD *)data + 1) == header.physicsLibrary )
    *(_BYTE *)data = 1;
}

