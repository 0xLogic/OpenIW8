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
  __int64 v17; 
  __int64 v41; 
  _BYTE v77[24]; 
  vec4_t solution_8; 
  vec4_t mulVec; 
  tmat44_t<vec4_t> out; 
  char v81; 
  tmat44_t<vec4_t> in; 
  int v85[22]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovss  xmm9, cs:__real@ff7fffff
    vucomiss xmm9, dword ptr [r8+0Ch]
  }
  _RBX = bounds;
  if ( (unsigned __int64)v77 != _security_cookie )
  {
    __asm { vucomiss xmm9, dword ptr [r8+10h] }
    if ( (unsigned __int64)v77 != _security_cookie )
    {
      __asm { vucomiss xmm9, dword ptr [r8+14h] }
      if ( (unsigned __int64)v77 != _security_cookie )
      {
        _RAX = &backEndData->sunShadow.partition[3];
        __asm { vmovaps xmmword ptr [r11-28h], xmm6 }
        _RCX = &v81;
        __asm { vmovaps xmmword ptr [r11-38h], xmm7 }
        v17 = 3i64;
        __asm
        {
          vmovaps xmmword ptr [r11-48h], xmm8
          vmovaps xmmword ptr [r11-68h], xmm10
          vmovaps xmmword ptr [r11-78h], xmm11
          vmovaps xmmword ptr [r11-88h], xmm12
          vmovaps xmmword ptr [r11-98h], xmm13
        }
        do
        {
          _RCX += 128;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+70h]
          }
          _RAX = (GfxSunShadowPartition *)((char *)_RAX + 128);
          __asm
          {
            vmovups ymmword ptr [rcx-80h], ymm0
            vmovups ymm0, ymmword ptr [rax-60h]
            vmovups ymmword ptr [rcx-60h], ymm0
            vmovups ymm0, ymmword ptr [rax-40h]
            vmovups ymmword ptr [rcx-40h], ymm0
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rcx-20h], xmm0
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          --v17;
        }
        while ( v17 );
        MatrixTranspose44Aligned(&in, &out);
        __asm
        {
          vmovss  xmm5, dword ptr [rbx]
          vaddss  xmm6, xmm5, dword ptr [rbx+0Ch]
          vsubss  xmm5, xmm5, dword ptr [rbx+0Ch]
          vmovss  xmm3, dword ptr [rbx+4]
          vaddss  xmm7, xmm3, dword ptr [rbx+10h]
          vsubss  xmm2, xmm3, dword ptr [rbx+10h]
          vmovss  xmm1, dword ptr [rbx+8]
          vaddss  xmm8, xmm1, dword ptr [rbx+14h]
          vsubss  xmm4, xmm1, dword ptr [rbx+14h]
          vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
          vmovss  xmm13, cs:__real@3f000000
          vmovss  [rbp+200h+var_100], xmm6
          vmovss  [rbp+200h+var_E8], xmm6
          vmovss  [rbp+200h+var_DC], xmm6
          vmovss  [rbp+200h+var_C4], xmm6
          vmovss  xmm6, cs:__real@7f7fffff
          vmovss  [rbp+200h+var_FC], xmm7
          vmovss  [rbp+200h+var_F8], xmm8
          vmovss  [rbp+200h+var_F0], xmm7
          vmovss  [rbp+200h+var_EC], xmm8
          vmovss  [rbp+200h+var_E0], xmm8
          vmovss  [rbp+200h+var_D8], xmm7
          vmovss  [rbp+200h+var_B4], xmm7
          vmovss  xmm7, cs:__real@3f800000
          vmovss  [rbp+200h+var_A4], xmm8
          vmovaps xmm11, xmm6
          vmovaps xmm12, xmm6
          vmovss  [rbp+200h+var_F4], xmm5
          vmovss  [rbp+200h+var_E4], xmm2
          vmovss  [rbp+200h+var_D4], xmm4
          vmovss  [rbp+200h+var_D0], xmm5
          vmovss  [rbp+200h+var_CC], xmm2
          vmovss  [rbp+200h+var_C8], xmm4
          vmovss  [rbp+200h+var_C0], xmm2
          vmovss  [rbp+200h+var_BC], xmm4
          vmovss  [rbp+200h+var_B8], xmm5
          vmovss  [rbp+200h+var_B0], xmm4
          vmovss  [rbp+200h+var_AC], xmm5
          vmovss  [rbp+200h+var_A8], xmm2
          vmovaps xmm8, xmm9
          vmovaps xmm10, xmm9
          vmovups xmmword ptr [rsp+300h+solution+8], xmm0
        }
        _RBX = v85;
        v41 = 8i64;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-8]
            vmovss  xmm1, dword ptr [rbx-4]
            vmovss  xmm2, dword ptr [rbx]
            vmovss  dword ptr [rsp+300h+mulVec], xmm0
            vmovss  dword ptr [rsp+300h+mulVec+4], xmm1
            vmovss  dword ptr [rsp+300h+mulVec+8], xmm2
            vmovss  dword ptr [rsp+300h+mulVec+0Ch], xmm7
          }
          MatrixVecMultiply(&out, &mulVec, &solution_8);
          __asm
          {
            vdivss  xmm3, xmm7, [rsp+300h+var_2D4]
            vmulss  xmm1, xmm3, dword ptr [rsp+300h+solution+0Ch]
            vmulss  xmm4, xmm3, dword ptr [rsp+300h+solution+8]
            vmulss  xmm0, xmm3, [rsp+300h+var_2D8]
            vmovss  dword ptr [rsp+300h+solution+0Ch], xmm1
            vaddss  xmm1, xmm4, xmm7
            vmovss  [rsp+300h+var_2D8], xmm0
            vmulss  xmm0, xmm1, xmm13; val
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm2, xmm7; max
            vmovss  dword ptr [rsp+300h+solution+8], xmm4
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm1, xmm13, dword ptr [rsp+300h+solution+0Ch]
            vmovss  dword ptr [rsp+300h+solution+8], xmm0
            vsubss  xmm0, xmm13, xmm1; val
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm2, xmm7; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          _RBX += 3;
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+300h+solution+8]
            vmovss  dword ptr [rsp+300h+solution+0Ch], xmm0
            vmaxss  xmm8, xmm0, xmm8
            vminss  xmm11, xmm0, xmm11
            vmovss  xmm0, [rsp+300h+var_2D8]
            vmaxss  xmm10, xmm0, xmm10
            vminss  xmm12, xmm0, xmm12
            vmaxss  xmm9, xmm1, xmm9
            vminss  xmm6, xmm1, xmm6
          }
          --v41;
        }
        while ( v41 );
        _RAX = codeSurfGlob->codeSurfsMain;
        __asm
        {
          vmovaps xmm13, [rsp+300h+var_98+8]
          vmovaps xmm7, [rsp+300h+var_38+8]
        }
        _RCX = (unsigned __int64)codeSurfGlob->surfCount << 6;
        __asm
        {
          vmovss  dword ptr [rcx+rax+30h], xmm8
          vmovaps xmm8, [rsp+300h+var_48+8]
          vmovss  dword ptr [rcx+rax+34h], xmm10
          vmovaps xmm10, [rsp+300h+var_68+8]
          vmovss  dword ptr [rcx+rax+2Ch], xmm9
        }
        _RAX = codeSurfGlob->codeSurfsMain;
        _RCX = (unsigned __int64)codeSurfGlob->surfCount << 6;
        __asm
        {
          vmovss  dword ptr [rcx+rax+20h], xmm6
          vmovaps xmm6, xmmword ptr [rsp+300h+var_28+8]
          vmovss  dword ptr [rcx+rax+24h], xmm11
          vmovaps xmm11, [rsp+300h+var_78+8]
          vmovss  dword ptr [rcx+rax+28h], xmm12
          vmovaps xmm12, [rsp+300h+var_88+8]
        }
        codeSurfGlob->codeSurfsMain[(unsigned __int64)codeSurfGlob->surfCount].translucentShadowDensity = codeSurfGlob->perEmitterData->translucentShadowParams.v[0];
      }
    }
  }
  __asm { vmovaps xmm9, [rsp+300h+var_58+8] }
}

/*
==============
R_AddCode3DQuadSurf
==============
*/
void R_AddCode3DQuadSurf(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBase, unsigned __int16 vertIndexOffset, r_double_index_t *indices, const vec3_t *center, const tmat33_t<vec3_t> *axis, float width, float height, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  __int64 v33; 
  __int64 v130; 
  r_double_index_t v131; 
  unsigned int v132; 
  unsigned int v133; 
  unsigned int v134; 
  unsigned int v135; 
  GfxCodeSurfArgs codeSurfArgs; 
  __int64 v137; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v137;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  if ( !indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 651, ASSERT_TYPE_ASSERT, "(indices)", (const char *)&queryFormat, "indices") )
    __debugbreak();
  v131.value[0] = vertIndexOffset;
  v131.value[1] = vertIndexOffset + 1;
  *indices = v131;
  v131.value[0] = vertIndexOffset + 2;
  v131.value[1] = vertIndexOffset + 2;
  indices[1] = v131;
  v131.value[0] = vertIndexOffset + 3;
  codeSurfArgs.indices = indices;
  v131.value[1] = vertIndexOffset;
  indices[2] = v131;
  codeSurfArgs.material = material;
  codeSurfArgs.fxName = "(code)";
  codeSurfArgs.vertIndexBase = vertIndexBase;
  *(_QWORD *)&codeSurfArgs.indexCount = 6i64;
  codeSurfArgs.argCount = 0;
  codeSurfArgs.sortOrder = 0;
  codeSurfArgs.flags = 0;
  R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vmovss  xmm1, [rbp+30h+height]
    vmulss  xmm13, xmm2, [rbp+30h+width]
    vmulss  xmm15, xmm1, cs:__real@bf000000
  }
  v33 = vertIndexBase + vertIndexOffset;
  __asm { vmulss  xmm14, xmm1, xmm2 }
  if ( (unsigned int)v33 >= codeSurfGlob->vertLimit )
  {
    LODWORD(v130) = v33;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( vertIndexBegin ) < (unsigned)( codeSurfGlob->vertLimit )", "vertIndexBegin doesn't index codeSurfGlob->vertLimit\n\t%i not in [0, %i)", v130, codeSurfGlob->vertLimit) )
      __debugbreak();
  }
  _R8 = axis;
  __asm
  {
    vxorps  xmm7, xmm15, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm14, dword ptr [r8+18h]
    vmulss  xmm0, xmm13, dword ptr [r8+0Ch]
    vmovss  xmm5, dword ptr [r8+10h]
    vmovss  xmm3, dword ptr [r8+1Ch]
    vmovss  xmm6, dword ptr [r8+14h]
    vmovss  xmm4, dword ptr [r8+20h]
    vxorps  xmm11, xmm13, cs:__xmm@80000000800000008000000080000000
    vaddss  xmm2, xmm1, xmm0
    vaddss  xmm1, xmm2, dword ptr [rdx]
    vmulss  xmm2, xmm14, xmm3
    vmulss  xmm0, xmm13, xmm5
  }
  _R9 = &codeSurfGlob->verts[v33];
  __asm
  {
    vmovss  dword ptr [r9], xmm1
    vaddss  xmm1, xmm2, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [r9+4], xmm2
    vmulss  xmm1, xmm14, xmm4
    vmulss  xmm0, xmm13, xmm6
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r9+8], xmm2
  }
  _R9->extraData = 0;
  _R9->color = *color;
  *(_QWORD *)&_R9->normal.packed = 0i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+30h+s0], 0
    vinsertps xmm0, xmm0, [rbp+30h+t0], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+130h+var_F0], xmm0
  }
  _R9->texCoord.packed = v132;
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [r8+18h]
    vmulss  xmm0, xmm11, dword ptr [r8+0Ch]
    vmovss  xmm4, dword ptr [r8+10h]
    vmovss  xmm3, dword ptr [r8+1Ch]
    vmovss  xmm6, dword ptr [r8+14h]
    vmovss  xmm5, dword ptr [r8+20h]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx]
    vmovss  dword ptr [r9+30h], xmm2
    vmulss  xmm3, xmm7, xmm3
    vmulss  xmm0, xmm11, xmm4
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [r9+34h], xmm2
    vmulss  xmm3, xmm7, xmm5
    vxorps  xmm7, xmm14, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm11, xmm6
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r9+38h], xmm2
  }
  _R9[1].extraData = 0;
  _R9[1].color = *color;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+30h+s1], 0
    vinsertps xmm0, xmm0, [rbp+30h+t0], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+130h+var_F0], xmm0
  }
  _R9[1].texCoord.packed = v133;
  *(_QWORD *)&_R9[1].normal.packed = 0i64;
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [r8+18h]
    vmulss  xmm0, xmm11, dword ptr [r8+0Ch]
    vmovss  xmm4, dword ptr [r8+10h]
    vmovss  xmm6, dword ptr [r8+14h]
    vmovss  xmm5, dword ptr [r8+20h]
    vmovss  xmm3, dword ptr [r8+1Ch]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx]
    vmovss  dword ptr [r9+60h], xmm2
  }
  _R11 = &v138;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmulss  xmm3, xmm7, xmm3
    vmulss  xmm0, xmm11, xmm4
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [r9+64h], xmm2
    vmulss  xmm0, xmm11, xmm6
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmulss  xmm3, xmm7, xmm5
    vmovaps xmm7, xmmword ptr [r11-20h]
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r9+68h], xmm2
  }
  _R9[2].extraData = 0;
  _R9[2].color = *color;
  *(_QWORD *)&_R9[2].normal.packed = 0i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+30h+s1], 0
    vinsertps xmm0, xmm0, [rbp+30h+t1], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+130h+var_F0], xmm0
  }
  _R9[2].texCoord.packed = v134;
  __asm
  {
    vmulss  xmm0, xmm13, dword ptr [r8+0Ch]
    vmulss  xmm1, xmm15, dword ptr [r8+18h]
    vmovss  xmm6, dword ptr [r8+20h]
    vmovss  xmm4, dword ptr [r8+10h]
    vmovss  xmm3, dword ptr [r8+1Ch]
    vmovss  xmm5, dword ptr [r8+14h]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx]
    vmovss  dword ptr [r9+90h], xmm2
    vmulss  xmm0, xmm13, xmm4
    vmulss  xmm3, xmm15, xmm3
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [r9+94h], xmm2
    vmulss  xmm0, xmm15, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmulss  xmm3, xmm13, xmm5
    vmovaps xmm13, xmmword ptr [r11-70h]
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [r9+98h], xmm2
  }
  _R9[3].extraData = 0;
  _R9[3].color = *color;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+30h+s0], 0
    vinsertps xmm0, xmm0, [rbp+30h+t1], 30h+var_20
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+130h+var_F0], xmm0
  }
  _R9[3].texCoord.packed = v135;
  *(_QWORD *)&_R9[3].normal.packed = 0i64;
  __asm { vmovaps xmm15, xmmword ptr [r11-90h] }
}

/*
==============
R_AddCode3DQuadVertsSurf
==============
*/
void R_AddCode3DQuadVertsSurf(GfxCodeSurfGlob *codeSurfGlob, unsigned int vertIndexBase, unsigned __int16 vertIndexOffset, r_double_index_t *indices, const vec3_t (*verts)[4], float s0, float t0, float s1, float t1, const vec4_t *color, Material *material, unsigned __int8 flags, unsigned int sortOrder, const GfxMatrix *worldMatrix, const GfxMatrix *invViewMatrix, unsigned int argOffset, unsigned int argCount)
{
  __int64 v33; 
  GfxSpriteVertex *v77; 
  __int64 v235; 
  r_double_index_t v236; 
  unsigned int v237; 
  unsigned int v238; 
  unsigned int v239; 
  unsigned int v240; 
  unsigned int v241; 
  unsigned int v242; 
  unsigned int v243; 
  unsigned int v244; 
  unsigned int v245; 
  unsigned int v246; 
  unsigned int v247; 
  unsigned int v248; 
  GfxCodeSurfArgs codeSurfArgs; 
  __int128 v250; 
  char v251; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
  }
  _R13 = verts;
  if ( !indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 713, ASSERT_TYPE_ASSERT, "(indices)", (const char *)&queryFormat, "indices") )
    __debugbreak();
  v236.value[1] = vertIndexOffset + 1;
  v236.value[0] = vertIndexOffset;
  *indices = v236;
  v236.value[0] = vertIndexOffset + 2;
  v236.value[1] = vertIndexOffset + 2;
  indices[1] = v236;
  v236.value[0] = vertIndexOffset + 3;
  v236.value[1] = vertIndexOffset;
  indices[2] = v236;
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
  v33 = vertIndexBase + vertIndexOffset;
  if ( (unsigned int)v33 >= codeSurfGlob->vertLimit )
  {
    LODWORD(v235) = v33;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( vertIndexBegin ) < (unsigned)( codeSurfGlob->vertLimit )", "vertIndexBegin doesn't index codeSurfGlob->vertLimit\n\t%i not in [0, %i)", v235, codeSurfGlob->vertLimit) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm0, dword ptr [r13+0Ch]
    vsubss  xmm11, xmm0, dword ptr [r13+0]
    vmovss  xmm0, dword ptr [r13+14h]
    vsubss  xmm9, xmm0, dword ptr [r13+8]
    vmovss  xmm0, dword ptr [r13+24h]
    vsubss  xmm5, xmm0, dword ptr [r13+0]
    vmovss  xmm1, dword ptr [r13+10h]
    vsubss  xmm10, xmm1, dword ptr [r13+4]
    vmovss  xmm0, dword ptr [r13+2Ch]
    vsubss  xmm3, xmm0, dword ptr [r13+8]
    vmovss  xmm1, dword ptr [r13+28h]
    vsubss  xmm4, xmm1, dword ptr [r13+4]
    vmulss  xmm1, xmm10, xmm3
    vmulss  xmm3, xmm11, xmm3
    vmulss  xmm0, xmm5, xmm9
    vsubss  xmm6, xmm3, xmm0
    vmulss  xmm2, xmm4, xmm9
    vsubss  xmm8, xmm2, xmm1
    vmulss  xmm2, xmm10, xmm5
    vmulss  xmm1, xmm11, xmm4
    vsubss  xmm5, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm3, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm12, xmm8, xmm1
    vmulss  xmm13, xmm6, xmm1
    vmulss  xmm14, xmm5, xmm1
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
  }
  v77 = &codeSurfGlob->verts[v33];
  __asm
  {
    vmulss  xmm11, xmm11, xmm1
    vmulss  xmm10, xmm10, xmm1
    vmulss  xmm9, xmm9, xmm1
  }
  MatrixTransformPosition44((const vec3_t *)verts, &worldMatrix->m, &v77->xyz);
  v77->extraData = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+70h+s0], 0
    vinsertps xmm0, xmm0, [rbp+70h+t0], 10h
  }
  v77->color = *color;
  __asm
  {
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77->texCoord.packed = v237;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm12
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmmword ptr [rbp-80h], xmm5
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77->normal.packed = v238;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm11
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77->tangentBinormalSign.packed = v239;
  __asm { vmovups xmmword ptr [rbp-80h], xmm5 }
  MatrixTransformPosition44(&(*verts)[1], &worldMatrix->m, &v77[1].xyz);
  v77[1].extraData = 0;
  v77[1].color = *color;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+70h+s1], 0
    vinsertps xmm0, xmm0, [rbp+70h+t0], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[1].texCoord.packed = v240;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm12
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vmovups xmmword ptr [rbp-80h], xmm5
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[1].normal.packed = v241;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm11
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[1].tangentBinormalSign.packed = v242;
  __asm { vmovups xmmword ptr [rbp-80h], xmm5 }
  MatrixTransformPosition44(&(*verts)[2], &worldMatrix->m, &v77[2].xyz);
  v77[2].extraData = 0;
  v77[2].color = *color;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+70h+s1], 0
    vinsertps xmm0, xmm0, [rbp+70h+t1], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[2].texCoord.packed = v243;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm12
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vmovups xmmword ptr [rbp-80h], xmm5
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[2].normal.packed = v244;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm11
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[2].tangentBinormalSign.packed = v245;
  __asm { vmovups xmmword ptr [rbp-80h], xmm5 }
  MatrixTransformPosition44(&(*verts)[3], &worldMatrix->m, &v77[3].xyz);
  v77[3].extraData = 0;
  v77[3].color = *color;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, [rbp+70h+s0], 0
    vinsertps xmm0, xmm0, [rbp+70h+t1], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[3].texCoord.packed = v246;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm12
    vinsertps xmm5, xmm5, xmm13, 10h
    vinsertps xmm5, xmm5, xmm14, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vmovups xmmword ptr [rbp-80h], xmm5
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[3].normal.packed = v247;
  HIDWORD(v250) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-80h]
    vmovss  xmm5, xmm5, xmm11
    vinsertps xmm5, xmm5, xmm10, 10h
    vinsertps xmm5, xmm5, xmm9, 20h ; ' '
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  dword ptr [rsp+170h+var_130], xmm0
  }
  v77[3].tangentBinormalSign.packed = v248;
  _R11 = &v251;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
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
  _RBX = codeSurfArgs->material;
  indices = codeSurfArgs->indices;
  indexCount = codeSurfArgs->indexCount;
  argOffset = codeSurfArgs->argOffset;
  argCount = codeSurfArgs->argCount;
  fxName = codeSurfArgs->fxName;
  if ( !indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 579, ASSERT_TYPE_ASSERT, "(indexCount)", (const char *)&queryFormat, "indexCount") )
    __debugbreak();
  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 580, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !_RBX->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
    __debugbreak();
  if ( !*_RBX->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
    __debugbreak();
  p1_low = LOWORD(_RBX->drawSurf.packed.p1);
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(v26) = rgp.materialCount;
    LODWORD(v25) = LOWORD(_RBX->drawSurf.packed.p1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 584, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( (uint)material->drawSurf.fields.materialSortedIndex ) == material)", (const char *)&queryFormat, "R_GetSortedMaterial( (uint)material->drawSurf.fields.materialSortedIndex ) == material") )
    __debugbreak();
  if ( rg.distortion )
    goto LABEL_45;
  if ( !_RBX->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 655, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  if ( (_RBX->techniqueSet->flags & 0x800000000i64) == 0 )
  {
LABEL_45:
    if ( codeSurfGlob->surfCount < codeSurfGlob->surfLimit )
    {
      surfList = codeSurfGlob->surfList;
      if ( surfList )
      {
        if ( surfList == GFX_CODE_SURFLIST_SUNSHADOW_TRANS && !Material_HasTechnique(_RBX, TECHNIQUE_BUILD_TRANS_SHADOWMAP) )
        {
          R_WarnOncePerFrame(R_WARN_NONSHADOW_FX_MATERIAL, _RBX->name, fxName);
          goto LABEL_59;
        }
      }
      else
      {
        if ( !Material_HasTechnique(_RBX, TECHNIQUE_EMISSIVE) )
        {
          R_WarnOncePerFrame(R_WARN_NONEMISSIVE_FX_MATERIAL, _RBX->name, fxName);
          goto LABEL_59;
        }
        R_AccumulateMaterialRenderTechflagsEmissiveTech(_RBX, codeSurfGlob->matRenderFeatures);
      }
      v19 = codeSurfGlob->surfCount++;
      v20 = &codeSurfGlob->codeSurfsMain[(unsigned __int64)v19];
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+28h]
        vpextrq rax, xmm0, 1
      }
      *(_WORD *)&v20->drawGroup.fields = _RAX;
      v20->drawGroup.packed &= ~0x10000u;
      v23 = v20->drawGroup.packed & 0xFE33FFFF | (32 * (_RBX->materialType & 0x2000 | 0x18000));
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

  perEmitterDataCount = codeSurfGlob->perEmitterDataCount;
  _R10 = data;
  if ( perEmitterDataCount < codeSurfGlob->perEmitterDataLimit )
  {
    *outEmitterDataIndex = perEmitterDataCount;
    ++codeSurfGlob->perEmitterDataCount;
    __asm { vmovups xmm0, xmmword ptr [r10] }
    _RDX = &codeSurfGlob->perEmitterData[*outEmitterDataIndex];
    result = 1;
    __asm
    {
      vmovups xmmword ptr [rdx], xmm0
      vmovups xmm1, xmmword ptr [r10+10h]
      vmovups xmmword ptr [rdx+10h], xmm1
      vmovups xmm0, xmmword ptr [r10+20h]
      vmovups xmmword ptr [rdx+20h], xmm0
      vmovups xmm1, xmmword ptr [r10+30h]
      vmovups xmmword ptr [rdx+30h], xmm1
      vmovups xmm0, xmmword ptr [r10+40h]
      vmovups xmmword ptr [rdx+40h], xmm0
      vmovups xmm1, xmmword ptr [r10+50h]
      vmovups xmmword ptr [rdx+50h], xmm1
      vmovups xmm0, xmmword ptr [r10+60h]
      vmovups xmmword ptr [rdx+60h], xmm0
      vmovups xmm0, xmmword ptr [r10+70h]
      vmovups xmmword ptr [rdx+70h], xmm0
      vmovups xmm1, xmmword ptr [r10+80h]
      vmovups xmmword ptr [rdx+80h], xmm1
      vmovups xmm0, xmmword ptr [r10+90h]
      vmovups xmmword ptr [rdx+90h], xmm0
      vmovups xmm1, xmmword ptr [r10+0A0h]
      vmovups xmmword ptr [rdx+0A0h], xmm1
      vmovups xmm0, xmmword ptr [r10+0B0h]
      vmovups xmmword ptr [rdx+0B0h], xmm0
    }
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
  __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int Offset; 
  int v30; 
  __int64 v35; 
  GfxMultiLightGridFXLightingBuffers *lightGridBuffers; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v46; 
  GfxMultiLightGridFXLightingBuffers *v47; 
  __int64 v48; 
  int v49; 
  GfxMultiLightGridFXLightingBuffers *v50; 
  int v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  GfxMultiLightGridFXLightingBuffers *v55; 
  int v56; 
  volatile signed __int32 *v57; 
  signed __int32 v58; 
  GfxMultiLightGridFXLightingBuffers *v59; 
  unsigned int v61; 
  int v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  char v66; 
  int v68; 
  int v69; 

  _EBP = activeLightGridsBitmask;
  v11 = lightingLevel;
  v12 = lightingType;
  if ( !codeSurfGlob->allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 368, ASSERT_TYPE_ASSERT, "(codeSurfGlob->allowProcess)", (const char *)&queryFormat, "codeSurfGlob->allowProcess") )
    __debugbreak();
  if ( (unsigned int)v12 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 369, ASSERT_TYPE_ASSERT, "(lightingType > GFX_MESH_LIGHTING_NONE && lightingType < GFX_MESH_LIGHTING_COUNT)", (const char *)&queryFormat, "lightingType > GFX_MESH_LIGHTING_NONE && lightingType < GFX_MESH_LIGHTING_COUNT") )
    __debugbreak();
  if ( (unsigned int)v11 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 370, ASSERT_TYPE_ASSERT, "(lightingLevel < 6)", (const char *)&queryFormat, "lightingLevel < GFX_MESH_DATA_LIGHTMAP_LEVELS") )
    __debugbreak();
  v64 = v11;
  v14 = v11 + 6 * v12;
  v15 = v12;
  v16 = v11;
  if ( codeSurfGlob->lightingCount[0][v14] + 1 > codeSurfGlob->lightingLimit[0][v14] )
  {
    R_WarnOncePerFrame(R_WARN_FX_LIGHTING_INPUT_FULL, (unsigned int)v12, (unsigned int)v11);
    return 0;
  }
  Offset = Pow2TexturePacker<6,512>::GetOffset(codeSurfGlob->lightmapPacker[v12], v11);
  if ( Offset == -1 )
  {
    R_WarnOncePerFrame(R_WARN_FX_LIGHTMAP_FULL, (unsigned int)v12, (unsigned int)v11);
    return 0;
  }
  __asm
  {
    vmovss  xmm4, cs:__real@3b000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
  }
  _RCX = outLightmapU;
  __asm
  {
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, cs:__real@3a800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rcx], xmm2
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = outLightmapV;
  __asm
  {
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, cs:__real@3a800000
    vmovss  dword ptr [rax], xmm2
  }
  _RAX = outLightmapD;
  v30 = 1 << v11;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
    vmulss  xmm1, xmm0, xmm4
    vsubss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rax], xmm2
  }
  v62 = 1 << v11;
  *outLightmapOffset = Offset;
  v35 = (int)codeSurfGlob->lightingCount[0][v14];
  v65 = v35;
  *lightIter = &codeSurfGlob->lightingData[0][v14][v35];
  ++codeSurfGlob->lightingCount[0][v14];
  lightGridBuffers = codeSurfGlob->lightGridBuffers;
  if ( lightGridBuffers )
  {
    v37 = 0;
    lightGridBuffers->lightGridsActive[v12][v11][v35] = _EBP;
    if ( _EBP )
    {
      v38 = 5 * (v11 + 2 * (3 * v12 + 21));
      v63 = v38;
      v39 = v11 + 2 * (3 * v12 + 78);
      v68 = (int)v35 / 64;
      v40 = (int)v35 / 64;
      v41 = 3 * v12 + 15;
      v42 = 0;
      v43 = 5 * (v11 + 2 * (3 * v12 + 9));
      v44 = 5 * (v11 + 2 * v41);
      do
      {
        __asm { tzcnt   eax, ebp }
        v46 = _EAX;
        v66 = _EAX;
        v47 = codeSurfGlob->lightGridBuffers;
        v61 = _EBP;
        v48 = v46 + 4 * v38;
        v49 = ++*((_DWORD *)&v47->lightGridsActiveBuffer[0][0].buffer + v48);
        v50 = codeSurfGlob->lightGridBuffers;
        v51 = *((_DWORD *)&(&v50->lightGridsActiveBuffer[0][0].buffer)[2 * v43] + v46);
        v52 = *((_DWORD *)&(&v50->lightGridsActiveBuffer[0][0].buffer)[2 * v44] + v46) + 1;
        if ( v52 < v40 )
        {
          v53 = 4 * (v46 + 20 * v52);
          v54 = v40 - v52;
          do
          {
            v53 += 80i64;
            *(_DWORD *)(v53 + *((_QWORD *)&codeSurfGlob->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v39) - 80) = v51;
            --v54;
          }
          while ( v54 );
          v50 = codeSurfGlob->lightGridBuffers;
          v38 = v63;
        }
        ++v42;
        *(_DWORD *)(*((_QWORD *)&v50->lightGridsActiveBuffer[0][0].buffer + v39) + 4 * (v46 + 20 * v40)) = v49;
        *((_DWORD *)&(&codeSurfGlob->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer)[2 * v43] + v46) = v49;
        *((_DWORD *)&(&codeSurfGlob->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer)[2 * v44] + v46) = v68;
        _EBP ^= 1 << v66;
      }
      while ( 1 << v66 != v61 );
      LODWORD(v12) = lightingType;
      v30 = v62;
      v16 = v64;
      v69 = v42;
      v15 = lightingType;
      v37 = v69;
    }
    v55 = codeSurfGlob->lightGridBuffers;
    v56 = v30 * v30;
    v57 = &v55->lightGridDataCount[v15];
    if ( (((_BYTE)v55 + 4 * (_BYTE)v15 - 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v55->lightGridDataCount[v15]) )
      __debugbreak();
    v58 = _InterlockedExchangeAdd(v57, v37 * v56);
    if ( codeSurfGlob->lightGridBuffers->lightGridDataCount[v15] <= (signed int)codeSurfGlob->lightGridBuffers->lightGridDataLimit[v15] )
    {
      v59 = codeSurfGlob->lightGridBuffers;
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_FX_INTERMEDIATE_FULL, (unsigned int)v12);
      v59 = codeSurfGlob->lightGridBuffers;
      v58 = v59->lightGridDataLimit[v15];
    }
    v59->lightGridsDataOffset[v15][v16][v65] = v58;
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
  volatile signed __int32 *v9; 
  __int64 result; 
  GfxBackEndData *v11; 
  GfxCodeSurfGlob *v12; 
  unsigned int codeTransShadowSurfCountPrevFrame; 
  const dvar_t *v19; 
  int Int_Internal; 
  GfxBackEndData *v21; 
  unsigned __int64 v22; 
  GfxBackEndData *v23; 
  volatile unsigned int used; 
  GfxBackEndData *v25; 
  int v26; 
  unsigned int perQuadDataCount; 
  GfxSpriteVertex *data; 
  char *v29; 
  unsigned __int16 *v30; 
  GfxBackEndData *v31; 
  Pow2TexturePacker<6,512> **lightmapPacker; 
  signed __int64 v33; 
  Pow2TexturePacker<6,512> *v34; 
  __int64 v35; 
  unsigned int *v36; 
  __int64 v37; 

  v3 = surfList;
  if ( !codeSurfGlobOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 80, ASSERT_TYPE_ASSERT, "(codeSurfGlobOut)", (const char *)&queryFormat, "codeSurfGlobOut") )
    __debugbreak();
  v6 = 0;
  v7 = 2i64;
  *codeSurfGlobOut = NULL;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v37) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( surfList ) < (unsigned)( GFX_CODE_SURFLIST_TYPE_COUNT )", "surfList doesn't index GFX_CODE_SURFLIST_TYPE_COUNT\n\t%i not in [0, %i)", v37, 2) )
      __debugbreak();
  }
  if ( user == GFX_CODE_SURF_USER_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 84, ASSERT_TYPE_ASSERT, "(user != GFX_CODE_SURF_USER_NONE)", (const char *)&queryFormat, "user != GFX_CODE_SURF_USER_NONE") )
    __debugbreak();
  _R13 = &scene;
  v9 = &scene.codeSurfUser[(unsigned int)v3];
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &scene.codeSurfUser[(unsigned int)v3]) )
    __debugbreak();
  if ( _InterlockedCompareExchange(v9, user, 0) )
    return 0i64;
  v11 = frontEndDataOut;
  v12 = &g_codeSurfGlob[(unsigned int)v3];
  if ( !frontEndDataOut )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", (_DWORD)frontEndDataOut + 95, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    v11 = frontEndDataOut;
  }
  v12->argsCount = v11->codeSurfArgsCount[(unsigned int)v3];
  v12->surfList = v3;
  v12->matRenderFeatures = NULL;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      v12->surfLimit = 0x4000;
      v12->codeSurfsMain = scene.codeTransShadowSurfs;
      v12->codeSurfCountMain = &scene.codeTransShadowSurfCount;
      v12->outCodeSurfArgsMain = &v11->codeSurfArgs[256];
      codeTransShadowSurfCountPrevFrame = scene.codeTransShadowSurfCountPrevFrame;
      v12->vertLimit = 0x10000;
      v12->quadLimit = 0x4000;
      v12->indexLimit = 98304;
      v12->argsLimit = 32;
      v12->perEmitterDataLimit = 1536;
      v12->packedAtlasDataLimit = 1536;
      v12->surfLimitWarn = R_WARN_GFX_CODE_TRANS_SHADOW_SURF_LIMIT;
      v12->vertLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_VERTS;
      v12->quadLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_QUADS;
      v12->indexLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_INDS;
      v12->argsLimitWarn = R_WARN_MAX_CODE_TRANS_SHADOW_ARGS;
      v12->perEmitterDataWarn = R_WARN_MAX_CODE_TRANS_SHADOW_EMITTERS;
      v12->packedAtlasDataWarn = R_WARN_MAX_CODE_TRANS_SHADOW_PACKED_ATLAS;
      v11->transShadowBoundsCountPrevFrame = codeTransShadowSurfCountPrevFrame;
      if ( scene.codeTransShadowSurfCountPrevFrame )
      {
        _RDX = frontEndDataOut;
        do
        {
          _RCX = (unsigned __int64)v6 << 6;
          _RAX = v6++;
          __asm { vmovups xmm0, xmmword ptr [rcx+r13+100020h] }
          _RAX *= 3i64;
          __asm
          {
            vmovups xmmword ptr [rdx+rax*8+109CFCh], xmm0
            vmovsd  xmm1, qword ptr [rcx+r13+100030h]
            vmovsd  qword ptr [rdx+rax*8+109D0Ch], xmm1
          }
          _RDX = frontEndDataOut;
        }
        while ( v6 < frontEndDataOut->transShadowBoundsCountPrevFrame );
      }
    }
    else
    {
      LODWORD(v37) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 162, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp(162): unhandled case %d in switch statement", v37) )
        __debugbreak();
    }
  }
  else
  {
    v19 = r_emissive_surf_vert_limit;
    v12->codeSurfCountMain = &scene.codeEmissiveSurfCount;
    v12->matRenderFeatures = &scene.codeEmissiveMatRenderFeatures;
    v12->codeSurfsMain = (GfxCodeSurf *)&scene;
    scene.codeEmissiveMatRenderFeatures = GFX_VIEW_MTL_FEAT_NONE;
    v12->surfLimit = 0x4000;
    Int_Internal = Dvar_GetInt_Internal(v19);
    v21 = frontEndDataOut;
    v12->vertLimit = Int_Internal;
    v12->quadLimit = 0x4000;
    v12->indexLimit = 196608;
    v12->argsLimit = 256;
    v12->outCodeSurfArgsMain = v21->codeSurfArgs;
    v12->perEmitterDataLimit = 1536;
    v12->packedAtlasDataLimit = 1536;
    v12->surfLimitWarn = R_WARN_GFX_CODE_EMISSIVE_SURF_LIMIT;
    v12->vertLimitWarn = R_WARN_MAX_CODE_EMISSIVE_VERTS;
    v12->quadLimitWarn = R_WARN_MAX_CODE_EMISSIVE_QUADS;
    v12->indexLimitWarn = R_WARN_MAX_CODE_EMISSIVE_INDS;
    v12->argsLimitWarn = R_WARN_MAX_CODE_EMISSIVE_ARGS;
    v12->perEmitterDataWarn = R_WARN_MAX_CODE_EMISSIVE_EMITTERS;
    v12->packedAtlasDataWarn = R_WARN_MAX_CODE_EMISSIVE_PACKED_ATLAS;
  }
  v22 = v3;
  v12->surfCount = *v12->codeSurfCountMain;
  v23 = frontEndDataOut;
  used = frontEndDataOut->mesh[v22].vb.used;
  if ( used % frontEndDataOut->mesh[v22].vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 47, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
    __debugbreak();
  v25 = frontEndDataOut;
  v26 = used / v23->mesh[v22].vertSize;
  v12->vertCount = v26;
  v12->vertIndexBase = v26;
  perQuadDataCount = v25->mesh[v22].perQuadDataCount;
  v12->quadCount = perQuadDataCount;
  v12->quadIndexBase = perQuadDataCount;
  v12->indexCount = v25->mesh[v22].indexCount;
  data = (GfxSpriteVertex *)v25->mesh[v22].vb.wrappedBuffer.data;
  v12->verts = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 179, ASSERT_TYPE_ASSERT, "(codeSurfGlob->verts)", (const char *)&queryFormat, "codeSurfGlob->verts") )
    __debugbreak();
  v29 = (char *)frontEndDataOut + v22 * 1016;
  v12->quads = frontEndDataOut->mesh[v22].perQuadBufferData;
  v12->perEmitterData = (GfxSpriteEmitter *)*((_QWORD *)v29 + 25);
  v12->perEmitterDataCount = *((_DWORD *)v29 + 27);
  v12->packedAtlasData = (GfxPackedAtlasData *)*((_QWORD *)v29 + 35);
  v12->packedAtlasDataCount = *((_DWORD *)v29 + 31);
  v30 = (unsigned __int16 *)*((_QWORD *)v29 + 2);
  v12->indices = v30;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurf.cpp", 190, ASSERT_TYPE_ASSERT, "(codeSurfGlob->indices)", (const char *)&queryFormat, "codeSurfGlob->indices") )
    __debugbreak();
  v31 = frontEndDataOut;
  lightmapPacker = v12->lightmapPacker;
  v33 = (char *)v12 - v22 * 1016 - (char *)frontEndDataOut;
  v34 = frontEndDataOut->mesh[v22].lightmapPacker;
  v12->lightGridBuffers = frontEndDataOut->mesh[v22].lightGridBuffers;
  v35 = (__int64)&v31->mesh[v22].lightingBufferData[0][2];
  v36 = &v31->mesh[v22].lightingCount[0][1];
  do
  {
    ++lightmapPacker;
    *(unsigned int *)((char *)v36 + v33 - 336) = v36[11];
    v35 += 48i64;
    *(unsigned int *)((char *)v36 + v33 - 288) = *(v36 - 1);
    v36 += 6;
    *(_QWORD *)(v35 + v33 - 352) = *(_QWORD *)(v35 - 64);
    *(unsigned int *)((char *)v36 + v33 - 356) = v36[6];
    *(unsigned int *)((char *)v36 + v33 - 308) = *(v36 - 6);
    *(_QWORD *)(v33 + v35 - 344) = *(_QWORD *)(v35 - 56);
    *(unsigned int *)((char *)v36 + v33 - 352) = v36[7];
    *(unsigned int *)((char *)v36 + v33 - 304) = *(v36 - 5);
    *(_QWORD *)(v33 + v35 - 336) = *(_QWORD *)(v35 - 48);
    *(unsigned int *)((char *)v36 + v33 - 348) = v36[8];
    *(unsigned int *)((char *)v36 + v33 - 300) = *(v36 - 4);
    *(_QWORD *)(v33 + v35 - 328) = *(_QWORD *)(v35 - 40);
    *(unsigned int *)((char *)v36 + v33 - 344) = v36[9];
    *(unsigned int *)((char *)v36 + v33 - 296) = *(v36 - 3);
    *(_QWORD *)(v33 + v35 - 320) = *(_QWORD *)(v35 - 32);
    *(unsigned int *)((char *)v36 + v33 - 340) = v36[10];
    *(unsigned int *)((char *)v36 + v33 - 292) = *(v36 - 2);
    *(_QWORD *)(v33 + v35 - 312) = *(_QWORD *)(v35 - 24);
    *(lightmapPacker - 1) = v34++;
    --v7;
  }
  while ( v7 );
  v12->allowProcess = 1;
  result = 1i64;
  *codeSurfGlobOut = v12;
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

