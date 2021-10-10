/*
==============
FX_CullSphere
==============
*/

bool __fastcall FX_CullSphere(const FxCamera *camera, unsigned int frustumPlaneCount, const float4 *posWorld, float radius, bool ignoreIsValidCamera)
{
  return ?FX_CullSphere@@YA_NPEBUFxCamera@@IAEBUfloat4@@M_N@Z(camera, frustumPlaneCount, posWorld, radius, ignoreIsValidCamera);
}

/*
==============
FX_CullSphere
==============
*/

char __fastcall FX_CullSphere(const FxCamera *camera, unsigned int frustumPlaneCount, const float4 *posWorld, double radius, bool ignoreIsValidCamera)
{
  int v8; 
  float4 *i; 
  __m128 v; 
  float v12; 
  float v13; 

  if ( !ignoreIsValidCamera && !camera->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.h", 24, ASSERT_TYPE_ASSERT, "(ignoreIsValidCamera || camera->isValid)", (const char *)&queryFormat, "ignoreIsValidCamera || camera->isValid") )
    __debugbreak();
  if ( frustumPlaneCount != camera->frustumPlaneCount && frustumPlaneCount != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.h", 25, ASSERT_TYPE_ASSERT, "(frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5)", "%s\n\t%i, %i", "frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5", frustumPlaneCount, camera->frustumPlaneCount) )
    __debugbreak();
  v8 = 0;
  _XMM6 = _mm_shuffle_ps((__m128)(*(_OWORD *)&radius ^ _xmm), (__m128)(*(_OWORD *)&radius ^ _xmm), 0);
  if ( !frustumPlaneCount )
    return 0;
  for ( i = camera->frustum; ; ++i )
  {
    v = i->v;
    v12 = _mm_shuffle_ps(v, v, 85).m128_f32[0];
    v13 = _mm_shuffle_ps(v, v, 170).m128_f32[0];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v.m128_f32[0] * v.m128_f32[0]) + (float)(v12 * v12)) + (float)(v13 * v13)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 127, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( normalVec ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( normalVec )", v.m128_f32[0], v12, v13) )
      __debugbreak();
    _XMM1 = _mm128_mul_ps(i->v, posWorld->v);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
    }
    _mm128_sub_ps(_XMM1, _mm_shuffle_ps(i->v, i->v, 255));
    __asm
    {
      vcmpltps xmm0, xmm6, xmm2
      vmovmskps eax, xmm0
    }
    if ( (_EAX & 0xF) == 0 )
      break;
    if ( ++v8 >= frustumPlaneCount )
      return 0;
  }
  return 1;
}

