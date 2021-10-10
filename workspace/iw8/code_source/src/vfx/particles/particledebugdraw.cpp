/*
==============
Particle_DebugBox
==============
*/

void __fastcall Particle_DebugBox(const vec3_t *origin, const Bounds *bounds, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugBox@@YAXAEBTvec3_t@@PEBUBounds@@0AEBTvec4_t@@_NH@Z(origin, bounds, rotation, color, depthTest, duration);
}

/*
==============
Particle_DebugEllipsoid
==============
*/

void __fastcall Particle_DebugEllipsoid(const vec3_t *center, const vec3_t *rotation, const vec3_t *size, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugEllipsoid@@YAXAEBTvec3_t@@00AEBTvec4_t@@_NH@Z(center, rotation, size, color, depthTest, duration);
}

/*
==============
Particle_DebugCircle
==============
*/

void __fastcall Particle_DebugCircle(const vec3_t *center, float radius, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugCircle@@YAXAEBTvec3_t@@M0AEBTvec4_t@@_NH@Z(center, radius, rotation, color, depthTest, duration);
}

/*
==============
Particle_DebugSphere
==============
*/

void __fastcall Particle_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugSphere@@YAXAEBTvec3_t@@MAEBTvec4_t@@_NH@Z(center, radius, color, depthTest, duration);
}

/*
==============
Particle_DebugLine
==============
*/

void __fastcall Particle_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugLine@@YAXAEBTvec3_t@@0AEBTvec4_t@@_NH@Z(start, end, color, depthTest, duration);
}

/*
==============
Particle_DebugCone
==============
*/

void __fastcall Particle_DebugCone(const vec3_t *center, const tmat33_t<vec3_t> *rotation, float height, float radius, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugCone@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@MMAEBTvec4_t@@_NH@Z(center, rotation, height, radius, color, depthTest, duration);
}

/*
==============
Particle_DebugCylinder
==============
*/

void __fastcall Particle_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugCylinder@@YAXAEBTvec3_t@@0M0AEBTvec4_t@@_NH@Z(start, end, radius, rotation, color, depthTest, duration);
}

/*
==============
Particle_DebugVector
==============
*/

void __fastcall Particle_DebugVector(const vec3_t *start, const vec3_t *end, const float size, const vec4_t *color, bool depthTest, int duration)
{
  ?Particle_DebugVector@@YAXAEBTvec3_t@@0MAEBTvec4_t@@_NH@Z(start, end, size, color, depthTest, duration);
}

/*
==============
Particle_DebugBox
==============
*/
void Particle_DebugBox(const vec3_t *origin, const Bounds *bounds, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  tmat33_t<vec3_t> axis; 

  AnglesToAxis(rotation, &axis);
  CG_DebugBoxOriented(origin, bounds, &axis, color, depthTest, duration);
}

/*
==============
Particle_DebugCircle
==============
*/
void Particle_DebugCircle(const vec3_t *center, float radius, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  tmat33_t<vec3_t> axis; 

  AnglesToAxis(rotation, &axis);
  CG_DebugCircle(center, radius, &axis.m[2], color, depthTest, duration);
}

/*
==============
Particle_DebugCone
==============
*/
void Particle_DebugCone(const vec3_t *center, const tmat33_t<vec3_t> *rotation, float height, float radius, const vec4_t *color, bool depthTest, int duration)
{
  CG_DebugCone(center, &rotation->m[2], radius, height, color, depthTest, duration);
}

/*
==============
Particle_DebugCylinder
==============
*/
void Particle_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  tmat33_t<vec3_t> axis; 
  vec3_t enda; 
  vec3_t starta; 

  AnglesToAxis(rotation, &axis);
  if ( start == &starta && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v9 = start->v[0];
  v10 = start->v[1];
  v11 = start->v[2];
  starta.v[0] = (float)((float)(start->v[0] * axis.m[0].v[0]) + (float)(v10 * axis.m[1].v[0])) + (float)(v11 * axis.m[2].v[0]);
  starta.v[1] = (float)((float)(v9 * axis.m[0].v[1]) + (float)(v10 * axis.m[1].v[1])) + (float)(v11 * axis.m[2].v[1]);
  starta.v[2] = (float)((float)(v9 * axis.m[0].v[2]) + (float)(v10 * axis.m[1].v[2])) + (float)(v11 * axis.m[2].v[2]);
  if ( end == &enda && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v12 = end->v[1];
  v13 = end->v[2];
  v14 = end->v[0] * axis.m[0].v[1];
  v15 = end->v[0] * axis.m[0].v[2];
  enda.v[0] = (float)((float)(end->v[0] * axis.m[0].v[0]) + (float)(v12 * axis.m[1].v[0])) + (float)(v13 * axis.m[2].v[0]);
  enda.v[1] = (float)(v14 + (float)(v12 * axis.m[1].v[1])) + (float)(v13 * axis.m[2].v[1]);
  enda.v[2] = (float)(v15 + (float)(v12 * axis.m[1].v[2])) + (float)(v13 * axis.m[2].v[2]);
  CG_DebugCylinder(&starta, &enda, radius, color, depthTest, duration);
}

/*
==============
Particle_DebugEllipsoid
==============
*/
void Particle_DebugEllipsoid(const vec3_t *center, const vec3_t *rotation, const vec3_t *size, const vec4_t *color, bool depthTest, int duration)
{
  tmat33_t<vec3_t> axis; 

  AnglesToAxis(rotation, &axis);
  CG_DebugEllipsoid(center, axis.m, &axis.m[1], size->v[0], size->v[1], size->v[2], color, depthTest, duration);
}

/*
==============
Particle_DebugLine
==============
*/
void Particle_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, bool depthTest, int duration)
{
  CG_DebugLine(start, end, color, depthTest, duration);
}

/*
==============
Particle_DebugSphere
==============
*/
void Particle_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, bool depthTest, int duration)
{
  CG_DebugSphere(center, radius, color, depthTest, duration);
}

/*
==============
Particle_DebugVector
==============
*/

void __fastcall Particle_DebugVector(const vec3_t *start, const vec3_t *end, double size, const vec4_t *color, bool depthTest, int duration)
{
  __int128 v6; 
  float v7; 
  float v8; 
  __m128 v; 
  __m128 v16; 
  __m128 v19; 
  __m128 v20; 
  const float4 *v25; 
  float4 *v26; 
  const float4 *v27; 
  vector3 *v28; 
  const vector4 *v29; 
  __m256i v30; 
  __m128 **v31; 
  __int64 v32; 
  __m128 v33; 
  vector4 result; 
  vector4 outMatrix; 
  float4 lookAtInput; 
  __m256i v38; 
  __m256i v39; 
  __m256i v40; 
  __m256i v41; 

  v7 = start->v[0];
  result.w = (float4)g_unit.v;
  v8 = end->v[0];
  lookAtInput.v.m128_i32[3] = 0;
  v = lookAtInput.v;
  v.m128_f32[0] = v7;
  _XMM4 = v;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
  }
  lookAtInput.v = _XMM4;
  lookAtInput.v.m128_i32[3] = 0;
  v16 = lookAtInput.v;
  v16.m128_f32[0] = v8;
  _XMM6 = v16;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rdx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+8], 20h ; ' '
  }
  v19 = *(__m128 *)&size;
  v20 = _mm128_sub_ps(_XMM6, _XMM4);
  _XMM0 = _mm128_mul_ps(v20, v20);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  lookAtInput.v = _XMM6;
  if ( *(float *)&_XMM0 >= 0.001 )
  {
    lookAtInput.v = v20;
    Particle_GenerateMatrixFromLookAt(&lookAtInput, &outMatrix);
    outMatrix.w.v = _XMM6;
    Float4RadianToQuat(v26, v25);
    Float4UnitQuatToAxis(v28, v27);
    *(_OWORD *)&v40.m256i_u64[2] = _XMM1;
    *(_OWORD *)v40.m256i_i8 = _xmm;
    *(__m256i *)result.x.v.m128_f32 = v40;
    result.z.v = v20;
    Float4x4Mul(&result, &outMatrix, v29);
    *(_OWORD *)v40.m256i_i8 = _xmm;
    *(__m128 *)v41.m256i_i8 = v20;
    *(_OWORD *)&v40.m256i_u64[2] = _XMM1;
    v30 = v40;
    v40.m256i_i64[0] = (__int64)&v38;
    v31 = (__m128 **)&v40;
    v32 = 3i64;
    v40.m256i_i64[1] = (__int64)&v38.m256i_i64[2];
    *(_OWORD *)&v41.m256i_u64[2] = v6;
    v40.m256i_i64[2] = (__int64)&v39;
    v38 = v30;
    v39 = v41;
    v33 = _mm_shuffle_ps(v19, v19, 0);
    do
    {
      _XMM2 = _mm128_add_ps(_XMM6, _mm128_mul_ps(v33, **v31));
      lookAtInput.v.m128_f32[0] = _XMM2.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rsp+1A8h+lookAtInput.v+4], xmm2, 1
        vextractps dword ptr [rsp+1A8h+lookAtInput.v+8], xmm2, 2
      }
      CG_DebugLine((const vec3_t *)&lookAtInput, end, color, depthTest, duration);
      ++v31;
      --v32;
    }
    while ( v32 );
    CG_DebugLine(start, end, color, depthTest, duration);
  }
  else
  {
    CG_DebugSphere(start, v19.m128_f32[0] * 0.25, color, depthTest, duration);
  }
}

