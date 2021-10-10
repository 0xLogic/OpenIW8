/*
==============
R_CodeSurfIndexStart
==============
*/

r_double_index_t *__fastcall R_CodeSurfIndexStart(GfxCodeSurfGlob *codeSurfGlob)
{
  return ?R_CodeSurfIndexStart@@YAPEAUr_double_index_t@@PEAUGfxCodeSurfGlob@@@Z(codeSurfGlob);
}

/*
==============
R_AddCodeSurfPackedAtlasData
==============
*/

int __fastcall R_AddCodeSurfPackedAtlasData(GfxCodeSurfGlob *codeSurfGlob, const GfxPackedAtlasData *packedAtlasData, unsigned int packedAtlasDataCount)
{
  return ?R_AddCodeSurfPackedAtlasData@@YAHPEAUGfxCodeSurfGlob@@PEBUGfxPackedAtlasData@@I@Z(codeSurfGlob, packedAtlasData, packedAtlasDataCount);
}

/*
==============
R_GetCodeSurfIndices
==============
*/

r_double_index_t *__fastcall R_GetCodeSurfIndices(const GfxCodeSurfGlob *codeSurfGlob)
{
  return ?R_GetCodeSurfIndices@@YAPEAUr_double_index_t@@PEBUGfxCodeSurfGlob@@@Z(codeSurfGlob);
}

/*
==============
R_AddCodeSurfEmitterData
==============
*/

bool __fastcall R_AddCodeSurfEmitterData(GfxCodeSurfGlob *codeSurfGlob, const GfxSpriteEmitter *data, unsigned int *outEmitterDataIndex)
{
  return ?R_AddCodeSurfEmitterData@@YA_NPEAUGfxCodeSurfGlob@@PEBUGfxSpriteEmitter@@AEAI@Z(codeSurfGlob, data, outEmitterDataIndex);
}

/*
==============
R_EmitCodeSurfs
==============
*/

void __fastcall R_EmitCodeSurfs(GfxCodeSurfList *codeSurfList, unsigned int codeSurfLimit, GfxCodeSurfListType surfList)
{
  ?R_EmitCodeSurfs@@YAXPEAUGfxCodeSurfList@@IW4GfxCodeSurfListType@@@Z(codeSurfList, codeSurfLimit, surfList);
}

/*
==============
R_ReserveVertCodeSurfBuffers
==============
*/

bool __fastcall R_ReserveVertCodeSurfBuffers(GfxCodeSurfBuffers *outBuffers, GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, unsigned int indexCount, unsigned int argCount)
{
  return ?R_ReserveVertCodeSurfBuffers@@YA_NPEAUGfxCodeSurfBuffers@@PEAUGfxCodeSurfGlob@@III@Z(outBuffers, codeSurfGlob, vertCount, indexCount, argCount);
}

/*
==============
R_AddCode3DQuadVertsSurf
==============
*/

void __fastcall R_AddCode3DQuadVertsSurf(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBase, unsigned __int16 vertIndexOffset, r_double_index_t *indices, const vec3_t (*verts)[4], float s0, float t0, float s1, float t1, const vec4_t *color, Material *material, unsigned __int8 flags, unsigned int sortOrder, const GfxMatrix *worldMatrix, const GfxMatrix *invViewMatrix, unsigned int argOffset, unsigned int argCount)
{
  ?R_AddCode3DQuadVertsSurf@@YAXPEAUGfxCodeSurfGlob@@IGPEAUr_double_index_t@@AEAY03$$CBTvec3_t@@MMMMAEBTvec4_t@@PEAUMaterial@@EIPEBUGfxMatrix@@5II@Z(codeSurfGlob, vertIndexBase, vertIndexOffset, indices, verts, s0, t0, s1, t1, color, material, flags, sortOrder, worldMatrix, invViewMatrix, argOffset, argCount);
}

/*
==============
R_ReserveCodeSurfVerts
==============
*/

bool __fastcall R_ReserveCodeSurfVerts(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, unsigned int *outVertIndexBase, unsigned __int16 *outVertIndexOffset)
{
  return ?R_ReserveCodeSurfVerts@@YA_NPEAUGfxCodeSurfGlob@@IPEAIPEAG@Z(codeSurfGlob, vertCount, outVertIndexBase, outVertIndexOffset);
}

/*
==============
R_ReserveCodeSurfIndices
==============
*/

bool __fastcall R_ReserveCodeSurfIndices(GfxCodeSurfGlob *codeSurfGlob, unsigned int indexCount, r_double_index_t **indicesOut)
{
  return ?R_ReserveCodeSurfIndices@@YA_NPEAUGfxCodeSurfGlob@@IPEAPEAUr_double_index_t@@@Z(codeSurfGlob, indexCount, indicesOut);
}

/*
==============
R_AddBoundsToCodeSurfGlob
==============
*/

void __fastcall R_AddBoundsToCodeSurfGlob(const GfxCodeSurfGlob *codeSurfGlob, const GfxBackEndData *backEndData, const Bounds *bounds)
{
  ?R_AddBoundsToCodeSurfGlob@@YAXPEBUGfxCodeSurfGlob@@PEBUGfxBackEndData@@AEBUBounds@@@Z(codeSurfGlob, backEndData, bounds);
}

/*
==============
R_CodeSurfQuadIter_Begin
==============
*/

GfxSpriteQuad *__fastcall R_CodeSurfQuadIter_Begin(GfxCodeSurfGlob *codeSurfGlob, unsigned int quadIndexBegin)
{
  return ?R_CodeSurfQuadIter_Begin@@YAPEAUGfxSpriteQuad@@PEAUGfxCodeSurfGlob@@I@Z(codeSurfGlob, quadIndexBegin);
}

/*
==============
R_AddCode3DQuadSurf
==============
*/

void __fastcall R_AddCode3DQuadSurf(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBase, unsigned __int16 vertIndexOffset, r_double_index_t *indices, const vec3_t *center, const tmat33_t<vec3_t> *axis, float width, float height, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  ?R_AddCode3DQuadSurf@@YAXPEAUGfxCodeSurfGlob@@IGPEAUr_double_index_t@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@MMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(codeSurfGlob, vertIndexBase, vertIndexOffset, indices, center, axis, width, height, s0, t0, s1, t1, color, material);
}

/*
==============
R_CodeSurfArgsIter_Begin
==============
*/

vec4_t *__fastcall R_CodeSurfArgsIter_Begin(GfxCodeSurfGlob *codeSurfGlob, unsigned int argsOffset)
{
  return ?R_CodeSurfArgsIter_Begin@@YAPEATvec4_t@@PEAUGfxCodeSurfGlob@@I@Z(codeSurfGlob, argsOffset);
}

/*
==============
R_ReturnCodeSurfVerts
==============
*/

void __fastcall R_ReturnCodeSurfVerts(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, const GfxSpriteVertex *vertsIter)
{
  ?R_ReturnCodeSurfVerts@@YAXPEAUGfxCodeSurfGlob@@IPEBUGfxSpriteVertex@@@Z(codeSurfGlob, vertCount, vertsIter);
}

/*
==============
R_BeginCodeSurfs
==============
*/

int __fastcall R_BeginCodeSurfs(GfxCodeSurfUser user, GfxCodeSurfListType surfList, GfxCodeSurfGlob **codeSurfGlobOut)
{
  return ?R_BeginCodeSurfs@@YAHW4GfxCodeSurfUser@@W4GfxCodeSurfListType@@PEAPEAUGfxCodeSurfGlob@@@Z(user, surfList, codeSurfGlobOut);
}

/*
==============
R_EndCodeSurfs
==============
*/

void __fastcall R_EndCodeSurfs(GfxCodeSurfGlob *codeSurfGlob, GfxCodeSurfUser user)
{
  ?R_EndCodeSurfs@@YAXPEAUGfxCodeSurfGlob@@W4GfxCodeSurfUser@@@Z(codeSurfGlob, user);
}

/*
==============
R_CodeSurfVertIter_Begin
==============
*/

GfxSpriteVertex *__fastcall R_CodeSurfVertIter_Begin(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBegin)
{
  return ?R_CodeSurfVertIter_Begin@@YAPEAUGfxSpriteVertex@@PEAUGfxCodeSurfGlob@@I@Z(codeSurfGlob, vertIndexBegin);
}

/*
==============
R_GetCodeSurfArgs
==============
*/

vec4_t *__fastcall R_GetCodeSurfArgs(GfxCodeSurfGlob *codeSurfGlob, unsigned int argOffset)
{
  return ?R_GetCodeSurfArgs@@YAPEATvec4_t@@PEAUGfxCodeSurfGlob@@I@Z(codeSurfGlob, argOffset);
}

/*
==============
R_CodeSurfAssertLimits
==============
*/

void __fastcall R_CodeSurfAssertLimits(GfxCodeSurfGlob *codeSurfGlob, const unsigned int surfLimit, const unsigned int vertLimit, const unsigned int indexLimit)
{
  ?R_CodeSurfAssertLimits@@YAXPEAUGfxCodeSurfGlob@@III@Z(codeSurfGlob, surfLimit, vertLimit, indexLimit);
}

/*
==============
R_AddCodeSurf
==============
*/

void __fastcall R_AddCodeSurf(GfxCodeSurfGlob *codeSurfGlob, const GfxCodeSurfArgs *codeSurfArgs)
{
  ?R_AddCodeSurf@@YAXPEAUGfxCodeSurfGlob@@PEBUGfxCodeSurfArgs@@@Z(codeSurfGlob, codeSurfArgs);
}

/*
==============
R_ReserveQuadCodeSurfBuffers
==============
*/

bool __fastcall R_ReserveQuadCodeSurfBuffers(GfxCodeSurfBuffers *outBuffers, GfxCodeSurfGlob *codeSurfGlob, unsigned int quadCount, unsigned int argCount)
{
  return ?R_ReserveQuadCodeSurfBuffers@@YA_NPEAUGfxCodeSurfBuffers@@PEAUGfxCodeSurfGlob@@II@Z(outBuffers, codeSurfGlob, quadCount, argCount);
}

/*
==============
R_AllocateCodeSurfLightmap
==============
*/

bool __fastcall R_AllocateCodeSurfLightmap(GfxCodeSurfGlob *codeSurfGlob, GfxMeshLightingType lightingType, unsigned int lightingLevel, unsigned int activeLightGridsBitmask, GfxMeshDataLightingInput **lightIter, unsigned int *outLightmapOffset, float *outLightmapU, float *outLightmapV, float *outLightmapD)
{
  return ?R_AllocateCodeSurfLightmap@@YA_NPEAUGfxCodeSurfGlob@@W4GfxMeshLightingType@@IIPEAPEAUGfxMeshDataLightingInput@@PEAIPEAM44@Z(codeSurfGlob, lightingType, lightingLevel, activeLightGridsBitmask, lightIter, outLightmapOffset, outLightmapU, outLightmapV, outLightmapD);
}

/*
==============
R_AccumulateMaterialRenderTechflagsEmissiveTech
==============
*/
void R_AccumulateMaterialRenderTechflagsEmissiveTech(const Material *material, GfxViewMaterialRenderFeatures *renderFeatures)
{
  __int64 p1_low; 
  const char *name; 
  Material *MaterialAtIndex; 
  unsigned int v7; 
  const MaterialTechniqueSet *TechniqueSet; 
  const MaterialTechnique *TechSetTechnique; 
  __int64 v10; 
  __int64 v11; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 534, ASSERT_TYPE_ASSERT, "(mtl)", (const char *)&queryFormat, "mtl") )
    __debugbreak();
  p1_low = LOWORD(material->drawSurf.packed.p1);
  if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", material->name) )
    __debugbreak();
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(v10) = p1_low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v10, rgp.materialCount) )
      __debugbreak();
  }
  if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != material )
  {
    name = material->name;
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(v11) = rgp.materialCount;
      LODWORD(v10) = p1_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, name) )
      __debugbreak();
  }
  v7 = g_drawConsts.sortedMaterialKeys[p1_low];
  TechniqueSet = Material_GetTechniqueSet(material);
  if ( !TechniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  TechSetTechnique = Material_GetTechSetTechnique(TechniqueSet, TECHNIQUE_EMISSIVE);
  if ( rg.distortion )
  {
    if ( (TechSetTechnique->flags & 2) != 0 && v7 >= s_world.sortKeyEffectDistortion )
      *renderFeatures |= 2u;
  }
  else if ( v7 < s_world.sortKeyEffectDistortion && (TechSetTechnique->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 552, ASSERT_TYPE_ASSERT, "(!( sortedKey < s_world.sortKeyEffectDistortion && ( ( technique->flags & (1 << 1) ) != 0 ) ))", (const char *)&queryFormat, "!( sortedKey < s_world.sortKeyEffectDistortion && ( ( technique->flags & MTL_TECHFLAG_NEEDS_DISTORTION ) != 0 ) )") )
  {
    __debugbreak();
  }
}

/*
==============
R_AddBoundsToCodeSurfGlob
==============
*/
void R_AddBoundsToCodeSurfGlob(const GfxCodeSurfGlob *codeSurfGlob, const GfxBackEndData *backEndData, const Bounds *bounds)
{
  GfxSunShadowPartition *v5; 
  char *v6; 
  __int64 v7; 
  __m256i v8; 
  vec4_t v9; 
  int v10; 
  float v11; 
  int v12; 
  int v13; 
  float v14; 
  int v15; 
  int v16; 
  float *v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  double v22; 
  GfxCodeSurf *codeSurfsMain; 
  unsigned __int64 v33; 
  GfxCodeSurf *v34; 
  unsigned __int64 v35; 
  vec4_t solution_8; 
  vec4_t mulVec; 
  tmat44_t<vec4_t> out; 
  char v39; 
  tmat44_t<vec4_t> in; 
  int v41; 
  float v42; 
  int v43[22]; 

  if ( -3.4028235e38 != bounds->halfSize.v[0] && -3.4028235e38 != bounds->halfSize.v[1] && -3.4028235e38 != bounds->halfSize.v[2] )
  {
    v5 = &backEndData->sunShadow.partition[3];
    v6 = &v39;
    v7 = 3i64;
    do
    {
      v6 += 128;
      v8 = *(__m256i *)v5->viewParms.viewMatrix.m.m[0].v;
      v9 = v5->viewParms.projectionMatrix.m.m[3];
      v5 = (GfxSunShadowPartition *)((char *)v5 + 128);
      *((__m256i *)v6 - 4) = v8;
      *((__m256i *)v6 - 3) = *(__m256i *)&v5[-1].isPrevViewProjectionMatrixValid;
      *((__m256i *)v6 - 2) = *(__m256i *)&v5[-1].frustumSidePlanes[1].coeffs.xyz.z;
      *((_OWORD *)v6 - 2) = *(DpvsPlane *)((char *)&v5[-1].frustumSidePlanes[3] + 8);
      *((vec4_t *)v6 - 1) = v9;
      --v7;
    }
    while ( v7 );
    MatrixTranspose44Aligned(&in, &out);
    *(float *)&v10 = bounds->midPoint.v[0] - bounds->halfSize.v[0];
    v11 = bounds->midPoint.v[1];
    *(float *)&v12 = v11 + bounds->halfSize.v[1];
    *(float *)&v13 = v11 - bounds->halfSize.v[1];
    v14 = bounds->midPoint.v[2];
    *(float *)&v15 = v14 + bounds->halfSize.v[2];
    *(float *)&v16 = v14 - bounds->halfSize.v[2];
    *(float *)&v41 = bounds->midPoint.v[0] + bounds->halfSize.v[0];
    v43[4] = v41;
    v43[7] = v41;
    v43[13] = v41;
    v42 = *(float *)&v12;
    v43[0] = v15;
    v43[2] = v12;
    v43[3] = v15;
    v43[6] = v15;
    v43[8] = v12;
    v43[17] = v12;
    v43[21] = v15;
    v43[1] = v10;
    v43[5] = v13;
    v43[9] = v16;
    v43[10] = v10;
    v43[11] = v13;
    v43[12] = v16;
    v43[14] = v13;
    v43[15] = v16;
    v43[16] = v10;
    v43[18] = v16;
    v43[19] = v10;
    v43[20] = v13;
    solution_8 = (vec4_t)_xmm;
    v17 = (float *)v43;
    v18 = 8i64;
    do
    {
      v19 = *(v17 - 1);
      v20 = *v17;
      mulVec.v[0] = *(v17 - 2);
      mulVec.v[1] = v19;
      mulVec.v[2] = v20;
      mulVec.v[3] = FLOAT_1_0;
      MatrixVecMultiply(&out, &mulVec, &solution_8);
      solution_8.v[1] = (float)(1.0 / solution_8.v[3]) * solution_8.v[1];
      solution_8.v[2] = (float)(1.0 / solution_8.v[3]) * solution_8.v[2];
      v21 = (float)((float)((float)(1.0 / solution_8.v[3]) * solution_8.v[0]) + 1.0) * 0.5;
      solution_8.v[0] = (float)(1.0 / solution_8.v[3]) * solution_8.v[0];
      v22 = I_fclamp(v21, 0.0, 1.0);
      solution_8.v[0] = *(float *)&v22;
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *(double *)&_XMM0 = I_fclamp(0.5 - (float)(0.5 * solution_8.v[1]), 0.0, 1.0);
      v17 += 3;
      _XMM1 = LODWORD(solution_8.v[0]);
      solution_8.v[1] = *(float *)&_XMM0;
      __asm
      {
        vmaxss  xmm8, xmm0, xmm8
        vminss  xmm11, xmm0, xmm11
      }
      _XMM0 = LODWORD(solution_8.v[2]);
      __asm
      {
        vmaxss  xmm10, xmm0, xmm10
        vminss  xmm12, xmm0, xmm12
        vmaxss  xmm9, xmm1, xmm9
        vminss  xmm6, xmm1, xmm6
      }
      --v18;
    }
    while ( v18 );
    codeSurfsMain = codeSurfGlob->codeSurfsMain;
    v33 = (unsigned __int64)codeSurfGlob->surfCount << 6;
    *(float *)((char *)&codeSurfsMain->bounds.halfSize.v[1] + v33) = *(float *)&_XMM8;
    *(float *)((char *)&codeSurfsMain->bounds.halfSize.v[2] + v33) = *(float *)&_XMM10;
    *(float *)((char *)codeSurfsMain->bounds.halfSize.v + v33) = *(float *)&_XMM9;
    v34 = codeSurfGlob->codeSurfsMain;
    v35 = (unsigned __int64)codeSurfGlob->surfCount << 6;
    *(float *)((char *)v34->bounds.midPoint.v + v35) = *(float *)&_XMM6;
    *(float *)((char *)&v34->bounds.midPoint.v[1] + v35) = *(float *)&_XMM11;
    *(float *)((char *)&v34->bounds.midPoint.v[2] + v35) = *(float *)&_XMM12;
    codeSurfGlob->codeSurfsMain[(unsigned __int64)codeSurfGlob->surfCount].translucentShadowDensity = codeSurfGlob->perEmitterData->translucentShadowParams.v[0];
  }
}

/*
==============
R_AddCode3DQuadSurf
==============
*/
void R_AddCode3DQuadSurf(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBase, unsigned __int16 vertIndexOffset, r_double_index_t *indices, const vec3_t *center, const tmat33_t<vec3_t> *axis, float width, float height, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  float v18; 
  float v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  GfxSpriteVertex *v26; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  __int64 v55; 
  r_double_index_t v56; 
  GfxCodeSurfArgs codeSurfArgs; 

  if ( !indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 651, ASSERT_TYPE_ASSERT, "(indices)", (const char *)&queryFormat, "indices") )
    __debugbreak();
  v56.value[0] = vertIndexOffset;
  v56.value[1] = vertIndexOffset + 1;
  *indices = v56;
  v56.value[0] = vertIndexOffset + 2;
  v56.value[1] = vertIndexOffset + 2;
  indices[1] = v56;
  v56.value[0] = vertIndexOffset + 3;
  codeSurfArgs.indices = indices;
  v56.value[1] = vertIndexOffset;
  indices[2] = v56;
  codeSurfArgs.material = material;
  codeSurfArgs.fxName = "(code)";
  codeSurfArgs.vertIndexBase = vertIndexBase;
  *(_QWORD *)&codeSurfArgs.indexCount = 6i64;
  codeSurfArgs.argCount = 0;
  codeSurfArgs.sortOrder = 0;
  codeSurfArgs.flags = 0;
  R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
  v18 = 0.5 * width;
  v19 = height * -0.5;
  v20 = vertIndexBase + vertIndexOffset;
  v21 = height * 0.5;
  if ( (unsigned int)v20 >= codeSurfGlob->vertLimit )
  {
    LODWORD(v55) = v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( vertIndexBegin ) < (unsigned)( codeSurfGlob->vertLimit )", "vertIndexBegin doesn't index codeSurfGlob->vertLimit\n\t%i not in [0, %i)", v55, codeSurfGlob->vertLimit) )
      __debugbreak();
  }
  v22 = axis->m[1].v[2];
  v23 = axis->m[2].v[2];
  v24 = v21 * axis->m[2].v[1];
  v25 = v18 * axis->m[1].v[1];
  v26 = &codeSurfGlob->verts[v20];
  v26->xyz.v[0] = (float)((float)(v21 * axis->m[2].v[0]) + (float)(v18 * axis->m[1].v[0])) + center->v[0];
  v26->xyz.v[1] = (float)(v24 + v25) + center->v[1];
  v26->xyz.v[2] = (float)((float)(v21 * v23) + (float)(v18 * v22)) + center->v[2];
  v26->extraData = 0;
  v26->color = *color;
  *(_QWORD *)&v26->normal.packed = 0i64;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+30h+s0], 0
    vinsertps xmm0, xmm0, [rbp+30h+t0], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
  }
  v26->texCoord.packed = _XMM0;
  v31 = axis->m[1].v[1];
  v32 = axis->m[2].v[1];
  v33 = axis->m[1].v[2];
  v34 = axis->m[2].v[2];
  v26[1].xyz.v[0] = (float)((float)(COERCE_FLOAT(LODWORD(v19) ^ _xmm) * axis->m[2].v[0]) + (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) * axis->m[1].v[0])) + center->v[0];
  v26[1].xyz.v[1] = (float)((float)(COERCE_FLOAT(LODWORD(v19) ^ _xmm) * v32) + (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) * v31)) + center->v[1];
  v26[1].xyz.v[2] = (float)((float)(COERCE_FLOAT(LODWORD(v19) ^ _xmm) * v34) + (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) * v33)) + center->v[2];
  v26[1].extraData = 0;
  v26[1].color = *color;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+30h+s1], 0
    vinsertps xmm0, xmm0, [rbp+30h+t0], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
  }
  v26[1].texCoord.packed = _XMM0;
  *(_QWORD *)&v26[1].normal.packed = 0i64;
  v39 = axis->m[1].v[1];
  v40 = axis->m[1].v[2];
  v41 = axis->m[2].v[2];
  v42 = axis->m[2].v[1];
  v26[2].xyz.v[0] = (float)((float)(COERCE_FLOAT(LODWORD(v21) ^ _xmm) * axis->m[2].v[0]) + (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) * axis->m[1].v[0])) + center->v[0];
  v26[2].xyz.v[1] = (float)((float)(COERCE_FLOAT(LODWORD(v21) ^ _xmm) * v42) + (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) * v39)) + center->v[1];
  v26[2].xyz.v[2] = (float)((float)(COERCE_FLOAT(LODWORD(v21) ^ _xmm) * v41) + (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) * v40)) + center->v[2];
  v26[2].extraData = 0;
  v26[2].color = *color;
  *(_QWORD *)&v26[2].normal.packed = 0i64;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+30h+s1], 0
    vinsertps xmm0, xmm0, [rbp+30h+t1], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
  }
  v26[2].texCoord.packed = _XMM0;
  v47 = axis->m[2].v[2];
  v48 = axis->m[1].v[1];
  v49 = axis->m[2].v[1];
  v50 = axis->m[1].v[2];
  v26[3].xyz.v[0] = (float)((float)(v19 * axis->m[2].v[0]) + (float)(v18 * axis->m[1].v[0])) + center->v[0];
  v26[3].xyz.v[1] = (float)((float)(v19 * v49) + (float)(v18 * v48)) + center->v[1];
  v26[3].xyz.v[2] = (float)((float)(v18 * v50) + (float)(v19 * v47)) + center->v[2];
  v26[3].extraData = 0;
  v26[3].color = *color;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+30h+s0], 0
    vinsertps xmm0, xmm0, [rbp+30h+t1], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
  }
  v26[3].texCoord.packed = _XMM0;
  *(_QWORD *)&v26[3].normal.packed = 0i64;
}

/*
==============
R_AddCode3DQuadVertsSurf
==============
*/
void R_AddCode3DQuadVertsSurf(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBase, unsigned __int16 vertIndexOffset, r_double_index_t *indices, const vec3_t (*verts)[4], float s0, float t0, float s1, float t1, const vec4_t *color, Material *material, unsigned __int8 flags, unsigned int sortOrder, const GfxMatrix *worldMatrix, const GfxMatrix *invViewMatrix, unsigned int argOffset, unsigned int argCount)
{
  __int64 v22; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v34; 
  __int128 v35; 
  GfxSpriteVertex *v39; 
  __int128 v45; 
  __int128 v60; 
  __int128 v79; 
  __int128 v94; 
  __int128 v113; 
  __int128 v128; 
  __int128 v147; 
  __int128 v162; 
  __int64 v176; 
  r_double_index_t v177; 
  GfxCodeSurfArgs codeSurfArgs; 
  __int128 v179; 

  if ( !indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 713, ASSERT_TYPE_ASSERT, "(indices)", (const char *)&queryFormat, "indices") )
    __debugbreak();
  v177.value[1] = vertIndexOffset + 1;
  v177.value[0] = vertIndexOffset;
  *indices = v177;
  v177.value[0] = vertIndexOffset + 2;
  v177.value[1] = vertIndexOffset + 2;
  indices[1] = v177;
  v177.value[0] = vertIndexOffset + 3;
  v177.value[1] = vertIndexOffset;
  indices[2] = v177;
  codeSurfArgs.material = material;
  codeSurfArgs.argCount = argCount;
  codeSurfArgs.fxName = "(code)";
  if ( !argCount )
    argOffset = 0;
  codeSurfArgs.sortOrder = sortOrder;
  codeSurfArgs.argOffset = argOffset;
  codeSurfArgs.flags = flags;
  codeSurfArgs.vertIndexBase = vertIndexBase;
  codeSurfArgs.indices = indices;
  codeSurfArgs.indexCount = 6;
  R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
  v22 = vertIndexBase + vertIndexOffset;
  if ( (unsigned int)v22 >= codeSurfGlob->vertLimit )
  {
    LODWORD(v176) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( vertIndexBegin ) < (unsigned)( codeSurfGlob->vertLimit )", "vertIndexBegin doesn't index codeSurfGlob->vertLimit\n\t%i not in [0, %i)", v176, codeSurfGlob->vertLimit) )
      __debugbreak();
  }
  v24 = LODWORD((*verts)[1].v[0]);
  *(float *)&v24 = (*verts)[1].v[0] - (*verts)[0].v[0];
  v23 = v24;
  v25 = (*verts)[1].v[2] - (*verts)[0].v[2];
  v26 = (*verts)[3].v[0] - (*verts)[0].v[0];
  v27 = (*verts)[1].v[1] - (*verts)[0].v[1];
  v28 = (*verts)[3].v[2] - (*verts)[0].v[2];
  v29 = (*verts)[3].v[1] - (*verts)[0].v[1];
  v30 = (float)(v29 * v25) - (float)(v27 * v28);
  *(float *)&v24 = fsqrt((float)((float)((float)((float)(*(float *)&v24 * v28) - (float)(v26 * v25)) * (float)((float)(*(float *)&v24 * v28) - (float)(v26 * v25))) + (float)(v30 * v30)) + (float)((float)((float)(v27 * v26) - (float)(*(float *)&v23 * v29)) * (float)((float)(v27 * v26) - (float)(*(float *)&v23 * v29))));
  _XMM3 = v24;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v34 = v30 * (float)(1.0 / *(float *)&_XMM0);
  v35 = v23;
  *(float *)&v35 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(v27 * v27)) + (float)(v25 * v25));
  _XMM3 = v35;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v39 = &codeSurfGlob->verts[v22];
  *(float *)&v23 = *(float *)&v23 * (float)(1.0 / *(float *)&_XMM0);
  MatrixTransformPosition44((const vec3_t *)verts, &worldMatrix->m, &v39->xyz);
  v39->extraData = 0;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+70h+s0], 0
    vinsertps xmm0, xmm0, [rbp+70h+t0], 10h
  }
  v39->color = *color;
  __asm { vcvtps2ph xmm0, xmm0, 0 }
  v39->texCoord.packed = _XMM0;
  HIDWORD(v179) = 0;
  v45 = v179;
  *(float *)&v45 = v34;
  _XMM5 = v45;
  __asm
  {
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  v179 = _XMM5;
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39->normal.packed = _XMM0;
  HIDWORD(v179) = 0;
  v60 = v179;
  *(float *)&v60 = *(float *)&v23;
  _XMM5 = v60;
  __asm
  {
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39->tangentBinormalSign.packed = _XMM0;
  v179 = _XMM5;
  MatrixTransformPosition44(&(*verts)[1], &worldMatrix->m, &v39[1].xyz);
  v39[1].extraData = 0;
  v39[1].color = *color;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+70h+s1], 0
    vinsertps xmm0, xmm0, [rbp+70h+t0], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v39[1].texCoord.packed = _XMM0;
  HIDWORD(v179) = 0;
  v79 = v179;
  *(float *)&v79 = v34;
  _XMM5 = v79;
  __asm
  {
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  v179 = _XMM5;
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39[1].normal.packed = _XMM0;
  HIDWORD(v179) = 0;
  v94 = v179;
  *(float *)&v94 = *(float *)&v23;
  _XMM5 = v94;
  __asm
  {
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39[1].tangentBinormalSign.packed = _XMM0;
  v179 = _XMM5;
  MatrixTransformPosition44(&(*verts)[2], &worldMatrix->m, &v39[2].xyz);
  v39[2].extraData = 0;
  v39[2].color = *color;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+70h+s1], 0
    vinsertps xmm0, xmm0, [rbp+70h+t1], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v39[2].texCoord.packed = _XMM0;
  HIDWORD(v179) = 0;
  v113 = v179;
  *(float *)&v113 = v34;
  _XMM5 = v113;
  __asm
  {
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  v179 = _XMM5;
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39[2].normal.packed = _XMM0;
  HIDWORD(v179) = 0;
  v128 = v179;
  *(float *)&v128 = *(float *)&v23;
  _XMM5 = v128;
  __asm
  {
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39[2].tangentBinormalSign.packed = _XMM0;
  v179 = _XMM5;
  MatrixTransformPosition44(&(*verts)[3], &worldMatrix->m, &v39[3].xyz);
  v39[3].extraData = 0;
  v39[3].color = *color;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, [rbp+70h+s0], 0
    vinsertps xmm0, xmm0, [rbp+70h+t1], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v39[3].texCoord.packed = _XMM0;
  HIDWORD(v179) = 0;
  v147 = v179;
  *(float *)&v147 = v34;
  _XMM5 = v147;
  __asm
  {
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
  }
  v179 = _XMM5;
  __asm
  {
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39[3].normal.packed = _XMM0;
  HIDWORD(v179) = 0;
  v162 = v179;
  *(float *)&v162 = *(float *)&v23;
  _XMM5 = v162;
  __asm
  {
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  v39[3].tangentBinormalSign.packed = _XMM0;
}

/*
==============
R_AddCodeSurf
==============
*/
void R_AddCodeSurf(GfxCodeSurfGlob *codeSurfGlob, const GfxCodeSurfArgs *codeSurfArgs)
{
  char *Value; 
  unsigned int *v5; 
  unsigned int v6; 
  _QWORD *v7; 
  char *v8; 
  int *v9; 
  unsigned __int64 v10; 
  ThreadContext CurrentThreadContext; 
  Material *material; 
  unsigned int indexCount; 
  unsigned int argOffset; 
  unsigned int argCount; 
  const char *fxName; 
  __int64 p1_low; 
  GfxCodeSurfListType surfList; 
  unsigned int v19; 
  GfxCodeSurf *v20; 
  unsigned int v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  r_double_index_t *indices; 

  Value = (char *)Sys_GetValue(0);
  v5 = (unsigned int *)(Value + 6136);
  if ( (unsigned int)(*((_DWORD *)Value + 1534) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1534) + 1, 3) )
    __debugbreak();
  v6 = *v5 + 1;
  *v5 = v6;
  if ( v6 >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(v25) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  v7 = Value + 2088;
  v8 = Value + 40;
  if ( *v7 < (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v7 += 8i64;
  if ( *v7 >= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v7 = v5;
  if ( *v7 <= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v9 = (int *)&v5[*v5 + 2];
  v10 = __rdtsc();
  *v9 = v10;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 101, NULL, 0);
  material = codeSurfArgs->material;
  indices = codeSurfArgs->indices;
  indexCount = codeSurfArgs->indexCount;
  argOffset = codeSurfArgs->argOffset;
  argCount = codeSurfArgs->argCount;
  fxName = codeSurfArgs->fxName;
  if ( !indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 579, ASSERT_TYPE_ASSERT, "(indexCount)", (const char *)&queryFormat, "indexCount") )
    __debugbreak();
  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 580, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !material->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
    __debugbreak();
  if ( !*material->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
    __debugbreak();
  p1_low = LOWORD(material->drawSurf.packed.p1);
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(v26) = rgp.materialCount;
    LODWORD(v25) = LOWORD(material->drawSurf.packed.p1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 584, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( (uint)material->drawSurf.fields.materialSortedIndex ) == material)", (const char *)&queryFormat, "R_GetSortedMaterial( (uint)material->drawSurf.fields.materialSortedIndex ) == material") )
    __debugbreak();
  if ( rg.distortion )
    goto LABEL_45;
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 655, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  if ( (material->techniqueSet->flags & 0x800000000i64) == 0 )
  {
LABEL_45:
    if ( codeSurfGlob->surfCount < codeSurfGlob->surfLimit )
    {
      surfList = codeSurfGlob->surfList;
      if ( surfList )
      {
        if ( surfList == GFX_CODE_SURFLIST_SUNSHADOW_TRANS && !Material_HasTechnique(material, TECHNIQUE_BUILD_TRANS_SHADOWMAP) )
        {
          R_WarnOncePerFrame(R_WARN_NONSHADOW_FX_MATERIAL, material->name, fxName);
          goto LABEL_59;
        }
      }
      else
      {
        if ( !Material_HasTechnique(material, TECHNIQUE_EMISSIVE) )
        {
          R_WarnOncePerFrame(R_WARN_NONEMISSIVE_FX_MATERIAL, material->name, fxName);
          goto LABEL_59;
        }
        R_AccumulateMaterialRenderTechflagsEmissiveTech(material, codeSurfGlob->matRenderFeatures);
      }
      v19 = codeSurfGlob->surfCount++;
      v20 = &codeSurfGlob->codeSurfsMain[(unsigned __int64)v19];
      _XMM0.fields = (GfxDrawSurfFields)material->drawSurf;
      __asm { vpextrq rax, xmm0, 1 }
      *(_WORD *)&v20->drawGroup.fields = _RAX;
      v20->drawGroup.packed &= ~0x10000u;
      v23 = v20->drawGroup.packed & 0xFE33FFFF | (32 * (material->materialType & 0x2000 | 0x18000));
      v20->drawGroup.packed = v23;
      v24 = v23 ^ (v23 ^ (codeSurfArgs->flags << 25)) & 0x2000000;
      v20->drawGroup.packed = v24;
      v20->drawGroup.packed = v24 ^ (v24 ^ (codeSurfArgs->flags << 16)) & 0x20000;
      v20->triCount = indexCount / 3;
      v20->vertIndexBase = codeSurfArgs->vertIndexBase;
      v20->indices = (unsigned __int16 *)indices;
      if ( !argCount && argOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 632, ASSERT_TYPE_ASSERT, "(argCount != 0 || argOffset == 0)", (const char *)&queryFormat, "argCount != 0 || argOffset == 0") )
        __debugbreak();
      if ( argOffset >= codeSurfGlob->argsLimit )
      {
        LODWORD(v26) = codeSurfGlob->argsLimit;
        LODWORD(v25) = argOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 633, ASSERT_TYPE_ASSERT, "(unsigned)( argOffset ) < (unsigned)( codeSurfGlob->argsLimit )", "argOffset doesn't index codeSurfGlob->argsLimit\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v20->argCount = truncate_cast<unsigned short,unsigned int>(argCount);
      v20->argOffset = truncate_cast<unsigned short,unsigned int>(argOffset);
      v20->sortOrder = codeSurfArgs->sortOrder;
    }
    else
    {
      R_WarnOncePerFrame(codeSurfGlob->surfLimitWarn);
    }
  }
LABEL_59:
  Profile_EndInternal(NULL);
}

/*
==============
R_AddCodeSurfEmitterData
==============
*/
bool R_AddCodeSurfEmitterData(GfxCodeSurfGlob *codeSurfGlob, const GfxSpriteEmitter *data, unsigned int *outEmitterDataIndex)
{
  unsigned int perEmitterDataCount; 
  bool result; 
  GfxSpriteEmitter *v6; 

  perEmitterDataCount = codeSurfGlob->perEmitterDataCount;
  if ( perEmitterDataCount < codeSurfGlob->perEmitterDataLimit )
  {
    *outEmitterDataIndex = perEmitterDataCount;
    ++codeSurfGlob->perEmitterDataCount;
    v6 = &codeSurfGlob->perEmitterData[*outEmitterDataIndex];
    result = 1;
    v6->falloffParms = data->falloffParms;
    v6->opaqueColor = data->opaqueColor;
    v6->transparentColor = data->transparentColor;
    *(_OWORD *)v6->translucentShadowParams.v = *(_OWORD *)data->translucentShadowParams.v;
    v6->eyeOffsetParms = data->eyeOffsetParms;
    v6->alphaDissolveParms = data->alphaDissolveParms;
    v6->featherParms0 = data->featherParms0;
    v6->featherParms1 = data->featherParms1;
    v6->regionHighlightParms = data->regionHighlightParms;
    v6->depthScanColor = data->depthScanColor;
    v6->depthScanOutlineColor = data->depthScanOutlineColor;
    *(_OWORD *)v6->thermalParams.v = *(_OWORD *)data->thermalParams.v;
  }
  else
  {
    R_WarnOncePerFrame(codeSurfGlob->perEmitterDataWarn, data, outEmitterDataIndex);
    return 0;
  }
  return result;
}

/*
==============
R_AddCodeSurfPackedAtlasData
==============
*/
__int64 R_AddCodeSurfPackedAtlasData(GfxCodeSurfGlob *codeSurfGlob, const GfxPackedAtlasData *packedAtlasData, unsigned int packedAtlasDataCount)
{
  GfxPackedAtlasData *v3; 
  __int64 v6; 

  v3 = codeSurfGlob->packedAtlasData;
  if ( v3 )
  {
    v6 = (int)codeSurfGlob->packedAtlasDataCount;
    if ( (unsigned int)v6 + packedAtlasDataCount < codeSurfGlob->packedAtlasDataLimit )
    {
      memcpy_0(&v3[v6], packedAtlasData, 24i64 * packedAtlasDataCount);
      codeSurfGlob->packedAtlasDataCount += packedAtlasDataCount;
      return (unsigned int)v6;
    }
    R_WarnOncePerFrame(codeSurfGlob->packedAtlasDataWarn);
  }
  return 0xFFFFFFFFi64;
}

/*
==============
R_AllocateCodeSurfLightmap
==============
*/
char R_AllocateCodeSurfLightmap(GfxCodeSurfGlob *codeSurfGlob, GfxMeshLightingType lightingType, unsigned int lightingLevel, unsigned int activeLightGridsBitmask, GfxMeshDataLightingInput **lightIter, unsigned int *outLightmapOffset, float *outLightmapU, float *outLightmapV, float *outLightmapD)
{
  __int64 v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int Offset; 
  float v17; 
  float v18; 
  int v19; 
  __int64 v20; 
  GfxMultiLightGridFXLightingBuffers *lightGridBuffers; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v31; 
  GfxMultiLightGridFXLightingBuffers *v32; 
  __int64 v33; 
  int v34; 
  GfxMultiLightGridFXLightingBuffers *v35; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  GfxMultiLightGridFXLightingBuffers *v40; 
  int v41; 
  volatile signed __int32 *v42; 
  signed __int32 v43; 
  GfxMultiLightGridFXLightingBuffers *v44; 
  unsigned int v46; 
  int v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  char v51; 
  int v53; 
  int v54; 

  _EBP = activeLightGridsBitmask;
  v10 = lightingLevel;
  v11 = lightingType;
  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 368, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( (unsigned int)v11 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 369, ASSERT_TYPE_ASSERT, "(lightingType > GFX_MESH_LIGHTING_NONE && lightingType < GFX_MESH_LIGHTING_COUNT)", (const char *)&queryFormat, "lightingType > GFX_MESH_LIGHTING_NONE && lightingType < GFX_MESH_LIGHTING_COUNT") )
    __debugbreak();
  if ( (unsigned int)v10 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 370, ASSERT_TYPE_ASSERT, "(lightingLevel < 6)", (const char *)&queryFormat, "lightingLevel < GFX_MESH_DATA_LIGHTMAP_LEVELS") )
    __debugbreak();
  v49 = v10;
  v13 = v10 + 6 * v11;
  v14 = v11;
  v15 = v10;
  if ( codeSurfGlob->lightingCount[0][v13] + 1 > codeSurfGlob->lightingLimit[0][v13] )
  {
    R_WarnOncePerFrame(R_WARN_FX_LIGHTING_INPUT_FULL, (unsigned int)v11, (unsigned int)v10);
    return 0;
  }
  Offset = Pow2TexturePacker<6,512>::GetOffset(codeSurfGlob->lightmapPacker[v11], v10);
  if ( Offset == -1 )
  {
    R_WarnOncePerFrame(R_WARN_FX_LIGHTMAP_FULL, (unsigned int)v11, (unsigned int)v10);
    return 0;
  }
  v17 = (float)HIWORD(Offset);
  *outLightmapU = (float)(v17 * 0.001953125) + 0.0009765625;
  v18 = (float)(unsigned __int16)Offset;
  *outLightmapV = (float)(v18 * 0.001953125) + 0.0009765625;
  v19 = 1 << v10;
  *outLightmapD = (float)((float)(1 << v10) * 0.001953125) - 0.001953125;
  v47 = 1 << v10;
  *outLightmapOffset = Offset;
  v20 = (int)codeSurfGlob->lightingCount[0][v13];
  v50 = v20;
  *lightIter = &codeSurfGlob->lightingData[0][v13][v20];
  ++codeSurfGlob->lightingCount[0][v13];
  lightGridBuffers = codeSurfGlob->lightGridBuffers;
  if ( lightGridBuffers )
  {
    v22 = 0;
    lightGridBuffers->lightGridsActive[v11][v10][v20] = _EBP;
    if ( _EBP )
    {
      v23 = 5 * (v10 + 2 * (3 * v11 + 21));
      v48 = v23;
      v24 = v10 + 2 * (3 * v11 + 78);
      v53 = (int)v20 / 64;
      v25 = (int)v20 / 64;
      v26 = 3 * v11 + 15;
      v27 = 0;
      v28 = 5 * (v10 + 2 * (3 * v11 + 9));
      v29 = 5 * (v10 + 2 * v26);
      do
      {
        __asm { tzcnt   eax, ebp }
        v31 = _EAX;
        v51 = _EAX;
        v32 = codeSurfGlob->lightGridBuffers;
        v46 = _EBP;
        v33 = v31 + 4 * v23;
        v34 = ++*((_DWORD *)&v32->lightGridsActiveBuffer[0][0].buffer + v33);
        v35 = codeSurfGlob->lightGridBuffers;
        v36 = *((_DWORD *)&(&v35->lightGridsActiveBuffer[0][0].buffer)[2 * v28] + v31);
        v37 = *((_DWORD *)&(&v35->lightGridsActiveBuffer[0][0].buffer)[2 * v29] + v31) + 1;
        if ( v37 < v25 )
        {
          v38 = 4 * (v31 + 20 * v37);
          v39 = v25 - v37;
          do
          {
            v38 += 80i64;
            *(_DWORD *)(v38 + *((_QWORD *)&codeSurfGlob->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v24) - 80) = v36;
            --v39;
          }
          while ( v39 );
          v35 = codeSurfGlob->lightGridBuffers;
          v23 = v48;
        }
        ++v27;
        *(_DWORD *)(*((_QWORD *)&v35->lightGridsActiveBuffer[0][0].buffer + v24) + 4 * (v31 + 20 * v25)) = v34;
        *((_DWORD *)&(&codeSurfGlob->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer)[2 * v28] + v31) = v34;
        *((_DWORD *)&(&codeSurfGlob->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer)[2 * v29] + v31) = v53;
        _EBP ^= 1 << v51;
      }
      while ( 1 << v51 != v46 );
      LODWORD(v11) = lightingType;
      v19 = v47;
      v15 = v49;
      v54 = v27;
      v14 = lightingType;
      v22 = v54;
    }
    v40 = codeSurfGlob->lightGridBuffers;
    v41 = v19 * v19;
    v42 = &v40->lightGridDataCount[v14];
    if ( (((_BYTE)v40 + 4 * (_BYTE)v14 - 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v40->lightGridDataCount[v14]) )
      __debugbreak();
    v43 = _InterlockedExchangeAdd(v42, v22 * v41);
    if ( codeSurfGlob->lightGridBuffers->lightGridDataCount[v14] <= (signed int)codeSurfGlob->lightGridBuffers->lightGridDataLimit[v14] )
    {
      v44 = codeSurfGlob->lightGridBuffers;
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_FX_INTERMEDIATE_FULL, (unsigned int)v11);
      v44 = codeSurfGlob->lightGridBuffers;
      v43 = v44->lightGridDataLimit[v14];
    }
    v44->lightGridsDataOffset[v14][v15][v50] = v43;
  }
  return 1;
}

/*
==============
R_BeginCodeSurfs
==============
*/
__int64 R_BeginCodeSurfs(GfxCodeSurfUser user, GfxCodeSurfListType surfList, GfxCodeSurfGlob **codeSurfGlobOut)
{
  unsigned __int64 v3; 
  unsigned int v6; 
  __int64 v7; 
  volatile signed __int32 *v8; 
  __int64 result; 
  GfxBackEndData *v10; 
  GfxCodeSurfGlob *v11; 
  unsigned int codeTransShadowSurfCountPrevFrame; 
  GfxBackEndData *v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  const dvar_t *v16; 
  int Int_Internal; 
  GfxBackEndData *v18; 
  unsigned __int64 v19; 
  GfxBackEndData *v20; 
  volatile unsigned int used; 
  GfxBackEndData *v22; 
  int v23; 
  unsigned int perQuadDataCount; 
  GfxSpriteVertex *data; 
  char *v26; 
  unsigned __int16 *v27; 
  GfxBackEndData *v28; 
  Pow2TexturePacker<6,512> **lightmapPacker; 
  signed __int64 v30; 
  Pow2TexturePacker<6,512> *v31; 
  __int64 v32; 
  unsigned int *v33; 
  __int64 v34; 

  v3 = surfList;
  if ( !codeSurfGlobOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 80, ASSERT_TYPE_ASSERT, "(codeSurfGlobOut)", (const char *)&queryFormat, "codeSurfGlobOut") )
    __debugbreak();
  v6 = 0;
  v7 = 2i64;
  *codeSurfGlobOut = NULL;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v34) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( surfList ) < (unsigned)( GFX_CODE_SURFLIST_TYPE_COUNT )", "surfList doesn't index GFX_CODE_SURFLIST_TYPE_COUNT\n\t%i not in [0, %i)", v34, 2) )
      __debugbreak();
  }
  if ( user == GFX_CODE_SURF_USER_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 84, ASSERT_TYPE_ASSERT, "(user != GFX_CODE_SURF_USER_NONE)", (const char *)&queryFormat, "user != GFX_CODE_SURF_USER_NONE") )
    __debugbreak();
  v8 = &scene.codeSurfUser[(unsigned int)v3];
  if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &scene.codeSurfUser[(unsigned int)v3]) )
    __debugbreak();
  if ( _InterlockedCompareExchange(v8, user, 0) )
    return 0i64;
  v10 = frontEndDataOut;
  v11 = &g_codeSurfGlob[(unsigned int)v3];
  if ( !frontEndDataOut )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", (_DWORD)frontEndDataOut + 95, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    v10 = frontEndDataOut;
  }
  v11->argsCount = v10->codeSurfArgsCount[(unsigned int)v3];
  v11->surfList = v3;
  v11->matRenderFeatures = NULL;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      v11->surfLimit = 0x4000;
      v11->codeSurfsMain = scene.codeTransShadowSurfs;
      v11->codeSurfCountMain = &scene.codeTransShadowSurfCount;
      v11->outCodeSurfArgsMain = &v10->codeSurfArgs[256];
      codeTransShadowSurfCountPrevFrame = scene.codeTransShadowSurfCountPrevFrame;
      v11->vertLimit = 0x10000;
      v11->quadLimit = 0x4000;
      v11->indexLimit = 98304;
      v11->argsLimit = 32;
      v11->perEmitterDataLimit = 1536;
      v11->packedAtlasDataLimit = 1536;
      v11->surfLimitWarn = R_WARN_GFX_CODE_TRANS_SHADOW_SURF_LIMIT;
      v11->vertLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_VERTS;
      v11->quadLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_QUADS;
      v11->indexLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_INDS;
      v11->argsLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_ARGS;
      v11->perEmitterDataWarn = R_WARN_MAX_CODE_TRANS_SHADOW_EMITTERS;
      v11->packedAtlasDataWarn = R_WARN_MAX_CODE_TRANS_SHADOW_PACKED_ATLAS;
      v10->transShadowBoundsCountPrevFrame = codeTransShadowSurfCountPrevFrame;
      if ( scene.codeTransShadowSurfCountPrevFrame )
      {
        v13 = frontEndDataOut;
        do
        {
          v14 = (unsigned __int64)v6 << 6;
          v15 = v6++;
          v15 *= 3i64;
          *(_OWORD *)&v13->transShadowBoundsPrevFrame[0].midPoint.v[2 * v15] = *(_OWORD *)((char *)scene.codeTransShadowSurfs[0].bounds.midPoint.v + v14);
          *((double *)&v13->transShadowBoundsPrevFrame[0].halfSize.y + v15) = *(double *)((char *)&scene.codeTransShadowSurfs[0].bounds.halfSize.y + v14);
          v13 = frontEndDataOut;
        }
        while ( v6 < frontEndDataOut->transShadowBoundsCountPrevFrame );
      }
    }
    else
    {
      LODWORD(v34) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 162, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp(162): unhandled case %d in switch statement", v34) )
        __debugbreak();
    }
  }
  else
  {
    v16 = r_emissive_surf_vert_limit;
    v11->codeSurfCountMain = &scene.codeEmissiveSurfCount;
    v11->matRenderFeatures = &scene.codeEmissiveMatRenderFeatures;
    v11->codeSurfsMain = (GfxCodeSurf *)&scene;
    scene.codeEmissiveMatRenderFeatures = GFX_VIEW_MTL_FEAT_NONE;
    v11->surfLimit = 0x4000;
    Int_Internal = Dvar_GetInt_Internal(v16);
    v18 = frontEndDataOut;
    v11->vertLimit = Int_Internal;
    v11->quadLimit = 0x4000;
    v11->indexLimit = 196608;
    v11->argsLimit = 256;
    v11->outCodeSurfArgsMain = v18->codeSurfArgs;
    v11->perEmitterDataLimit = 1536;
    v11->packedAtlasDataLimit = 1536;
    v11->surfLimitWarn = R_WARN_GFX_CODE_EMISSIVE_SURF_LIMIT;
    v11->vertLimitWarn = R_WARN_MAX_CODE_EMISSIVE_VERTS;
    v11->quadLimitWarn = R_WARN_MAX_CODE_EMISSIVE_QUADS;
    v11->indexLimitWarn = R_WARN_MAX_CODE_EMISSIVE_INDS;
    v11->argsLimitWarn = R_WARN_MAX_CODE_EMISSIVE_ARGS;
    v11->perEmitterDataWarn = R_WARN_MAX_CODE_EMISSIVE_EMITTERS;
    v11->packedAtlasDataWarn = R_WARN_MAX_CODE_EMISSIVE_PACKED_ATLAS;
  }
  v19 = v3;
  v11->surfCount = *v11->codeSurfCountMain;
  v20 = frontEndDataOut;
  used = frontEndDataOut->mesh[v19].vb.used;
  if ( used % frontEndDataOut->mesh[v19].vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 47, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
    __debugbreak();
  v22 = frontEndDataOut;
  v23 = used / v20->mesh[v19].vertSize;
  v11->vertCount = v23;
  v11->vertIndexBase = v23;
  perQuadDataCount = v22->mesh[v19].perQuadDataCount;
  v11->quadCount = perQuadDataCount;
  v11->quadIndexBase = perQuadDataCount;
  v11->indexCount = v22->mesh[v19].indexCount;
  data = (GfxSpriteVertex *)v22->mesh[v19].vb.wrappedBuffer.data;
  v11->verts = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 179, ASSERT_TYPE_ASSERT, "(codeSurfGlob->verts)", (const char *)&queryFormat, "codeSurfGlob->verts") )
    __debugbreak();
  v26 = (char *)frontEndDataOut + v19 * 1016;
  v11->quads = frontEndDataOut->mesh[v19].perQuadBufferData;
  v11->perEmitterData = (GfxSpriteEmitter *)*((_QWORD *)v26 + 25);
  v11->perEmitterDataCount = *((_DWORD *)v26 + 27);
  v11->packedAtlasData = (GfxPackedAtlasData *)*((_QWORD *)v26 + 35);
  v11->packedAtlasDataCount = *((_DWORD *)v26 + 31);
  v27 = (unsigned __int16 *)*((_QWORD *)v26 + 2);
  v11->indices = v27;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 190, ASSERT_TYPE_ASSERT, "(codeSurfGlob->indices)", (const char *)&queryFormat, "codeSurfGlob->indices") )
    __debugbreak();
  v28 = frontEndDataOut;
  lightmapPacker = v11->lightmapPacker;
  v30 = (char *)v11 - v19 * 1016 - (char *)frontEndDataOut;
  v31 = frontEndDataOut->mesh[v19].lightmapPacker;
  v11->lightGridBuffers = frontEndDataOut->mesh[v19].lightGridBuffers;
  v32 = (__int64)&v28->mesh[v19].lightingBufferData[0][2];
  v33 = &v28->mesh[v19].lightingCount[0][1];
  do
  {
    ++lightmapPacker;
    *(unsigned int *)((char *)v33 + v30 - 336) = v33[11];
    v32 += 48i64;
    *(unsigned int *)((char *)v33 + v30 - 288) = *(v33 - 1);
    v33 += 6;
    *(_QWORD *)(v32 + v30 - 352) = *(_QWORD *)(v32 - 64);
    *(unsigned int *)((char *)v33 + v30 - 356) = v33[6];
    *(unsigned int *)((char *)v33 + v30 - 308) = *(v33 - 6);
    *(_QWORD *)(v30 + v32 - 344) = *(_QWORD *)(v32 - 56);
    *(unsigned int *)((char *)v33 + v30 - 352) = v33[7];
    *(unsigned int *)((char *)v33 + v30 - 304) = *(v33 - 5);
    *(_QWORD *)(v30 + v32 - 336) = *(_QWORD *)(v32 - 48);
    *(unsigned int *)((char *)v33 + v30 - 348) = v33[8];
    *(unsigned int *)((char *)v33 + v30 - 300) = *(v33 - 4);
    *(_QWORD *)(v30 + v32 - 328) = *(_QWORD *)(v32 - 40);
    *(unsigned int *)((char *)v33 + v30 - 344) = v33[9];
    *(unsigned int *)((char *)v33 + v30 - 296) = *(v33 - 3);
    *(_QWORD *)(v30 + v32 - 320) = *(_QWORD *)(v32 - 32);
    *(unsigned int *)((char *)v33 + v30 - 340) = v33[10];
    *(unsigned int *)((char *)v33 + v30 - 292) = *(v33 - 2);
    *(_QWORD *)(v30 + v32 - 312) = *(_QWORD *)(v32 - 24);
    *(lightmapPacker - 1) = v31++;
    --v7;
  }
  while ( v7 );
  v11->allowProcess = 1;
  result = 1i64;
  *codeSurfGlobOut = v11;
  return result;
}

/*
==============
R_CodeSurfArgsIter_Begin
==============
*/
vec4_t *R_CodeSurfArgsIter_Begin(GfxCodeSurfGlob *codeSurfGlob, unsigned int argsOffset)
{
  return &codeSurfGlob->outCodeSurfArgsMain[argsOffset];
}

/*
==============
R_CodeSurfAssertLimits
==============
*/
void R_CodeSurfAssertLimits(GfxCodeSurfGlob *codeSurfGlob, const unsigned int surfLimit, const unsigned int vertLimit, const unsigned int indexLimit)
{
  if ( codeSurfGlob->indexLimit != indexLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 916, ASSERT_TYPE_ASSERT, "(codeSurfGlob->indexLimit == indexLimit)", (const char *)&queryFormat, "codeSurfGlob->indexLimit == indexLimit") )
    __debugbreak();
  if ( codeSurfGlob->vertLimit != vertLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 917, ASSERT_TYPE_ASSERT, "(codeSurfGlob->vertLimit == vertLimit)", (const char *)&queryFormat, "codeSurfGlob->vertLimit == vertLimit") )
    __debugbreak();
  if ( codeSurfGlob->surfLimit != surfLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 918, ASSERT_TYPE_ASSERT, "(codeSurfGlob->surfLimit == surfLimit)", (const char *)&queryFormat, "codeSurfGlob->surfLimit == surfLimit") )
    __debugbreak();
}

/*
==============
R_CodeSurfIndexStart
==============
*/
r_double_index_t *R_CodeSurfIndexStart(GfxCodeSurfGlob *codeSurfGlob)
{
  return (r_double_index_t *)codeSurfGlob->indices;
}

/*
==============
R_CodeSurfQuadIter_Begin
==============
*/
GfxSpriteQuad *R_CodeSurfQuadIter_Begin(GfxCodeSurfGlob *codeSurfGlob, unsigned int quadIndexBegin)
{
  __int64 v3; 
  unsigned int quadLimit; 

  v3 = quadIndexBegin;
  if ( quadIndexBegin >= codeSurfGlob->quadLimit )
  {
    quadLimit = codeSurfGlob->quadLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 791, ASSERT_TYPE_ASSERT, "(unsigned)( quadIndexBegin ) < (unsigned)( codeSurfGlob->quadLimit )", "quadIndexBegin doesn't index codeSurfGlob->quadLimit\n\t%i not in [0, %i)", quadIndexBegin, quadLimit) )
      __debugbreak();
  }
  return &codeSurfGlob->quads[v3];
}

/*
==============
R_CodeSurfVertIter_Begin
==============
*/
GfxSpriteVertex *R_CodeSurfVertIter_Begin(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBegin)
{
  __int64 v3; 
  unsigned int vertLimit; 

  v3 = vertIndexBegin;
  if ( vertIndexBegin >= codeSurfGlob->vertLimit )
  {
    vertLimit = codeSurfGlob->vertLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( vertIndexBegin ) < (unsigned)( codeSurfGlob->vertLimit )", "vertIndexBegin doesn't index codeSurfGlob->vertLimit\n\t%i not in [0, %i)", vertIndexBegin, vertLimit) )
      __debugbreak();
  }
  return &codeSurfGlob->verts[v3];
}

/*
==============
R_EmitCodeSurfs
==============
*/
void R_EmitCodeSurfs(GfxCodeSurfList *codeSurfList, unsigned int codeSurfLimit, GfxCodeSurfListType surfList)
{
  __int64 codeTransShadowSurfCount; 
  const char *v7; 
  unsigned int v8; 
  __int64 codeEmissiveSurfCount; 
  const char *v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( codeSurfList->listType != surfList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 953, ASSERT_TYPE_ASSERT, "(codeSurfList->listType == surfList)", (const char *)&queryFormat, "codeSurfList->listType == surfList") )
    __debugbreak();
  if ( codeSurfList->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 954, ASSERT_TYPE_ASSERT, "(codeSurfList->count == 0)", (const char *)&queryFormat, "codeSurfList->count == 0") )
    __debugbreak();
  if ( !codeSurfList->surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 955, ASSERT_TYPE_ASSERT, "(codeSurfList->surfs != 0)", (const char *)&queryFormat, "codeSurfList->surfs != NULL") )
    __debugbreak();
  if ( (unsigned int)surfList >= GFX_CODE_SURFLIST_TYPE_COUNT )
  {
    LODWORD(v12) = surfList;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 956, ASSERT_TYPE_ASSERT, "(unsigned)( surfList ) < (unsigned)( GFX_CODE_SURFLIST_TYPE_COUNT )", "surfList doesn't index GFX_CODE_SURFLIST_TYPE_COUNT\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( surfList == GFX_CODE_SURFLIST_EMISSIVE )
  {
    codeEmissiveSurfCount = scene.codeEmissiveSurfCount;
    if ( scene.codeEmissiveSurfCount > codeSurfLimit )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 962, ASSERT_TYPE_ASSERT, "( scene.codeEmissiveSurfCount ) <= ( codeSurfLimit )", "%s <= %s\n\t%i, %i", "scene.codeEmissiveSurfCount", "codeSurfLimit", scene.codeEmissiveSurfCount, codeSurfLimit) )
        __debugbreak();
      codeEmissiveSurfCount = scene.codeEmissiveSurfCount;
    }
    v10 = j_va("emissive surfs: %d", codeEmissiveSurfCount);
    Sys_ProfBeginNamedEvent(0xFF708090, v10);
    v11 = R_StableSortSurfsWithSortOrder_NonAuto<GfxSortCodeSurfsInterface,GfxCodeSurf>(scene.codeEmissiveSurfs, scene.codeEmissiveSurfCount, codeSurfList->surfs);
    codeSurfList->count = v11;
    if ( v11 != scene.codeEmissiveSurfCount )
    {
      LODWORD(v14) = scene.codeEmissiveSurfCount;
      LODWORD(v13) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 965, ASSERT_TYPE_ASSERT, "( codeSurfList->count ) == ( scene.codeEmissiveSurfCount )", "%s == %s\n\t%i, %i", "codeSurfList->count", "scene.codeEmissiveSurfCount", v13, v14) )
        __debugbreak();
    }
    scene.codeEmissiveSurfCount = 0;
    goto LABEL_33;
  }
  if ( surfList == GFX_CODE_SURFLIST_SUNSHADOW_TRANS )
  {
    codeTransShadowSurfCount = scene.codeTransShadowSurfCount;
    if ( scene.codeTransShadowSurfCount > codeSurfLimit )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 973, ASSERT_TYPE_ASSERT, "( scene.codeTransShadowSurfCount ) <= ( codeSurfLimit )", "%s <= %s\n\t%i, %i", "scene.codeTransShadowSurfCount", "codeSurfLimit", scene.codeTransShadowSurfCount, codeSurfLimit) )
        __debugbreak();
      codeTransShadowSurfCount = scene.codeTransShadowSurfCount;
    }
    v7 = j_va("trans shadow surfs: %d", codeTransShadowSurfCount);
    Sys_ProfBeginNamedEvent(0xFF708090, v7);
    v8 = R_StableSortSurfsWithSortOrder_NonAuto<GfxSortCodeSurfsInterface,GfxCodeSurf>(scene.codeTransShadowSurfs, scene.codeTransShadowSurfCount, codeSurfList->surfs);
    codeSurfList->count = v8;
    if ( v8 != scene.codeTransShadowSurfCount )
    {
      LODWORD(v14) = scene.codeTransShadowSurfCount;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 976, ASSERT_TYPE_ASSERT, "( codeSurfList->count ) == ( scene.codeTransShadowSurfCount )", "%s == %s\n\t%i, %i", "codeSurfList->count", "scene.codeTransShadowSurfCount", v13, v14) )
        __debugbreak();
    }
    scene.codeTransShadowSurfCount = 0;
    scene.codeTransShadowSurfCountPrevFrame = codeSurfList->count;
LABEL_33:
    Sys_ProfEndNamedEvent();
    return;
  }
  LODWORD(v12) = surfList;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 984, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp(984): unhandled case %d in switch statement", v12) )
    __debugbreak();
}

/*
==============
R_EndCodeSurfs
==============
*/
void R_EndCodeSurfs(GfxCodeSurfGlob *codeSurfGlob, GfxCodeSurfUser user)
{
  unsigned int vertCount; 
  GfxMeshData *v5; 
  unsigned int vertSize; 
  unsigned int v7; 
  unsigned int total; 
  unsigned int indexCount; 
  GfxMeshData *v10; 
  unsigned int *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 

  codeSurfGlob->allowProcess = 0;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 217, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  *codeSurfGlob->codeSurfCountMain = codeSurfGlob->surfCount;
  vertCount = codeSurfGlob->vertCount;
  v5 = &frontEndDataOut->mesh[codeSurfGlob->surfList];
  vertSize = v5->vertSize;
  if ( vertSize )
  {
    total = v5->vb.total;
    if ( total % vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
      __debugbreak();
    v7 = total / v5->vertSize;
  }
  else
  {
    v7 = 0;
  }
  if ( vertCount > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 68, ASSERT_TYPE_ASSERT, "(vertCount <= R_GetMeshTotalVertexCount( mesh ))", (const char *)&queryFormat, "vertCount <= R_GetMeshTotalVertexCount( mesh )") )
    __debugbreak();
  v5->vb.used = vertCount * v5->vertSize;
  indexCount = codeSurfGlob->indexCount;
  v10 = &frontEndDataOut->mesh[codeSurfGlob->surfList];
  if ( indexCount > v10->totalIndexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 54, ASSERT_TYPE_ASSERT, "(indexCount <= R_GetMeshTotalIndexCount( mesh ))", (const char *)&queryFormat, "indexCount <= R_GetMeshTotalIndexCount( mesh )") )
    __debugbreak();
  v10->indexCount = indexCount;
  v11 = &codeSurfGlob->lightingCount[0][2];
  v12 = 90i64;
  v13 = 2i64;
  frontEndDataOut->codeSurfArgsCount[codeSurfGlob->surfList] = codeSurfGlob->argsCount;
  do
  {
    v14 = *(v11 - 2);
    v11 += 6;
    *(&frontEndDataOut->mesh[codeSurfGlob->surfList].indexCount + v12) = v14;
    *(&frontEndDataOut->mesh[codeSurfGlob->surfList].totalIndexCount + v12) = *(v11 - 7);
    *((_DWORD *)&frontEndDataOut->mesh[codeSurfGlob->surfList].ib + v12) = *(v11 - 6);
    *((_DWORD *)&frontEndDataOut->mesh[codeSurfGlob->surfList].ib + v12 + 1) = *(v11 - 5);
    *((_DWORD *)&frontEndDataOut->mesh[codeSurfGlob->surfList].indices + v12) = *(v11 - 4);
    v15 = v12 + 254i64 * (unsigned int)codeSurfGlob->surfList;
    v12 += 6i64;
    *((_DWORD *)&frontEndDataOut->mesh[0].indices + v15 + 1) = *(v11 - 3);
    --v13;
  }
  while ( v13 );
  frontEndDataOut->mesh[codeSurfGlob->surfList].perQuadDataCount = codeSurfGlob->quadCount;
  if ( scene.codeSurfUser[codeSurfGlob->surfList] != user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 231, ASSERT_TYPE_ASSERT, "( scene.codeSurfUser[codeSurfGlob->surfList] ) == ( user )", "%s == %s\n\t%i, %i", "scene.codeSurfUser[codeSurfGlob->surfList]", "user", scene.codeSurfUser[codeSurfGlob->surfList], user) )
    __debugbreak();
  scene.codeSurfUser[codeSurfGlob->surfList] = 0;
}

/*
==============
R_GetCodeSurfArgs
==============
*/
vec4_t *R_GetCodeSurfArgs(GfxCodeSurfGlob *codeSurfGlob, unsigned int argOffset)
{
  __int64 v3; 

  v3 = argOffset;
  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 527, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  return &codeSurfGlob->outCodeSurfArgsMain[v3];
}

/*
==============
R_GetCodeSurfIndices
==============
*/
r_double_index_t *R_GetCodeSurfIndices(const GfxCodeSurfGlob *codeSurfGlob)
{
  return (r_double_index_t *)codeSurfGlob->indices;
}

/*
==============
R_ReserveCodeSurfIndices
==============
*/
bool R_ReserveCodeSurfIndices(GfxCodeSurfGlob *codeSurfGlob, unsigned int indexCount, r_double_index_t **indicesOut)
{
  __int64 v6; 
  bool result; 

  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 351, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( (indexCount & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 352, ASSERT_TYPE_ASSERT, "(!(indexCount & 1))", (const char *)&queryFormat, "!(indexCount & 1)") )
    __debugbreak();
  v6 = codeSurfGlob->indexCount;
  if ( (unsigned int)v6 + indexCount <= codeSurfGlob->indexLimit )
  {
    result = 1;
    *indicesOut = (r_double_index_t *)&codeSurfGlob->indices[v6];
    codeSurfGlob->indexCount += indexCount;
  }
  else
  {
    R_WarnOncePerFrame(codeSurfGlob->indexLimitWarn);
    return 0;
  }
  return result;
}

/*
==============
R_ReserveCodeSurfVerts
==============
*/
char R_ReserveCodeSurfVerts(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, unsigned int *outVertIndexBase, unsigned __int16 *outVertIndexOffset)
{
  GfxWarningType vertLimitWarn; 
  unsigned int Int_Internal; 

  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 332, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( vertCount + codeSurfGlob->vertCount <= codeSurfGlob->vertLimit )
  {
    R_ReserveCodeSurfVertsInternal(outVertIndexBase, outVertIndexOffset, codeSurfGlob, vertCount);
    return 1;
  }
  else
  {
    vertLimitWarn = codeSurfGlob->vertLimitWarn;
    if ( vertLimitWarn == R_WARN_MAX_CODE_EMISSIVE_VERTS )
    {
      Int_Internal = Dvar_GetInt_Internal(r_emissive_surf_vert_limit);
      R_WarnOncePerFrame(codeSurfGlob->vertLimitWarn, Int_Internal);
    }
    else
    {
      R_WarnOncePerFrame(vertLimitWarn);
    }
    return 0;
  }
}

/*
==============
R_ReserveCodeSurfVertsInternal
==============
*/
void R_ReserveCodeSurfVertsInternal(unsigned int *outVertIndexBase, unsigned __int16 *outVertIndexOffset, GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount)
{
  unsigned int v8; 
  unsigned int vertIndexBase; 
  unsigned int v10; 

  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 263, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( vertCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 264, ASSERT_TYPE_ASSERT, "(vertCount <= GFX_CODESURF_VERT_INDEX_MAX)", (const char *)&queryFormat, "vertCount <= GFX_CODESURF_VERT_INDEX_MAX") )
    __debugbreak();
  v8 = codeSurfGlob->vertCount;
  if ( v8 + vertCount > codeSurfGlob->vertLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 268, ASSERT_TYPE_ASSERT, "(newVertTotal <= codeSurfGlob->vertLimit)", (const char *)&queryFormat, "newVertTotal <= codeSurfGlob->vertLimit") )
    __debugbreak();
  vertIndexBase = codeSurfGlob->vertIndexBase;
  if ( v8 < vertIndexBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 271, ASSERT_TYPE_ASSERT, "(oldVertTotal >= vertIndexBase)", (const char *)&queryFormat, "oldVertTotal >= vertIndexBase") )
    __debugbreak();
  v10 = v8 - vertIndexBase;
  if ( v8 - vertIndexBase + vertCount > 0xFFFF )
  {
    vertIndexBase = v8;
    codeSurfGlob->vertIndexBase = v8;
    v10 = 0;
  }
  *outVertIndexBase = vertIndexBase;
  *outVertIndexOffset = truncate_cast<unsigned short,unsigned int>(v10);
  codeSurfGlob->vertCount = v8 + vertCount;
}

/*
==============
R_ReserveQuadCodeSurfBuffers
==============
*/
bool R_ReserveQuadCodeSurfBuffers(GfxCodeSurfBuffers *outBuffers, GfxCodeSurfGlob *codeSurfGlob, unsigned int quadCount, unsigned int argCount)
{
  bool result; 
  unsigned int argsCount; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int quadIndexBase; 
  unsigned int v13; 
  unsigned __int16 v14; 
  unsigned __int16 *indices; 
  unsigned int v16; 
  unsigned int indexCount; 

  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 487, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( quadCount > 0x3FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 488, ASSERT_TYPE_ASSERT, "(quadCount <= GFX_CODESURF_QUAD_INDEX_MAX)", (const char *)&queryFormat, "quadCount <= GFX_CODESURF_QUAD_INDEX_MAX") )
    __debugbreak();
  if ( quadCount + codeSurfGlob->quadCount <= codeSurfGlob->quadLimit )
  {
    indexCount = codeSurfGlob->indexCount;
    v16 = indexCount + 6 * quadCount;
    if ( v16 <= codeSurfGlob->indexLimit )
    {
      argsCount = codeSurfGlob->argsCount;
      v10 = argsCount + argCount;
      if ( argsCount + argCount <= codeSurfGlob->argsLimit )
      {
        if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 306, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
          __debugbreak();
        if ( quadCount > 0x3FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 307, ASSERT_TYPE_ASSERT, "(quadCount <= GFX_CODESURF_QUAD_INDEX_MAX)", (const char *)&queryFormat, "quadCount <= GFX_CODESURF_QUAD_INDEX_MAX") )
          __debugbreak();
        v11 = codeSurfGlob->quadCount;
        if ( v11 + quadCount > codeSurfGlob->quadLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 311, ASSERT_TYPE_ASSERT, "(newQuadTotal <= codeSurfGlob->quadLimit)", (const char *)&queryFormat, "newQuadTotal <= codeSurfGlob->quadLimit") )
          __debugbreak();
        quadIndexBase = codeSurfGlob->quadIndexBase;
        if ( v11 < quadIndexBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 314, ASSERT_TYPE_ASSERT, "(oldQuadTotal >= quadIndexBase)", (const char *)&queryFormat, "oldQuadTotal >= quadIndexBase") )
          __debugbreak();
        v13 = v11 - quadIndexBase;
        if ( v11 - quadIndexBase + quadCount > 0x3FFF )
        {
          quadIndexBase = v11;
          codeSurfGlob->quadIndexBase = v11;
          v13 = 0;
        }
        v14 = truncate_cast<unsigned short,unsigned int>(v13);
        indices = codeSurfGlob->indices;
        codeSurfGlob->quadCount = v11 + quadCount;
        outBuffers->vertIndexOffset = 4 * v14;
        outBuffers->indices = (r_double_index_t *)&indices[indexCount];
        outBuffers->vertIndexBase = 4 * quadIndexBase;
        outBuffers->argOffset = argsCount;
        codeSurfGlob->indexCount = v16;
        result = 1;
        codeSurfGlob->argsCount = v10;
      }
      else
      {
        R_WarnOncePerFrame(codeSurfGlob->argsLimitWarn);
        return 0;
      }
    }
    else
    {
      R_WarnOncePerFrame(codeSurfGlob->indexLimitWarn);
      return 0;
    }
  }
  else
  {
    R_WarnOncePerFrame(codeSurfGlob->quadLimitWarn);
    return 0;
  }
  return result;
}

/*
==============
R_ReserveVertCodeSurfBuffers
==============
*/
bool R_ReserveVertCodeSurfBuffers(GfxCodeSurfBuffers *outBuffers, GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, unsigned int indexCount, unsigned int argCount)
{
  GfxWarningType vertLimitWarn; 
  unsigned int Int_Internal; 
  bool result; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int argsCount; 
  unsigned int v15; 
  unsigned __int16 *indices; 
  r_double_index_t *v17; 
  unsigned __int16 outVertIndexOffset; 
  unsigned int outVertIndexBase; 

  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 443, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( (indexCount & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 444, ASSERT_TYPE_ASSERT, "(!(indexCount & 1))", (const char *)&queryFormat, "!(indexCount & 1)") )
    __debugbreak();
  if ( vertCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 445, ASSERT_TYPE_ASSERT, "(vertCount <= GFX_CODESURF_VERT_INDEX_MAX)", (const char *)&queryFormat, "vertCount <= GFX_CODESURF_VERT_INDEX_MAX") )
    __debugbreak();
  if ( vertCount + codeSurfGlob->vertCount <= codeSurfGlob->vertLimit )
  {
    v12 = codeSurfGlob->indexCount;
    v13 = v12 + indexCount;
    if ( v13 <= codeSurfGlob->indexLimit )
    {
      argsCount = codeSurfGlob->argsCount;
      v15 = argsCount + argCount;
      if ( argsCount + argCount <= codeSurfGlob->argsLimit )
      {
        R_ReserveCodeSurfVertsInternal(&outVertIndexBase, &outVertIndexOffset, codeSurfGlob, vertCount);
        indices = codeSurfGlob->indices;
        outBuffers->argOffset = argsCount;
        v17 = (r_double_index_t *)&indices[v12];
        outBuffers->vertIndexBase = outVertIndexBase;
        outBuffers->vertIndexOffset = outVertIndexOffset;
        result = 1;
        outBuffers->indices = v17;
        codeSurfGlob->indexCount = v13;
        codeSurfGlob->argsCount = v15;
      }
      else
      {
        R_WarnOncePerFrame(codeSurfGlob->argsLimitWarn);
        return 0;
      }
    }
    else
    {
      R_WarnOncePerFrame(codeSurfGlob->indexLimitWarn);
      return 0;
    }
  }
  else
  {
    vertLimitWarn = codeSurfGlob->vertLimitWarn;
    if ( vertLimitWarn == R_WARN_MAX_CODE_EMISSIVE_VERTS )
    {
      Int_Internal = Dvar_GetInt_Internal(r_emissive_surf_vert_limit);
      R_WarnOncePerFrame(codeSurfGlob->vertLimitWarn, Int_Internal);
    }
    else
    {
      R_WarnOncePerFrame(vertLimitWarn);
    }
    return 0;
  }
  return result;
}

/*
==============
R_ReturnCodeSurfVerts
==============
*/
void R_ReturnCodeSurfVerts(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, const GfxSpriteVertex *vertsIter)
{
  unsigned int v5; 
  unsigned int v6; 

  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 342, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( codeSurfGlob->vertCount < vertCount )
  {
    v6 = vertCount;
    v5 = codeSurfGlob->vertCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 343, ASSERT_TYPE_ASSERT, "( codeSurfGlob->vertCount ) >= ( vertCount )", "%s >= %s\n\t%i, %i", "codeSurfGlob->vertCount", "vertCount", v5, v6) )
      __debugbreak();
  }
  codeSurfGlob->vertCount -= vertCount;
  if ( codeSurfGlob->vertCount < codeSurfGlob->vertIndexBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 345, ASSERT_TYPE_ASSERT, "(codeSurfGlob->vertCount >= codeSurfGlob->vertIndexBase)", (const char *)&queryFormat, "codeSurfGlob->vertCount >= codeSurfGlob->vertIndexBase") )
    __debugbreak();
}

