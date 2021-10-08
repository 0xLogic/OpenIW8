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

void __fastcall Particle_DebugCircle(const vec3_t *center, double radius, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  AnglesToAxis(rotation, &axis);
  __asm { vmovaps xmm1, xmm6; radius }
  CG_DebugCircle(center, *(float *)&_XMM1, &axis.m[2], color, depthTest, duration);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
Particle_DebugCone
==============
*/

void __fastcall Particle_DebugCone(const vec3_t *center, const tmat33_t<vec3_t> *rotation, double height, double radius, const vec4_t *color, bool depthTest, int duration)
{
  __asm
  {
    vmovaps xmm0, xmm3
    vmovaps xmm3, xmm2; length
    vmovaps xmm2, xmm0; radius
  }
  CG_DebugCone(center, &rotation->m[2], *(float *)&_XMM2, *(float *)&_XMM3, color, depthTest, duration);
}

/*
==============
Particle_DebugCylinder
==============
*/

void __fastcall Particle_DebugCylinder(const vec3_t *start, const vec3_t *end, double radius, const vec3_t *rotation, const vec4_t *color, bool depthTest, int duration)
{
  tmat33_t<vec3_t> axis; 
  vec3_t enda; 
  vec3_t starta; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = (vec3_t *)end;
  _RBX = (vec3_t *)start;
  __asm { vmovaps xmm7, xmm2 }
  AnglesToAxis(rotation, &axis);
  if ( _RBX == &starta && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+4]
    vmulss  xmm3, xmm4, dword ptr [rbp+3Fh+axis]
    vmovss  xmm6, dword ptr [rbx+8]
    vmulss  xmm2, xmm5, dword ptr [rbp+3Fh+axis+0Ch]
    vmulss  xmm0, xmm6, dword ptr [rbp+3Fh+axis+18h]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm2, xmm6, dword ptr [rbp+3Fh+axis+1Ch]
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm3, xmm4, dword ptr [rbp+3Fh+axis+4]
    vmovss  dword ptr [rbp+3Fh+start], xmm1
    vmulss  xmm1, xmm5, dword ptr [rbp+3Fh+axis+10h]
    vaddss  xmm3, xmm3, xmm1
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm5, dword ptr [rbp+3Fh+axis+14h]
    vmulss  xmm3, xmm4, dword ptr [rbp+3Fh+axis+8]
    vmovss  dword ptr [rbp+3Fh+start+4], xmm0
    vmulss  xmm0, xmm6, dword ptr [rbp+3Fh+axis+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmovss  dword ptr [rbp+3Fh+start+8], xmm2
  }
  if ( _RDI == &enda && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmulss  xmm1, xmm4, dword ptr [rbp+3Fh+axis]
    vmulss  xmm0, xmm5, dword ptr [rbp+3Fh+axis+0Ch]
    vmovss  xmm6, dword ptr [rdi+8]
    vmulss  xmm3, xmm4, dword ptr [rbp+3Fh+axis+4]
    vmulss  xmm4, xmm4, dword ptr [rbp+3Fh+axis+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rbp+3Fh+axis+18h]
    vmulss  xmm0, xmm5, dword ptr [rbp+3Fh+axis+10h]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rbp+3Fh+axis+1Ch]
    vmovss  dword ptr [rbp+3Fh+end], xmm2
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm5, dword ptr [rbp+3Fh+axis+14h]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rbp+3Fh+axis+20h]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm1
    vmovss  dword ptr [rbp+3Fh+end+4], xmm2
    vmovaps xmm2, xmm7; radius
    vmovss  dword ptr [rbp+3Fh+end+8], xmm3
  }
  CG_DebugCylinder(&starta, &enda, *(float *)&_XMM2, color, depthTest, duration);
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Particle_DebugEllipsoid
==============
*/
void Particle_DebugEllipsoid(const vec3_t *center, const vec3_t *rotation, const vec3_t *size, const vec4_t *color, bool depthTest, int duration)
{
  float v12; 
  float v13; 
  tmat33_t<vec3_t> axis; 

  _RDI = size;
  AnglesToAxis(rotation, &axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi]; radiusA
    vmovss  [rsp+98h+var_70], xmm0
    vmovss  [rsp+98h+var_78], xmm1
  }
  CG_DebugEllipsoid(center, axis.m, &axis.m[1], *(const float *)&_XMM3, v12, v13, color, depthTest, duration);
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
  const vec3_t *v18; 
  const vec3_t *v28; 
  const float4 *v30; 
  float4 *v31; 
  const float4 *v32; 
  vector3 *v33; 
  const vector4 *v35; 
  __m256i *v37; 
  __int64 v38; 
  vector4 result; 
  vector4 outMatrix; 
  float4 lookAtInput; 
  __m256i v48; 
  __m256i v49; 
  __m256i v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovss  xmm1, dword ptr [rcx]
    vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vmovdqa xmmword ptr [rsp+1A8h+result.w.v], xmm0
    vmovss  xmm0, dword ptr [rdx]
  }
  lookAtInput.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+0B0h]
    vmovss  xmm4, xmm4, xmm1
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
    vmovups xmmword ptr [rsp+0B0h], xmm4
  }
  lookAtInput.v.m128_i32[3] = 0;
  v18 = end;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+0B0h]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rdx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+8], 20h ; ' '
    vmovaps xmm7, xmm2
    vsubps  xmm2, xmm6, xmm4
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vcomiss xmm0, cs:__real@3a83126f
  }
  v28 = start;
  __asm
  {
    vmovups xmmword ptr [rsp+0B0h], xmm6
    vmovups xmmword ptr [rsp+1A8h+lookAtInput.v], xmm2
  }
  Particle_GenerateMatrixFromLookAt(&lookAtInput, &outMatrix);
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000bf490fdbc016cbe400000000
    vmovdqa [rsp+1A8h+var_108], xmm6
  }
  Float4RadianToQuat(v31, v30);
  Float4UnitQuatToAxis(v33, v32);
  __asm
  {
    vmovups xmmword ptr [rsp+1A8h+var_A8+10h], xmm1
    vmovups xmmword ptr [rsp+1A8h+var_A8], xmm0
    vmovups ymm3, [rsp+1A8h+var_A8]
    vmovups ymmword ptr [rsp+1A8h+result.baseclass_0.x.v], ymm3
    vmovups xmmword ptr [rsp+1A8h+result.baseclass_0.z.v], xmm2
  }
  Float4x4Mul(&result, &outMatrix, v35);
  __asm
  {
    vmovups xmmword ptr [rsp+1A8h+var_A8], xmm0
    vmovups xmmword ptr [rsp+1A8h+var_88], xmm2
    vmovups xmmword ptr [rsp+1A8h+var_A8+10h], xmm1
    vmovups ymm2, [rsp+1A8h+var_A8]
  }
  v50.m256i_i64[0] = (__int64)&v48;
  v37 = &v50;
  v38 = 3i64;
  v50.m256i_i64[1] = (__int64)&v48.m256i_i64[2];
  __asm
  {
    vmovups xmmword ptr [rsp+1A8h+var_88+10h], xmm3
    vmovups ymm0, [rsp+1A8h+var_88]
  }
  v50.m256i_i64[2] = (__int64)&v49;
  __asm
  {
    vmovups [rsp+1A8h+var_E8], ymm2
    vmovups [rsp+1A8h+var_C8], ymm0
    vshufps xmm7, xmm7, xmm7, 0
  }
  do
  {
    __asm
    {
      vmulps  xmm1, xmm7, xmmword ptr [rax]
      vaddps  xmm2, xmm6, xmm1
      vmovss  dword ptr [rsp+1A8h+lookAtInput.v], xmm2
      vextractps dword ptr [rsp+1A8h+lookAtInput.v+4], xmm2, 1
      vextractps dword ptr [rsp+1A8h+lookAtInput.v+8], xmm2, 2
    }
    CG_DebugLine((const vec3_t *)&lookAtInput, v18, color, depthTest, duration);
    v37 = (__m256i *)((char *)v37 + 8);
    --v38;
  }
  while ( v38 );
  CG_DebugLine(v28, v18, color, depthTest, duration);
  __asm
  {
    vmovaps xmm6, [rsp+1A8h+var_48]
    vmovaps xmm7, [rsp+1A8h+var_58]
  }
}

