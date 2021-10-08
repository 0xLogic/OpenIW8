/*
==============
Material_GenerateFFValidationHash
==============
*/

unsigned __int64 __fastcall Material_GenerateFFValidationHash()
{
  return ?Material_GenerateFFValidationHash@@YA_KXZ();
}

/*
==============
Material_GetPackedAtlasDataSize
==============
*/

unsigned __int64 __fastcall Material_GetPackedAtlasDataSize(unsigned int framesCount)
{
  return ?Material_GetPackedAtlasDataSize@@YA_KI@Z(framesCount);
}

/*
==============
MaterialHandle_Compare
==============
*/

bool __fastcall MaterialHandle_Compare(Material *mtl0, Material *mtl1)
{
  return ?MaterialHandle_Compare@@YA_NPEAUMaterial@@0@Z(mtl0, mtl1);
}

/*
==============
Material_GetTextureLayerIndexFromID
==============
*/

unsigned __int8 __fastcall Material_GetTextureLayerIndexFromID(unsigned __int8 textureID)
{
  return ?Material_GetTextureLayerIndexFromID@@YAEE@Z(textureID);
}

/*
==============
Material_CompareBySortKeyAndTechnique
==============
*/

int __fastcall Material_CompareBySortKeyAndTechnique(const Material *mtl0, const Material *mtl1, const MaterialTechniqueSet **techSet, const MaterialTechnique **techniqueLit, const MaterialTechnique **techniqueEmissive)
{
  return ?Material_CompareBySortKeyAndTechnique@@YAHPEBUMaterial@@0QEAPEBUMaterialTechniqueSet@@QEAPEBUMaterialTechnique@@2@Z(mtl0, mtl1, techSet, techniqueLit, techniqueEmissive);
}

/*
==============
Material_SortCheck
==============
*/

void Material_SortCheck(void)
{
  ?Material_SortCheck@@YAXXZ();
}

/*
==============
Material_Compare
==============
*/

bool __fastcall Material_Compare(const unsigned int mtlIndex0, const unsigned int mtlIndex1)
{
  return ?Material_Compare@@YA_NII@Z(mtlIndex0, mtlIndex1);
}

/*
==============
Material_GetPackedAtlasFrame
==============
*/

const MaterialPackedAtlasFrame *__fastcall Material_GetPackedAtlasFrame(const void *packedAtlasData, unsigned int frameIndex)
{
  return ?Material_GetPackedAtlasFrame@@YAPEBUMaterialPackedAtlasFrame@@PEBXI@Z(packedAtlasData, frameIndex);
}

/*
==============
Material_Sort
==============
*/

void Material_Sort(void)
{
  ?Material_Sort@@YAXXZ();
}

/*
==============
Material_GetSortIndexHighwatermark
==============
*/

unsigned int __fastcall Material_GetSortIndexHighwatermark()
{
  return ?Material_GetSortIndexHighwatermark@@YAIXZ();
}

/*
==============
MaterialHandle_Compare
==============
*/
bool MaterialHandle_Compare(Material *mtl0, Material *mtl1)
{
  const Material *v3; 
  const Material *v4; 
  unsigned int MaterialIndex; 

  v3 = Material_FromHandle(mtl0);
  v4 = Material_FromHandle(mtl1);
  LODWORD(v3) = DB_GetMaterialIndex(v3);
  MaterialIndex = DB_GetMaterialIndex(v4);
  return Material_Compare((const unsigned int)v3, MaterialIndex);
}

/*
==============
Material_Compare
==============
*/
bool Material_Compare(const unsigned int mtlIndex0, const unsigned int mtlIndex1)
{
  const Material *MaterialAtIndex; 
  const Material *v5; 
  int v6; 
  int v7; 
  bool v8; 
  unsigned int PrepassType; 
  int v10; 
  BOOL IsOpaque; 
  unsigned int v12; 
  BOOL IsAlphaTest; 
  BOOL IsCard; 
  BOOL IsDoubleSided; 
  BOOL HasDisplacement; 
  MaterialTechnique *v17; 
  MaterialTechnique *v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  const char *name; 
  unsigned __int64 v24; 
  unsigned __int8 v25; 
  const char *v26; 
  signed __int64 v27; 
  unsigned __int8 v28; 
  MaterialTechnique *techniqueLit; 
  MaterialTechnique *technique1; 
  MaterialTechnique *techniqueEmissive; 
  MaterialTechnique *v33; 
  MaterialTechniqueSet *techSet; 
  _QWORD *v35; 

  MaterialAtIndex = DB_GetMaterialAtIndex(mtlIndex0);
  v5 = DB_GetMaterialAtIndex(mtlIndex1);
  if ( !MaterialAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4091, ASSERT_TYPE_ASSERT, "(mtl0)", (const char *)&queryFormat, "mtl0") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4092, ASSERT_TYPE_ASSERT, "(mtl1)", (const char *)&queryFormat, "mtl1") )
    __debugbreak();
  if ( mtlIndex0 >= 0x800 )
  {
    if ( mtlIndex1 >= 0x800 )
    {
      v7 = Material_CompareBySortKeyAndTechnique(MaterialAtIndex, v5, (const MaterialTechniqueSet **)&techSet, (const MaterialTechnique **)&techniqueLit, (const MaterialTechnique **)&techniqueEmissive);
      v8 = v7 < 0;
      if ( v7 )
      {
LABEL_24:
        LOBYTE(v6) = v8;
        return v6;
      }
      PrepassType = Material_GetPrepassType(MaterialAtIndex);
      v10 = PrepassType - Material_GetPrepassType(v5);
      if ( v10 )
      {
LABEL_50:
        LOBYTE(v6) = v10 < 0;
        return v6;
      }
      IsOpaque = Material_IsOpaque(MaterialAtIndex);
      v12 = Material_IsOpaque(v5) - IsOpaque;
      if ( v12 )
        return v12 >> 31;
      IsAlphaTest = Material_IsAlphaTest(MaterialAtIndex);
      v6 = Material_IsAlphaTest(v5) - IsAlphaTest;
      if ( v6 )
        goto LABEL_15;
      IsCard = Material_IsCard(MaterialAtIndex);
      v6 = Material_IsCard(v5) - IsCard;
      if ( v6 )
        goto LABEL_15;
      IsDoubleSided = Material_IsDoubleSided(MaterialAtIndex);
      v12 = Material_IsDoubleSided(v5) - IsDoubleSided;
      if ( v12 )
        return v12 >> 31;
      HasDisplacement = Material_HasDisplacement(MaterialAtIndex);
      v6 = Material_HasDisplacement(v5) - HasDisplacement;
      if ( v6 )
      {
LABEL_15:
        LOBYTE(v6) = v6 > 0;
        return v6;
      }
      v17 = techniqueLit;
      if ( !techniqueLit )
      {
        if ( technique1 )
        {
          LOBYTE(v6) = 0;
          return v6;
        }
        v17 = techniqueEmissive;
        if ( !techniqueEmissive )
        {
LABEL_31:
          v10 = 0;
          if ( techSet && v35 )
          {
            name = techSet->name;
            v24 = *v35 - (unsigned __int64)techSet->name;
            while ( 1 )
            {
              v25 = *name;
              if ( *name != name[v24] )
                break;
              ++name;
              if ( !v25 )
              {
                v12 = 0;
                goto LABEL_38;
              }
            }
            v12 = v25 < (unsigned int)name[v24] ? -1 : 1;
LABEL_38:
            if ( v12 )
              return v12 >> 31;
          }
          if ( MaterialAtIndex == v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4297, ASSERT_TYPE_ASSERT, "(mtl0 != mtl1)", "%s\n\tmtl0:%s", "mtl0 != mtl1", MaterialAtIndex->name) )
            __debugbreak();
          v26 = MaterialAtIndex->name;
          v27 = v5->name - MaterialAtIndex->name;
          while ( 1 )
          {
            v28 = *v26;
            if ( *v26 != v26[v27] )
              break;
            ++v26;
            if ( !v28 )
              goto LABEL_47;
          }
          v10 = v28 < (unsigned int)v26[v27] ? -1 : 1;
LABEL_47:
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4299, ASSERT_TYPE_ASSERT, "(comparison)", "%s\n\tmtl0:%s", "comparison", MaterialAtIndex->name) )
            __debugbreak();
          goto LABEL_50;
        }
        v18 = v33;
        v22 = Material_CompareVsPsShaderContextSharing(techniqueEmissive, v33);
        v8 = v22 < 0;
        if ( v22 )
          goto LABEL_24;
        v6 = Material_ComparePixelShader(v17, v18);
        if ( v6 )
        {
          LOBYTE(v6) = v6 < 0;
          return v6;
        }
LABEL_23:
        v21 = Material_CompareVertexShader(v17, v18);
        v8 = v21 < 0;
        if ( v21 )
          goto LABEL_24;
        goto LABEL_31;
      }
      v18 = technique1;
      if ( technique1 )
      {
        v19 = Material_CompareVsPsShaderContextSharing(techniqueLit, technique1);
        v8 = v19 < 0;
        if ( v19 )
          goto LABEL_24;
        v20 = Material_ComparePixelShader(v17, v18);
        v8 = v20 < 0;
        if ( v20 )
          goto LABEL_24;
        goto LABEL_23;
      }
    }
    LOBYTE(v6) = 1;
    return v6;
  }
  LOBYTE(v6) = mtlIndex0 >= mtlIndex1;
  return v6;
}

/*
==============
Material_CompareBySortKeyAndTechnique
==============
*/
__int64 Material_CompareBySortKeyAndTechnique(const Material *mtl0, const Material *mtl1, const MaterialTechniqueSet **techSet, const MaterialTechnique **techniqueLit, const MaterialTechnique **techniqueEmissive)
{
  int v5; 
  unsigned int v10; 
  const MaterialTechniqueSet *TechniqueSet; 
  const MaterialTechniqueSet *v13; 
  const MaterialTechnique *TechSetTechnique; 
  BOOL v15; 
  BOOL v16; 
  const MaterialTechniqueSet *v17; 
  const MaterialTechniqueSet *v18; 
  const MaterialTechnique *v19; 
  bool v20; 
  unsigned int v21; 

  v5 = 0;
  techSet[1] = NULL;
  *techSet = NULL;
  techniqueLit[1] = NULL;
  *techniqueLit = NULL;
  techniqueEmissive[1] = NULL;
  *techniqueEmissive = NULL;
  v10 = mtl0->sortKey - mtl1->sortKey;
  if ( v10 )
    return v10;
  *techSet = Material_GetTechniqueSet(mtl0);
  techSet[1] = Material_GetTechniqueSet(mtl1);
  if ( !*techSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3510, ASSERT_TYPE_ASSERT, "(techSet[0])", "%s\n\tmtl0:%s", "techSet[0]", mtl0->name) )
    __debugbreak();
  if ( !techSet[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3511, ASSERT_TYPE_ASSERT, "(techSet[1])", "%s\n\tmtl1:%s", "techSet[1]", mtl1->name) )
    __debugbreak();
  TechniqueSet = Material_GetTechniqueSet(mtl0);
  if ( !TechniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  *techniqueLit = Material_GetTechSetTechnique(TechniqueSet, TECHNIQUE_LIT_FORWARDPLUS_BITMASK);
  v13 = Material_GetTechniqueSet(mtl1);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  TechSetTechnique = Material_GetTechSetTechnique(v13, TECHNIQUE_LIT_FORWARDPLUS_BITMASK);
  v20 = *techniqueLit == NULL;
  techniqueLit[1] = TechSetTechnique;
  v15 = !v20;
  v16 = TechSetTechnique != NULL;
  v17 = Material_GetTechniqueSet(mtl0);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  *techniqueEmissive = Material_GetTechSetTechnique(v17, TECHNIQUE_EMISSIVE);
  v18 = Material_GetTechniqueSet(mtl1);
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  v19 = Material_GetTechSetTechnique(v18, TECHNIQUE_EMISSIVE);
  v20 = *techniqueEmissive == NULL;
  techniqueEmissive[1] = v19;
  v21 = v16 - v15;
  if ( v21 )
    return v21;
  LOBYTE(v5) = v19 != NULL;
  return v5 - (unsigned int)!v20;
}

/*
==============
Material_ComparePixelShader
==============
*/
__int64 Material_ComparePixelShader(const MaterialTechnique *const technique0, const MaterialTechnique *const technique1)
{
  unsigned __int8 pipelineStateInputLayoutCount; 
  unsigned int v5; 
  unsigned __int8 v6; 
  MaterialSerializedShader *v7; 
  MaterialSerializedShader *v8; 
  MaterialPipelineState *pipelineStates; 
  __int64 v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 
  MaterialPipelineState *v13; 
  __int64 v14; 
  unsigned int microCodeCrc; 
  unsigned int v17; 
  unsigned int programSize; 

  if ( !technique0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4010, ASSERT_TYPE_ASSERT, "(technique0)", (const char *)&queryFormat, "technique0") )
    __debugbreak();
  if ( !technique1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4011, ASSERT_TYPE_ASSERT, "(technique1)", (const char *)&queryFormat, "technique1") )
    __debugbreak();
  pipelineStateInputLayoutCount = technique0->pipelineStateInputLayoutCount;
  v5 = 0;
  v6 = 0;
  v7 = NULL;
  v8 = NULL;
  if ( pipelineStateInputLayoutCount )
  {
    while ( 1 )
    {
      v10 = v6;
      pipelineStates = technique0->pipelineStates;
      if ( pipelineStates[v10].serializedShaders[0] )
        break;
      if ( ++v6 >= pipelineStateInputLayoutCount )
        goto LABEL_12;
    }
    v7 = pipelineStates[v10].serializedShaders[0];
  }
LABEL_12:
  v11 = technique1->pipelineStateInputLayoutCount;
  v12 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v14 = v12;
      v13 = technique1->pipelineStates;
      if ( v13[v14].serializedShaders[0] )
        break;
      if ( ++v12 >= v11 )
        goto LABEL_17;
    }
    v8 = v13[v14].serializedShaders[0];
  }
LABEL_17:
  if ( !v7 )
    return (unsigned int)-(v8 != NULL);
  if ( !v8 )
    return 1i64;
  microCodeCrc = v8->microCodeCrc;
  v17 = v7->microCodeCrc;
  if ( v17 != microCodeCrc )
  {
    programSize = v7->programSize;
    if ( programSize < v8->programSize )
      return 0xFFFFFFFFi64;
    if ( programSize > v8->programSize )
      return 1i64;
    if ( v17 < microCodeCrc )
      return 0xFFFFFFFFi64;
    LOBYTE(v5) = v17 > microCodeCrc;
  }
  return v5;
}

/*
==============
Material_CompareVertexShader
==============
*/
__int64 Material_CompareVertexShader(const MaterialTechnique *const technique0, const MaterialTechnique *const technique1)
{
  const MaterialSerializedShader *PassVertexShader; 
  const MaterialSerializedShader *v5; 
  unsigned int microCodeCrc; 
  unsigned int v7; 
  unsigned int programSize; 

  if ( !technique0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3876, ASSERT_TYPE_ASSERT, "(technique0)", (const char *)&queryFormat, "technique0") )
    __debugbreak();
  if ( !technique1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3877, ASSERT_TYPE_ASSERT, "(technique1)", (const char *)&queryFormat, "technique1") )
    __debugbreak();
  PassVertexShader = Material_GetPassVertexShader(technique0);
  v5 = Material_GetPassVertexShader(technique1);
  if ( !PassVertexShader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3882, ASSERT_TYPE_ASSERT, "(shader0)", (const char *)&queryFormat, "shader0") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3883, ASSERT_TYPE_ASSERT, "(shader1)", (const char *)&queryFormat, "shader1") )
    __debugbreak();
  microCodeCrc = v5->microCodeCrc;
  v7 = PassVertexShader->microCodeCrc;
  if ( v7 == microCodeCrc )
    return 0i64;
  programSize = PassVertexShader->programSize;
  if ( programSize < v5->programSize )
    return 0xFFFFFFFFi64;
  if ( programSize > v5->programSize )
    return 1i64;
  if ( v7 >= microCodeCrc )
    return v7 > microCodeCrc;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
Material_CompareVsPsShaderContextSharing
==============
*/
__int64 Material_CompareVsPsShaderContextSharing(const MaterialTechnique *const technique0, const MaterialTechnique *const technique1)
{
  unsigned __int8 pipelineStateInputLayoutCount; 
  unsigned int v5; 
  unsigned __int64 v6; 
  int v7; 
  MaterialPipelineState *pipelineStates; 
  __int64 v9; 
  __int64 v10; 
  ID3D12PipelineState **p_pso; 
  unsigned __int8 v12; 
  int v13; 
  MaterialPipelineState *v14; 
  __int64 v15; 
  __int64 v16; 
  ID3D12PipelineState **v17; 
  bool v18; 
  bool v19; 
  unsigned __int64 v21; 

  if ( !technique0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3703, ASSERT_TYPE_ASSERT, "(technique0)", (const char *)&queryFormat, "technique0") )
    __debugbreak();
  if ( !technique1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3704, ASSERT_TYPE_ASSERT, "(technique1)", (const char *)&queryFormat, "technique1") )
    __debugbreak();
  pipelineStateInputLayoutCount = technique0->pipelineStateInputLayoutCount;
  v5 = 0;
  LODWORD(v6) = 0;
  v7 = 0;
  if ( pipelineStateInputLayoutCount )
  {
    pipelineStates = technique0->pipelineStates;
    v9 = 0i64;
    v10 = pipelineStateInputLayoutCount;
    p_pso = &pipelineStates->pso;
    while ( !*p_pso )
    {
      ++v7;
      ++v9;
      p_pso += 13;
      if ( v9 >= v10 )
        goto LABEL_13;
    }
    v6 = HIDWORD(pipelineStates[v7].pso->m_Packet.Oword[0].m128i_i64[0]);
  }
LABEL_13:
  v12 = technique1->pipelineStateInputLayoutCount;
  v13 = 0;
  if ( !v12 )
  {
LABEL_17:
    v18 = 0;
    v19 = (_DWORD)v6 == 0;
LABEL_18:
    LOBYTE(v5) = !v18 && !v19;
    return v5;
  }
  v14 = technique1->pipelineStates;
  v15 = 0i64;
  v16 = v12;
  v17 = &v14->pso;
  while ( !*v17 )
  {
    ++v13;
    ++v15;
    v17 += 13;
    if ( v15 >= v16 )
      goto LABEL_17;
  }
  v21 = HIDWORD(v14[v13].pso->m_Packet.Oword[0].m128i_i64[0]);
  v18 = (unsigned int)v6 < (unsigned int)v21;
  v19 = (_DWORD)v6 == (_DWORD)v21;
  if ( (unsigned int)v6 >= (unsigned int)v21 )
    goto LABEL_18;
  return 0xFFFFFFFFi64;
}

/*
==============
Material_GenerateFFValidationHash
==============
*/
unsigned __int64 Material_GenerateFFValidationHash()
{
  unsigned int v0; 
  unsigned __int64 v1; 
  signed int i; 
  const char *CodeConstantName; 
  unsigned __int64 v4; 
  const char *CodeTextureName; 
  unsigned __int64 v6; 
  unsigned __int64 result; 

  v0 = 0;
  v1 = 0i64;
  for ( i = 0; i < 174; ++i )
  {
    CodeConstantName = R_GetCodeConstantName(i);
    v4 = -1i64;
    do
      ++v4;
    while ( CodeConstantName[v4] );
    v1 = j_CoD_XXH64(CodeConstantName, v4, v1);
  }
  do
  {
    CodeTextureName = R_GetCodeTextureName(v0);
    v6 = -1i64;
    do
      ++v6;
    while ( CodeTextureName[v6] );
    result = j_CoD_XXH64(CodeTextureName, v6, v1);
    ++v0;
    v1 = result;
  }
  while ( v0 < 0x56 );
  return result;
}

/*
==============
Material_GetPackedAtlasDataSize
==============
*/
__int64 Material_GetPackedAtlasDataSize(unsigned int framesCount)
{
  return 24i64 * framesCount + 12;
}

/*
==============
Material_GetPackedAtlasFrame
==============
*/
const MaterialPackedAtlasFrame *Material_GetPackedAtlasFrame(const void *packedAtlasData, unsigned int frameIndex)
{
  __int64 v3; 
  int v6; 

  v3 = frameIndex;
  if ( frameIndex >= *(unsigned __int16 *)packedAtlasData )
  {
    v6 = *(unsigned __int16 *)packedAtlasData;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4795, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( packedAtlasHeader->framesCount )", "frameIndex doesn't index packedAtlasHeader->framesCount\n\t%i not in [0, %i)", frameIndex, v6) )
      __debugbreak();
  }
  return (const MaterialPackedAtlasFrame *)((char *)packedAtlasData + 24 * v3 + 12);
}

/*
==============
Material_GetPassVertexShader
==============
*/
MaterialSerializedShader *Material_GetPassVertexShader(const MaterialTechnique *const materialTechnique)
{
  unsigned __int8 pipelineStateInputLayoutCount; 
  unsigned __int8 v3; 
  MaterialSerializedShader *result; 

  if ( !materialTechnique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3310, ASSERT_TYPE_ASSERT, "(materialTechnique)", (const char *)&queryFormat, "materialTechnique") )
    __debugbreak();
  pipelineStateInputLayoutCount = materialTechnique->pipelineStateInputLayoutCount;
  v3 = 0;
  if ( pipelineStateInputLayoutCount )
  {
    while ( 1 )
    {
      result = materialTechnique->pipelineStates[v3].serializedShaders[1];
      if ( result )
        break;
      if ( ++v3 >= pipelineStateInputLayoutCount )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 3317, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Material technique with no vertex shaders") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
Material_GetSortIndexHighwatermark
==============
*/
__int64 Material_GetSortIndexHighwatermark()
{
  return s_sortIndexHighwatermark;
}

/*
==============
Material_GetTextureLayerIndexFromID
==============
*/
__int64 Material_GetTextureLayerIndexFromID(unsigned __int8 textureID)
{
  int v3; 
  int v4; 

  if ( textureID >= 0xA6u )
  {
    v4 = 166;
    v3 = textureID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4990, ASSERT_TYPE_ASSERT, "(unsigned)( textureID ) < (unsigned)( ( sizeof( *array_counter( s_materialTextureLayerIndex ) ) + 0 ) )", "textureID doesn't index ARRAY_COUNT( s_materialTextureLayerIndex )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_materialTextureLayerIndex[textureID];
}

/*
==============
Material_SetSortKeyRangesCheck
==============
*/
char Material_SetSortKeyRangesCheck()
{
  unsigned int materialCount; 
  unsigned __int16 *mtlSortIndexBeginKey; 
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  int sortKey; 
  __int64 v7; 
  __int64 v8; 

  materialCount = rgp.materialCount;
  mtlSortIndexBeginKey = rgp.mtlSortIndexBeginKey;
  v2 = 0i64;
  LODWORD(v3) = 0;
  do
  {
    if ( (unsigned int)v2 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v2, "unsigned", (unsigned int)v2) )
        __debugbreak();
      materialCount = rgp.materialCount;
    }
    if ( *mtlSortIndexBeginKey != (_WORD)v2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4632, ASSERT_TYPE_ASSERT, "(rgp.mtlSortIndexBeginKey[sortKey] == truncate_cast< ushort >( mtlSortIndex ))", (const char *)&queryFormat, "rgp.mtlSortIndexBeginKey[sortKey] == truncate_cast< ushort >( mtlSortIndex )") )
        __debugbreak();
      materialCount = rgp.materialCount;
    }
    v4 = (unsigned int)v2 < materialCount;
    if ( (_DWORD)v2 != materialCount )
    {
      while ( 1 )
      {
        if ( !v4 )
        {
          LODWORD(v8) = materialCount;
          LODWORD(v7) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        sortKey = DB_GetMaterialAtIndex(rgp.sortedMaterials[v2])->sortKey;
        materialCount = rgp.materialCount;
        if ( sortKey != (_DWORD)v3 )
          break;
        v2 = (unsigned int)(v2 + 1);
        v4 = (unsigned int)v2 < rgp.materialCount;
        if ( (_DWORD)v2 == rgp.materialCount )
          goto LABEL_25;
      }
      if ( (_DWORD)v2 != rgp.materialCount )
      {
        if ( (unsigned int)v2 >= rgp.materialCount )
        {
          LODWORD(v8) = rgp.materialCount;
          LODWORD(v7) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v2])->sortKey <= (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4635, ASSERT_TYPE_ASSERT, "(mtlSortIndex == rgp.materialCount || R_GetSortedMaterial( mtlSortIndex )->sortKey > sortKey)", (const char *)&queryFormat, "mtlSortIndex == rgp.materialCount || R_GetSortedMaterial( mtlSortIndex )->sortKey > sortKey") )
          __debugbreak();
        materialCount = rgp.materialCount;
      }
    }
LABEL_25:
    v3 = (unsigned int)(v3 + 1);
    ++mtlSortIndexBeginKey;
  }
  while ( (unsigned int)v3 < 0x3F );
  if ( rgp.mtlSortIndexBeginKey[v3] != 0xB400 )
  {
    LOBYTE(materialCount) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4638, ASSERT_TYPE_ASSERT, "(rgp.mtlSortIndexBeginKey[sortKey] == ((( 43 * 1024 ) + 1024) + 1024))", (const char *)&queryFormat, "rgp.mtlSortIndexBeginKey[sortKey] == MAX_MATERIALS");
    if ( (_BYTE)materialCount )
      __debugbreak();
  }
  return materialCount;
}

/*
==============
Material_Sort
==============
*/
void Material_Sort(void)
{
  unsigned int v0; 
  __int64 v1; 
  unsigned __int16 *mtlSortIndexBeginKey; 
  unsigned int materialCount; 
  bool v4; 
  int sortKey; 
  unsigned int v6; 
  unsigned __int16 *physicalMaterialsForSort; 
  Material *MaterialAtIndex; 
  unsigned int v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  __int64 v13; 

  rgp.materialCount = 0;
  DB_EnumSafeXAssets(ASSET_TYPE_MATERIAL, Material_Sort_Callback, NULL);
  Material_SortInternal(rgp.sortedMaterials, g_drawConsts.sortedMaterialKeys, rgp.materialCount);
  v0 = 0;
  LODWORD(v1) = 0;
  mtlSortIndexBeginKey = rgp.mtlSortIndexBeginKey;
  do
  {
    if ( v0 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v0, "unsigned", v0) )
      __debugbreak();
    *mtlSortIndexBeginKey = v0;
    materialCount = rgp.materialCount;
    v4 = v0 < rgp.materialCount;
    if ( v0 != rgp.materialCount )
    {
      while ( 1 )
      {
        if ( !v4 )
        {
          LODWORD(v13) = materialCount;
          LODWORD(v12) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        sortKey = DB_GetMaterialAtIndex(rgp.sortedMaterials[v0])->sortKey;
        materialCount = rgp.materialCount;
        if ( sortKey != (_DWORD)v1 )
          break;
        v4 = ++v0 < rgp.materialCount;
        if ( v0 == rgp.materialCount )
          goto LABEL_19;
      }
      if ( v0 != rgp.materialCount )
      {
        if ( v0 >= rgp.materialCount )
        {
          LODWORD(v13) = rgp.materialCount;
          LODWORD(v12) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v0])->sortKey <= (unsigned int)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4654, ASSERT_TYPE_ASSERT, "(mtlSortIndex == rgp.materialCount || R_GetSortedMaterial( mtlSortIndex )->sortKey > sortKey)", (const char *)&queryFormat, "mtlSortIndex == rgp.materialCount || R_GetSortedMaterial( mtlSortIndex )->sortKey > sortKey") )
          __debugbreak();
      }
    }
LABEL_19:
    v1 = (unsigned int)(v1 + 1);
    ++mtlSortIndexBeginKey;
  }
  while ( (unsigned int)v1 < 0x3F );
  v6 = 0;
  physicalMaterialsForSort = rgp.physicalMaterialsForSort;
  rgp.mtlSortIndexBeginKey[v1] = -19456;
  do
  {
    MaterialAtIndex = DB_GetMaterialAtIndex(v6);
    if ( MaterialAtIndex )
    {
      LOWORD(MaterialAtIndex->drawSurf.packed.p1) = rgp.materialCount;
      physicalMaterialsForSort[2048] = rgp.materialCount;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4723, ASSERT_TYPE_ASSERT, "(physicalMaterial)", (const char *)&queryFormat, "physicalMaterial") )
    {
      __debugbreak();
    }
    v9 = rgp.materialCount;
    if ( rgp.materialCount >= 0xB400 )
    {
      LODWORD(v13) = 46080;
      LODWORD(v12) = rgp.materialCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4732, ASSERT_TYPE_ASSERT, "(unsigned)( rgp.materialCount ) < (unsigned)( ( sizeof( *array_counter( rgp.sortedMaterials ) ) + 0 ) )", "rgp.materialCount doesn't index ARRAY_COUNT( rgp.sortedMaterials )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
      v9 = rgp.materialCount;
    }
    v10 = v9;
    ++v6;
    v11 = *physicalMaterialsForSort++;
    rgp.sortedMaterials[v10] = v11;
    ++rgp.materialCount;
  }
  while ( v6 < 0x800 );
}

/*
==============
Material_SortCheck
==============
*/
void Material_SortCheck(void)
{
  Material_SortCheckInternal(rgp.sortedMaterials, g_drawConsts.sortedMaterialKeys, rgp.materialCount);
  Material_SetSortKeyRangesCheck();
}

/*
==============
Material_SortCheckInternal
==============
*/
void Material_SortCheckInternal(unsigned __int16 *sortedMaterials, unsigned __int8 *sortedMaterialKeys, unsigned int materialCount)
{
  unsigned int v3; 
  __int64 v4; 
  unsigned __int8 *v5; 
  unsigned __int16 *v6; 
  unsigned __int16 *v7; 
  unsigned __int16 *v8; 
  const char *baseName; 
  unsigned __int16 *v10; 
  Material *MaterialAtIndex; 
  Material *v12; 
  unsigned int v13; 
  unsigned __int16 *v14; 
  Material *v15; 
  const char **p_name; 
  __int64 v17; 
  Material *v18; 
  unsigned __int8 sortKey; 
  unsigned __int8 v20; 
  MaterialTechniqueSet *techniqueSet; 
  __int64 v22; 
  unsigned int v23; 
  XAssetHeader v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 

  v3 = 0;
  v4 = materialCount - 2048;
  v5 = sortedMaterialKeys;
  v6 = sortedMaterials;
  v7 = &sortedMaterials[v4];
  if ( sortedMaterials != v7 )
  {
    v8 = sortedMaterials + 1;
    if ( sortedMaterials + 1 != v7 )
    {
      while ( !Material_Compare(*v8, *(v8 - 1)) )
      {
        if ( ++v8 == v7 )
          goto LABEL_24;
      }
      if ( v8 != v7 )
      {
        if ( rgp.world )
          baseName = rgp.world->baseName;
        else
          baseName = "none";
        Com_Printf(8, "Sort %d materials for game world %s. New/Removed/Patched Material count = %d/%d/%d\n", (unsigned int)v4, baseName, rgp.addedMaterialCount, rgp.killedMaterialCount, rgp.patchedMaterialCount);
        if ( (_DWORD)v4 != 1 )
        {
          v10 = v6;
          do
          {
            MaterialAtIndex = DB_GetMaterialAtIndex(v10[1]);
            v12 = DB_GetMaterialAtIndex(*v10);
            if ( !Material_Compare(*v10, v10[1]) )
            {
              Com_Printf(8, "Material Sort error!\n\tsortedIndex %d needSortMaterials: %d\n", v3, (unsigned int)rgp.needSortMaterials);
              v13 = 0;
              if ( (_DWORD)v4 )
              {
                v14 = sortedMaterials;
                do
                {
                  v15 = DB_GetMaterialAtIndex(*v14);
                  if ( v15 )
                  {
                    p_name = &v15->techniqueSet->name;
                    if ( p_name )
                    {
                      LODWORD(v26) = v15->sortKey;
                      Com_Printf(8, "MtlIndex %05d, %s, techset %s, key %d\n", v13, v15->name, *p_name, v26);
                    }
                  }
                  ++v13;
                  ++v14;
                }
                while ( v13 < (unsigned int)v4 );
              }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4548, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Material %s with techset %s is before %s with %sin the sorted list, but it should be after.", v12->name, v12->techniqueSet->name, MaterialAtIndex->name, MaterialAtIndex->techniqueSet->name) )
                __debugbreak();
            }
            ++v3;
            ++v10;
          }
          while ( v3 < (int)v4 - 1 );
          v6 = sortedMaterials;
          v3 = 0;
        }
        v5 = sortedMaterialKeys;
      }
    }
  }
LABEL_24:
  if ( (_DWORD)v4 )
  {
    v17 = 0i64;
    while ( 1 )
    {
      v18 = DB_GetMaterialAtIndex(*v6);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4561, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
        __debugbreak();
      sortKey = v18->sortKey;
      if ( sortKey >= 0x40u )
      {
        LODWORD(v27) = 64;
        LODWORD(v26) = sortKey;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf_inline.h", 23, ASSERT_TYPE_ASSERT, "(unsigned)( material->sortKey ) < (unsigned)( 1 << 6 )", "material->sortKey doesn't index 1 << MTL_SORT_PRIMARY_SORT_KEY_BITS\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v20 = v18->sortKey;
      if ( ((v18->drawSurf.packed.p1 >> 27) & 0x3F) != v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4566, ASSERT_TYPE_ASSERT, "(drawSurf->fields.primarySortKey == sortKey)", (const char *)&queryFormat, "drawSurf->fields.primarySortKey == sortKey") )
        __debugbreak();
      techniqueSet = v18->techniqueSet;
      if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 546, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
        __debugbreak();
      if ( (techniqueSet->techniqueMask.mask[0] & 1) != 0 )
        v22 = (techniqueSet->flags & 0x1000) == 0;
      else
        v22 = 2i64;
      if ( ((LODWORD(v18->drawSurf.packed.p1) >> 19) & 3) != v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4567, ASSERT_TYPE_ASSERT, "(drawSurf->fields.prepass == Material_GetPrepassType( material ))", (const char *)&queryFormat, "drawSurf->fields.prepass == Material_GetPrepassType( material )") )
        __debugbreak();
      if ( (((v18->drawSurf.packed.p0 >> 60) ^ (unsigned __int8)~(v18->surfaceFlags >> 18)) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4568, ASSERT_TYPE_ASSERT, "(drawSurf->fields.shadowcaster == ((material->surfaceFlags & (1 << 18)) ? 0 : 1))", (const char *)&queryFormat, "drawSurf->fields.shadowcaster == ((material->surfaceFlags & SURF_NOCASTSHADOW) ? 0 : 1)") )
        __debugbreak();
      v23 = s_sortIndexHighwatermark;
      if ( v3 > s_sortIndexHighwatermark )
        v23 = v3;
      s_sortIndexHighwatermark = v23;
      if ( v3 >= 0xAFFF )
        Sys_Error((const ObfuscateErrorText)&stru_14441BFF8, 45055i64);
      if ( LOWORD(v18->drawSurf.packed.p1) == v17 )
        goto LABEL_57;
      v24.physicsLibrary = DB_GetXAssetMasterDefaultHeader(ASSET_TYPE_MATERIAL).physicsLibrary;
      v25 = (unsigned __int16)*((_QWORD *)&v18->drawSurf.fields + 1);
      if ( v25 != LOWORD(v24.physicsLibrary[2].name) )
        break;
      Com_PrintWarning(16, "Testing sorted material %s, it is stubbed, so it will draw incorrectly.\n", v18->name);
LABEL_60:
      ++v3;
      ++v17;
      ++v6;
      ++v5;
      if ( v3 >= (unsigned int)v4 )
        return;
    }
    if ( v25 != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4593, ASSERT_TYPE_ASSERT, "(drawSurf->fields.materialSortedIndex == sortedIndex)", (const char *)&queryFormat, "drawSurf->fields.materialSortedIndex == sortedIndex") )
      __debugbreak();
LABEL_57:
    if ( *v5 != v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4600, ASSERT_TYPE_ASSERT, "(sortedMaterialKeys[sortedIndex] == truncate_cast< byte >( sortKey ))", (const char *)&queryFormat, "sortedMaterialKeys[sortedIndex] == truncate_cast< byte >( sortKey )") )
      __debugbreak();
    goto LABEL_60;
  }
}

/*
==============
Material_SortInternal
==============
*/
void Material_SortInternal(unsigned __int16 *sortedMaterials, unsigned __int8 *sortedMaterialKeys, unsigned int materialCount)
{
  __int64 v4; 
  const char *baseName; 
  unsigned int i; 
  Material *MaterialAtIndex; 
  char PrepassType; 
  bool HasDisplacement; 
  unsigned __int64 v11; 
  unsigned __int8 sortKey; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v4 = materialCount;
  if ( rgp.world )
    baseName = rgp.world->baseName;
  else
    baseName = "none";
  Com_Printf(8, "Sort %d materials for game world %s. New/Removed/Patched Material count = %d/%d/%d\n", materialCount, baseName, rgp.addedMaterialCount, rgp.killedMaterialCount, rgp.patchedMaterialCount);
  std::_Sort_unchecked<unsigned short *,bool (*)(unsigned int,unsigned int)>(sortedMaterials, &sortedMaterials[v4], v4, (bool (__fastcall *)(unsigned int, unsigned int))Material_Compare);
  for ( i = 0; i < (unsigned int)v4; ++sortedMaterialKeys )
  {
    MaterialAtIndex = DB_GetMaterialAtIndex(*sortedMaterials);
    MaterialAtIndex->drawSurf.packed.p1 = 0i64;
    MaterialAtIndex->drawSurf.packed.p0 = 0i64;
    PrepassType = Material_GetPrepassType(MaterialAtIndex);
    MaterialAtIndex->drawSurf.packed.p1 &= 0xFFFFFFFFFFE7FFFFui64;
    MaterialAtIndex->drawSurf.packed.p1 |= (unsigned __int64)(PrepassType & 3) << 19;
    HasDisplacement = Material_HasDisplacement(MaterialAtIndex);
    v11 = MaterialAtIndex->drawSurf.packed.p1 & 0xFFFFFFFFFFF8FFFFui64;
    if ( HasDisplacement )
      v11 |= 0x30000ui64;
    MaterialAtIndex->drawSurf.packed.p1 = v11;
    MaterialAtIndex->drawSurf.packed.p0 ^= (MaterialAtIndex->drawSurf.packed.p0 ^ ((__int64)~(MaterialAtIndex->surfaceFlags >> 18) << 60)) & 0x1000000000000000i64;
    MaterialAtIndex->drawSurf.packed.p1 = v11 & 0xFFFFFFFFFFBFFFFFui64 | ((unsigned __int64)((MaterialAtIndex->surfaceFlags >> 27) & 1) << 22);
    sortKey = MaterialAtIndex->sortKey;
    if ( sortKey >= 0x40u )
    {
      LODWORD(v16) = 64;
      LODWORD(v15) = sortKey;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf_inline.h", 23, ASSERT_TYPE_ASSERT, "(unsigned)( material->sortKey ) < (unsigned)( 1 << 6 )", "material->sortKey doesn't index 1 << MTL_SORT_PRIMARY_SORT_KEY_BITS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v13 = MaterialAtIndex->sortKey;
    if ( v13 >= 0x40 )
    {
      LODWORD(v18) = 64;
      LODWORD(v17) = MaterialAtIndex->sortKey;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_load_obj.cpp", 4390, ASSERT_TYPE_ASSERT, "( sortKey ) < ( ( 1 << 6 ) )", "%s < %s\n\t%i, %i", "sortKey", "( 1 << MTL_SORT_PRIMARY_SORT_KEY_BITS )", v17, v18) )
        __debugbreak();
    }
    MaterialAtIndex->drawSurf.packed.p1 &= 0xFFFFFFFE07FFFFFFui64;
    MaterialAtIndex->drawSurf.packed.p1 |= (unsigned __int64)(v13 & 0x3F) << 27;
    v14 = s_sortIndexHighwatermark;
    if ( i > s_sortIndexHighwatermark )
      v14 = i;
    s_sortIndexHighwatermark = v14;
    if ( i >= 0xAFFF )
      Sys_Error((const ObfuscateErrorText)&stru_14441BFF8, 45055i64);
    LOWORD(MaterialAtIndex->drawSurf.packed.p1) = i;
    ++sortedMaterials;
    *sortedMaterialKeys = v13;
    ++i;
  }
}

/*
==============
Material_Sort_Callback
==============
*/
void Material_Sort_Callback(XAssetHeader header, void *data)
{
  rgp.sortedMaterials[rgp.materialCount++] = DB_GetMaterialIndex(header.material);
}

