/*
==============
FX_CullCylinder
==============
*/

bool __fastcall FX_CullCylinder(const FxCamera *camera, unsigned int frustumPlaneCount, const float4 *midPoint, const float4 *centerAxis, float halfHeight, float radius)
{
  return ?FX_CullCylinder@@YA_NPEBUFxCamera@@IAEBUfloat4@@1MM@Z(camera, frustumPlaneCount, midPoint, centerAxis, halfHeight, radius);
}

/*
==============
FX_SpriteDirectContinue
==============
*/

void __fastcall FX_SpriteDirectContinue(GfxCodeSurfGlob *codeSurfGlob, const char *name, FxSpriteInfo *sprite, Material *material, unsigned int vertIndexBase, r_double_index_t *indices, unsigned __int8 codeSurfFlags, unsigned int perFrameActiveEmitterIndex)
{
  ?FX_SpriteDirectContinue@@YAXPEAUGfxCodeSurfGlob@@PEBDPEAUFxSpriteInfo@@PEAUMaterial@@IPEAUr_double_index_t@@EI@Z(codeSurfGlob, name, sprite, material, vertIndexBase, indices, codeSurfFlags, perFrameActiveEmitterIndex);
}

/*
==============
FX_SpriteDirectContinue
==============
*/
void FX_SpriteDirectContinue(GfxCodeSurfGlob *codeSurfGlob, const char *name, FxSpriteInfo *sprite, Material *material, unsigned int vertIndexBase, r_double_index_t *indices, unsigned __int8 codeSurfFlags, unsigned int perFrameActiveEmitterIndex)
{
  unsigned int indexCount; 
  r_double_index_t *v12; 
  __int64 v13; 

  indexCount = sprite->indexCount;
  if ( indexCount && (sprite->material != material || sprite->vertIndexBase != vertIndexBase || sprite->codeSurfFlags != codeSurfFlags || sprite->perFrameActiveEmitterIndex != perFrameActiveEmitterIndex) )
  {
    FX_SpriteDirectFlush(codeSurfGlob, sprite, 1);
    indexCount = sprite->indexCount;
  }
  if ( indexCount )
  {
    v12 = sprite->indices;
  }
  else
  {
    sprite->indexCount = 0;
    v12 = indices;
    sprite->indices = indices;
    sprite->material = material;
    sprite->name = name;
    sprite->vertIndexBase = vertIndexBase;
    sprite->codeSurfFlags = codeSurfFlags;
    sprite->perFrameActiveEmitterIndex = perFrameActiveEmitterIndex;
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 60, ASSERT_TYPE_ASSERT, "(sprite->indices)", (const char *)&queryFormat, "sprite->indices") )
    __debugbreak();
  if ( indices != (r_double_index_t *)((char *)sprite->indices + 2 * sprite->indexCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 62, ASSERT_TYPE_ASSERT, "(&indices[0].value[0] == indicesEnd)", (const char *)&queryFormat, "&indices[0].value[0] == indicesEnd") )
    __debugbreak();
  if ( sprite->material != material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 63, ASSERT_TYPE_ASSERT, "(sprite->material == material)", (const char *)&queryFormat, "sprite->material == material") )
    __debugbreak();
  if ( sprite->vertIndexBase != vertIndexBase )
  {
    LODWORD(v13) = vertIndexBase;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 64, ASSERT_TYPE_ASSERT, "( ( sprite->vertIndexBase == vertIndexBase ) )", "( vertIndexBase ) = %i", v13) )
      __debugbreak();
  }
  if ( sprite->codeSurfFlags != codeSurfFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 65, ASSERT_TYPE_ASSERT, "(sprite->codeSurfFlags == codeSurfFlags)", (const char *)&queryFormat, "sprite->codeSurfFlags == codeSurfFlags") )
    __debugbreak();
  if ( sprite->perFrameActiveEmitterIndex != perFrameActiveEmitterIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 66, ASSERT_TYPE_ASSERT, "(sprite->perFrameActiveEmitterIndex == perFrameActiveEmitterIndex)", (const char *)&queryFormat, "sprite->perFrameActiveEmitterIndex == perFrameActiveEmitterIndex") )
    __debugbreak();
}

/*
==============
FX_CullCylinder
==============
*/
bool FX_CullCylinder(const FxCamera *camera, unsigned int frustumPlaneCount, const float4 *midPoint, const float4 *centerAxis, float halfHeight, float radius)
{
  unsigned int v15; 
  bool v21; 
  bool v36; 
  bool result; 
  unsigned int v63; 
  double v64; 
  int v65; 
  double v66; 
  double v67; 

  __asm { vmovaps [rsp+0D8h+var_68], xmm9 }
  _RBP = centerAxis;
  if ( !camera->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 92, ASSERT_TYPE_ASSERT, "(camera->isValid)", (const char *)&queryFormat, "camera->isValid") )
    __debugbreak();
  if ( frustumPlaneCount != camera->frustumPlaneCount && frustumPlaneCount != 5 )
  {
    v65 = camera->frustumPlaneCount;
    v63 = frustumPlaneCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 93, ASSERT_TYPE_ASSERT, "(frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5)", "%s\n\t%i, %i", "frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5", v63, v65) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, [rsp+0D8h+radius] }
  v15 = 0;
  __asm
  {
    vmovaps [rsp+0D8h+var_38], xmm6
    vmovaps [rsp+0D8h+var_48], xmm7
    vmovaps [rsp+0D8h+var_58], xmm8
    vmovaps [rsp+0D8h+var_78], xmm10
    vmulss  xmm9, xmm0, xmm0
  }
  if ( frustumPlaneCount )
  {
    __asm
    {
      vmovss  xmm10, [rsp+0D8h+halfHeight]
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm7, cs:__real@3f800000
      vmovss  xmm8, cs:__real@3b83126f
    }
    v21 = __CFADD__(camera, 16i64);
    _RBX = camera->frustum;
    while ( 1 )
    {
      __asm
      {
        vmovups xmm3, xmmword ptr [rbx]
        vmulss  xmm0, xmm3, xmm3
        vshufps xmm4, xmm3, xmm3, 55h ; 'U'
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vshufps xmm5, xmm3, xmm3, 0AAh ; 'ª'
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm0, xmm2, xmm7
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm8
      }
      if ( !v21 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm5, xmm5
          vmovsd  [rsp+0D8h+var_98], xmm0
          vcvtss2sd xmm1, xmm4, xmm4
          vmovsd  [rsp+0D8h+var_A0], xmm1
          vcvtss2sd xmm2, xmm3, xmm3
          vmovsd  [rsp+0D8h+var_A8], xmm2
        }
        v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 127, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( normalVec ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( normalVec )", v64, v66, v67);
        v21 = 0;
        if ( v36 )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmulps  xmm1, xmm0, xmmword ptr [r14]
        vinsertps xmm2, xmm1, xmm1, 8
        vmovups xmm1, xmmword ptr [rbp+0]
        vmulps  xmm1, xmm1, xmmword ptr [rbx]
        vshufps xmm4, xmm0, xmm0, 0FFh
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm3, xmm0, xmm0
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm3, xmm4
        vhaddps xmm4, xmm0, xmm0
        vandps  xmm0, xmm4, xmm6
        vmulss  xmm0, xmm0, xmm10
        vaddss  xmm2, xmm0, xmm1
        vandps  xmm1, xmm2, xmm6
        vmulss  xmm3, xmm1, xmm2
        vmulss  xmm0, xmm4, xmm9
        vmulss  xmm1, xmm0, xmm4
        vsubss  xmm2, xmm1, xmm9
        vcomiss xmm3, xmm2
      }
      if ( v21 )
        break;
      ++v15;
      ++_RBX;
      v21 = v15 < frustumPlaneCount;
      if ( v15 >= frustumPlaneCount )
        goto LABEL_15;
    }
    result = 1;
  }
  else
  {
LABEL_15:
    result = 0;
  }
  __asm
  {
    vmovaps xmm10, [rsp+0D8h+var_78]
    vmovaps xmm8, [rsp+0D8h+var_58]
    vmovaps xmm7, [rsp+0D8h+var_48]
    vmovaps xmm6, [rsp+0D8h+var_38]
    vmovaps xmm9, [rsp+0D8h+var_68]
  }
  return result;
}

