/*
==============
PhysicallyBasedLight_AreaLightVPLOffsetTube
==============
*/

float __fastcall PhysicallyBasedLight_AreaLightVPLOffsetTube(const vec3_t *axis, const vec3_t *halfVector, const float bulbRadius, const float cosTheta)
{
  return ?PhysicallyBasedLight_AreaLightVPLOffsetTube@@YAMTvec3_t@@0MM@Z(axis, halfVector, bulbRadius, cosTheta);
}

/*
==============
PhysicallyBasedLight_AreaLightVPLOffsetTube
==============
*/
float PhysicallyBasedLight_AreaLightVPLOffsetTube(const vec3_t *axis, const vec3_t *halfVector, const float bulbRadius, const float cosTheta)
{
  __int128 v4; 
  __int128 v6; 
  float v7; 
  float v11; 
  float v12; 
  __int64 v14; 

  v4 = *(unsigned __int64 *)halfVector->v;
  v6 = v4;
  v14 = *(_QWORD *)halfVector->v;
  v7 = halfVector->v[2];
  *(float *)&v6 = fsqrt((float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(*((float *)&v14 + 1) * *((float *)&v14 + 1))) + (float)(v7 * v7));
  _XMM3 = v6;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  *(float *)&v4 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v4) * bulbRadius) + *(float *)&v4;
  *(float *)&v6 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * *((float *)&v14 + 1)) * bulbRadius) + *((float *)&v14 + 1);
  v11 = (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * bulbRadius) + v7;
  v12 = (float)((float)(*(float *)&v6 * _mm_shuffle_ps((__m128)*(unsigned __int64 *)axis->v, (__m128)*(unsigned __int64 *)axis->v, 85).m128_f32[0]) + (float)(*(float *)&v4 * COERCE_FLOAT(*(_QWORD *)axis->v))) + (float)(v11 * axis->v[2]);
  return (float)((float)(fsqrt((float)((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(*(float *)&v4 * *(float *)&v4)) + (float)(v11 * v11)) - COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 * v12) & _xmm)) * cosTheta) / fsqrt(1.0 - (float)(cosTheta * cosTheta))) + COERCE_FLOAT(LODWORD(v12) & _xmm);
}

