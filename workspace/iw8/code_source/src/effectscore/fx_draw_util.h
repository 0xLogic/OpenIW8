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
char FX_CullCylinder(const FxCamera *camera, unsigned int frustumPlaneCount, const float4 *midPoint, const float4 *centerAxis, float halfHeight, float radius)
{
  int v10; 
  float4 *i; 
  __m128 v; 
  float v13; 
  float v14; 
  unsigned int v24; 
  int v25; 

  if ( !camera->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 92, ASSERT_TYPE_ASSERT, "(camera->isValid)", (const char *)&queryFormat, "camera->isValid") )
    __debugbreak();
  if ( frustumPlaneCount != camera->frustumPlaneCount && frustumPlaneCount != 5 )
  {
    v25 = camera->frustumPlaneCount;
    v24 = frustumPlaneCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.h", 93, ASSERT_TYPE_ASSERT, "(frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5)", "%s\n\t%i, %i", "frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5", v24, v25) )
      __debugbreak();
  }
  v10 = 0;
  if ( !frustumPlaneCount )
    return 0;
  for ( i = camera->frustum; ; ++i )
  {
    v = i->v;
    v13 = _mm_shuffle_ps(v, v, 85).m128_f32[0];
    v14 = _mm_shuffle_ps(v, v, 170).m128_f32[0];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v13 * v13) + (float)(v.m128_f32[0] * v.m128_f32[0])) + (float)(v14 * v14)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 127, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( normalVec ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( normalVec )", v.m128_f32[0], v13, v14) )
      __debugbreak();
    _XMM1 = _mm128_mul_ps(i->v, midPoint->v);
    __asm { vinsertps xmm2, xmm1, xmm1, 8 }
    _XMM1 = _mm128_mul_ps(centerAxis->v, i->v);
    __asm
    {
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm3, xmm0, xmm0
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
    }
    _XMM1.m128_f32[0] = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(i->v, i->v, 255)).m128_f32[0];
    __asm { vhaddps xmm4, xmm0, xmm0 }
    if ( (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_XMM4 & _xmm) * halfHeight) + _XMM1.m128_f32[0]) & _xmm) * (float)((float)(COERCE_FLOAT(_XMM4 & _xmm) * halfHeight) + _XMM1.m128_f32[0])) < (float)((float)((float)(*(float *)&_XMM4 * (float)(radius * radius)) * *(float *)&_XMM4) - (float)(radius * radius)) )
      break;
    if ( ++v10 >= frustumPlaneCount )
      return 0;
  }
  return 1;
}

