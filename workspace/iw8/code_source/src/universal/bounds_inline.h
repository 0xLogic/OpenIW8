/*
==============
Bounds_ContainsPoint
==============
*/

int __fastcall Bounds_ContainsPoint(const Bounds *bounds, const vec3_t *pt)
{
  return ?Bounds_ContainsPoint@@YAHPEBUBounds@@AEBTvec3_t@@@Z(bounds, pt);
}

/*
==============
Bounds_DistToPointSq
==============
*/

double __fastcall Bounds_DistToPointSq(const Bounds *bounds, const vec3_t *point)
{
  double result; 

  *(float *)&result = ?Bounds_DistToPointSq@@YAMPEIBUBounds@@AEBTvec3_t@@@Z(bounds, point);
  return result;
}

/*
==============
Bounds_SetMinMax3D
==============
*/

void __fastcall Bounds_SetMinMax3D(Bounds *bounds, const vec3_t *mins, const vec3_t *maxs)
{
  ?Bounds_SetMinMax3D@@YAXPEAUBounds@@AEBTvec3_t@@1@Z(bounds, mins, maxs);
}

/*
==============
Bounds_ExpandToWidth
==============
*/

void __fastcall Bounds_ExpandToWidth(Bounds *bounds)
{
  ?Bounds_ExpandToWidth@@YAXPEAUBounds@@@Z(bounds);
}

/*
==============
Bounds_ForOBB
==============
*/

void __fastcall Bounds_ForOBB(Bounds *bounds, const vec3_t *center, const vec3_t *halfSize, const vec3_t *xAxis, const vec3_t *yAxis, const vec3_t *zAxis)
{
  ?Bounds_ForOBB@@YAXPEAUBounds@@AEBTvec3_t@@1111@Z(bounds, center, halfSize, xAxis, yAxis, zAxis);
}

/*
==============
Bounds_Min
==============
*/

double __fastcall Bounds_Min(const Bounds *bounds, unsigned int axis)
{
  double result; 

  *(float *)&result = ?Bounds_Min@@YAMPEBUBounds@@I@Z(bounds, axis);
  return result;
}

/*
==============
Bounds_AddPoint
==============
*/

void __fastcall Bounds_AddPoint(Bounds *bounds, const vec3_t *pt)
{
  ?Bounds_AddPoint@@YAXPEAUBounds@@AEBTvec3_t@@@Z(bounds, pt);
}

/*
==============
Sphere_OverlapOrTouch
==============
*/

bool __fastcall Sphere_OverlapOrTouch(const Bounds *b, const Sphere *s)
{
  return ?Sphere_OverlapOrTouch@@YA_NPEBUBounds@@PEBUSphere@@@Z(b, s);
}

/*
==============
Bounds_OverlapProjectionGrid
==============
*/

void __fastcall Bounds_OverlapProjectionGrid(const Bounds *b, const tmat44_t<vec4_t> *projTransform, unsigned int gridResolution, unsigned int *outX, unsigned int *outY, unsigned int *outSizeX, unsigned int *outSizeY)
{
  ?Bounds_OverlapProjectionGrid@@YAXPEIBUBounds@@AEBT?$tmat44_t@Tvec4_t@@@@IAEAI222@Z(b, projTransform, gridResolution, outX, outY, outSizeX, outSizeY);
}

/*
==============
Bounds_Expand
==============
*/

void __fastcall Bounds_Expand(Bounds *bounds, const Bounds *added)
{
  ?Bounds_Expand@@YAXPEAUBounds@@PEBU1@@Z(bounds, added);
}

/*
==============
Bounds_RaiseToWidth
==============
*/

void __fastcall Bounds_RaiseToWidth(Bounds *bounds)
{
  ?Bounds_RaiseToWidth@@YAXPEAUBounds@@@Z(bounds);
}

/*
==============
Bounds_Transform
==============
*/

void __fastcall Bounds_Transform(const Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Bounds *rotatedBounds)
{
  ?Bounds_Transform@@YAXPEBUBounds@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@PEAU1@@Z(baseBounds, origin, axis, rotatedBounds);
}

/*
==============
Bounds_SetMinMax
==============
*/

void __fastcall Bounds_SetMinMax(Bounds *bounds, unsigned int axis, float min, float max)
{
  ?Bounds_SetMinMax@@YAXPEAUBounds@@IMM@Z(bounds, axis, min, max);
}

/*
==============
Bounds_Max
==============
*/

double __fastcall Bounds_Max(const Bounds *bounds, unsigned int axis)
{
  double result; 

  *(float *)&result = ?Bounds_Max@@YAMPEBUBounds@@I@Z(bounds, axis);
  return result;
}

/*
==============
Bounds_FromExtentBounds
==============
*/

void __fastcall Bounds_FromExtentBounds(Bounds *toBounds, const ExtentBounds *fromBounds)
{
  ?Bounds_FromExtentBounds@@YAXPEAUBounds@@PEBUExtentBounds@@@Z(toBounds, fromBounds);
}

/*
==============
Bounds_SetMinMax3D
==============
*/
void Bounds_SetMinMax3D(Bounds *bounds, const vec3_t *mins, const vec3_t *maxs)
{
  bool v12; 
  bool v13; 
  bool v18; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8]
    vcomiss xmm1, xmm0
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  _RDI = maxs;
  _RBX = mins;
  _RSI = bounds;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+88h+var_48], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+88h+var_50], xmm1
  }
  v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 109, ASSERT_TYPE_ASSERT, "( mins.x ) <= ( maxs.x )", "%s <= %s\n\t%g, %g", "mins.x", "maxs.x", v46, v49);
  v13 = !v12;
  if ( v12 )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm1, xmm0
  }
  if ( v12 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_48], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+88h+var_50], xmm1
    }
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 110, ASSERT_TYPE_ASSERT, "( mins.y ) <= ( maxs.y )", "%s <= %s\n\t%g, %g", "mins.y", "maxs.y", v47, v50);
    v13 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rdi+8]
    vcomiss xmm1, xmm0
  }
  if ( !v13 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_48], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+88h+var_50], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 111, ASSERT_TYPE_ASSERT, "( mins.z ) <= ( maxs.z )", "%s <= %s\n\t%g, %g", "mins.z", "maxs.z", v48, v51) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm7, cs:__real@3f000000
    vmulss  xmm1, xmm1, xmm7
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm0, dword ptr [rdi+4]
    vaddss  xmm2, xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm2, xmm7
    vmovss  dword ptr [rsi+4], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vaddss  xmm2, xmm0, dword ptr [rbx+8]
    vmulss  xmm1, xmm2, xmm7
    vmovss  dword ptr [rsi+8], xmm1
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rdi+8]
    vmovss  xmm5, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsi+0Ch], xmm2
    vsubss  xmm2, xmm6, xmm5
    vmovaps xmm6, [rsp+88h+var_28]
    vmulss  xmm0, xmm2, xmm7
    vmovaps xmm7, [rsp+88h+var_38]
    vmovss  dword ptr [rsi+14h], xmm0
    vmovss  dword ptr [rsi+10h], xmm1
  }
}

/*
==============
Bounds_Transform
==============
*/
void Bounds_Transform(const Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Bounds *rotatedBounds)
{
  char v82; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  _RDI = rotatedBounds;
  _RSI = axis;
  _RBX = (char *)baseBounds;
  if ( rotatedBounds == baseBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 218, ASSERT_TYPE_ASSERT, "( rotatedBounds != baseBounds )", (const char *)&queryFormat, "rotatedBounds != baseBounds") )
    __debugbreak();
  if ( _RBX == &v82 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm10, dword ptr [rbx]
    vmovss  xmm11, dword ptr [rbx+8]
    vmulss  xmm1, xmm9, dword ptr [rsi+0Ch]
    vmulss  xmm0, xmm10, dword ptr [rsi]
    vmovss  xmm7, dword ptr [rsi+10h]
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi+1Ch]
    vmovss  xmm8, dword ptr [rsi+14h]
    vmovss  xmm5, dword ptr [rsi+8]
    vmovss  xmm6, dword ptr [rsi+20h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, dword ptr [rsi+18h]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, dword ptr [rbp+0]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm3, xmm10, xmm3
    vmulss  xmm1, xmm9, xmm7
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm11, xmm4
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm1, xmm2, dword ptr [rbp+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm3, xmm9, xmm8
    vmulss  xmm0, xmm10, xmm5
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm11, xmm6
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, dword ptr [rbp+8]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  xmm0, dword ptr [rsi]
    vandps  xmm0, xmm0, xmm3
    vmulss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vandps  xmm0, xmm0, xmm3
    vmulss  xmm0, xmm0, dword ptr [rbx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi+18h]
    vandps  xmm1, xmm1, xmm3
    vmulss  xmm0, xmm1, dword ptr [rbx+14h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovss  xmm2, dword ptr [rsi+10h]
    vmovss  xmm0, dword ptr [rsi+4]
    vandps  xmm0, xmm0, xmm3
    vmulss  xmm0, xmm0, dword ptr [rbx+0Ch]
    vandps  xmm2, xmm2, xmm3
    vmulss  xmm1, xmm2, dword ptr [rbx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi+1Ch]
    vandps  xmm1, xmm1, xmm3
    vmulss  xmm0, xmm1, dword ptr [rbx+14h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+10h], xmm1
    vmovss  xmm2, dword ptr [rsi+8]
    vmovss  xmm0, dword ptr [rsi+14h]
    vandps  xmm2, xmm2, xmm3
    vmulss  xmm1, xmm2, dword ptr [rbx+0Ch]
    vandps  xmm0, xmm0, xmm3
    vmulss  xmm0, xmm0, dword ptr [rbx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi+20h]
    vandps  xmm1, xmm1, xmm3
    vmulss  xmm0, xmm1, dword ptr [rbx+14h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+14h], xmm1
  }
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
Bounds_AddPoint
==============
*/
void Bounds_AddPoint(Bounds *bounds, const vec3_t *pt)
{
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 

  __asm { vmovss  xmm0, dword ptr [rdx] }
  HIDWORD(v24) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rcx]
    vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm5
  }
  HIDWORD(v25) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovups xmmword ptr [rsp], xmm4
  }
  HIDWORD(v26) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
    vsubps  xmm0, xmm4, xmm3
    vaddps  xmm1, xmm4, xmm3
    vminps  xmm2, xmm0, xmm5
    vmaxps  xmm0, xmm1, xmm5
    vaddps  xmm1, xmm2, xmm0
    vmulps  xmm3, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmovss  dword ptr [rcx], xmm3
    vsubps  xmm4, xmm3, xmm2
    vextractps dword ptr [rcx+4], xmm3, 1
    vextractps dword ptr [rcx+8], xmm3, 2
    vmovss  dword ptr [rcx+0Ch], xmm4
    vextractps dword ptr [rcx+10h], xmm4, 1
    vextractps dword ptr [rcx+14h], xmm4, 2
  }
}

/*
==============
Bounds_FromExtentBounds
==============
*/
void Bounds_FromExtentBounds(Bounds *toBounds, const ExtentBounds *fromBounds)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vmovss  xmm2, cs:__real@3f000000
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps [rsp+48h+var_38], xmm8
    vmovaps [rsp+48h+var_48], xmm9
    vmulss  xmm9, xmm1, xmm2
    vmovss  dword ptr [rcx], xmm9
    vmovss  xmm0, dword ptr [rdx+10h]
    vaddss  xmm1, xmm0, dword ptr [rdx+4]
    vmulss  xmm8, xmm1, xmm2
    vmovss  dword ptr [rcx+4], xmm8
    vmovss  xmm0, dword ptr [rdx+14h]
    vaddss  xmm1, xmm0, dword ptr [rdx+8]
    vmulss  xmm7, xmm1, xmm2
    vmovss  dword ptr [rcx+8], xmm7
    vsubss  xmm2, xmm9, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm6, dword ptr [rdx+8]
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx+10h]
    vmovss  xmm5, dword ptr [rdx+14h]
    vsubss  xmm1, xmm0, xmm9
    vmovaps xmm9, [rsp+48h+var_48]
    vmaxss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm4, xmm8
    vsubss  xmm3, xmm8, xmm3
    vmovaps xmm8, [rsp+48h+var_38]
    vmaxss  xmm1, xmm3, xmm0
    vsubss  xmm0, xmm5, xmm7
    vmovss  dword ptr [rcx+0Ch], xmm2
    vsubss  xmm2, xmm7, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rcx+10h], xmm1
    vmaxss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rcx+14h], xmm1
  }
}

/*
==============
Bounds_DistToPointSq
==============
*/
float Bounds_DistToPointSq(const Bounds *bounds, const vec3_t *point)
{
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 

  __asm { vmovss  xmm0, dword ptr [rdx] }
  HIDWORD(v27) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rcx]
    vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm5
  }
  HIDWORD(v28) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm4
    vsubps  xmm1, xmm5, xmm4
  }
  HIDWORD(v29) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
    vandnps xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm3, xmm2, xmm3
    vmaxps  xmm1, xmm3, xmm0
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Bounds_ContainsPoint
==============
*/
__int64 Bounds_ContainsPoint(const Bounds *bounds, const vec3_t *pt)
{
  _RDI = pt;
  _RBX = bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 496, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm1, xmm2
    vcomiss xmm1, dword ptr [rbx+0Ch]
  }
  return 0i64;
}

/*
==============
Bounds_ExpandToWidth
==============
*/
void Bounds_ExpandToWidth(Bounds *bounds)
{
  bool v4; 
  bool v5; 
  bool v6; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rcx+0Ch]
  }
  _RBX = bounds;
  v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f");
  v5 = !v4;
  if ( v4 )
    __debugbreak();
  __asm { vcomiss xmm6, dword ptr [rbx+10h] }
  if ( v4 )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rbx+14h] }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmaxss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  dword ptr [rbx+10h], xmm1
    vmovss  xmm0, dword ptr [rbx+14h]
    vmaxss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rbx+14h], xmm1
  }
}

/*
==============
Bounds_RaiseToWidth
==============
*/
void Bounds_RaiseToWidth(Bounds *bounds)
{
  bool v4; 
  bool v5; 
  bool v6; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rcx+0Ch]
  }
  _RBX = bounds;
  v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 840, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f");
  v5 = !v4;
  if ( v4 )
    __debugbreak();
  __asm { vcomiss xmm6, dword ptr [rbx+10h] }
  if ( v4 )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 841, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rbx+14h] }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 842, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmaxss  xmm3, xmm0, dword ptr [rbx+0Ch]
    vsubss  xmm1, xmm3, dword ptr [rbx+14h]
    vmaxss  xmm2, xmm1, xmm6
    vaddss  xmm0, xmm2, dword ptr [rbx+8]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+0Ch], xmm3
    vmovss  dword ptr [rbx+10h], xmm3
    vaddss  xmm0, xmm2, dword ptr [rbx+14h]
    vmovss  dword ptr [rbx+14h], xmm0
  }
}

/*
==============
Bounds_Expand
==============
*/
void Bounds_Expand(Bounds *bounds, const Bounds *added)
{
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm0, dword ptr [rcx]
  }
  HIDWORD(v33) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp]
    vmovss  xmm6, xmm6, xmm0
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vinsertps xmm6, xmm6, dword ptr [rcx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rcx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm6
  }
  HIDWORD(v34) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
    vmovss  xmm0, dword ptr [rdx]
    vmovups xmmword ptr [rsp], xmm3
    vsubps  xmm2, xmm6, xmm3
  }
  HIDWORD(v35) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm5
    vaddps  xmm3, xmm6, xmm3
  }
  HIDWORD(v36) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [rdx+10h], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+14h], 20h ; ' '
    vaddps  xmm1, xmm5, xmm4
    vsubps  xmm0, xmm5, xmm4
    vminps  xmm4, xmm0, xmm2
    vmaxps  xmm0, xmm1, xmm3
    vaddps  xmm1, xmm0, xmm4
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmovss  dword ptr [rcx], xmm2
    vsubps  xmm3, xmm2, xmm4
    vextractps dword ptr [rcx+4], xmm2, 1
    vextractps dword ptr [rcx+8], xmm2, 2
    vmovss  dword ptr [rcx+0Ch], xmm3
    vextractps dword ptr [rcx+10h], xmm3, 1
    vextractps dword ptr [rcx+14h], xmm3, 2
    vmovaps xmm6, [rsp+38h+var_18]
  }
}

/*
==============
Bounds_Max
==============
*/
float Bounds_Max(const Bounds *bounds, unsigned int axis)
{
  __int64 v7; 
  __int64 v8; 

  _RBX = (int)axis;
  _RDI = bounds;
  if ( axis >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
      __debugbreak();
    LODWORD(v8) = 3;
    LODWORD(v7) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+rbx*4+0Ch]
    vaddss  xmm0, xmm0, dword ptr [rdi+rbx*4]
  }
  return *(float *)&_XMM0;
}

/*
==============
Bounds_Min
==============
*/
float Bounds_Min(const Bounds *bounds, unsigned int axis)
{
  __int64 v7; 
  __int64 v8; 

  _RBX = (int)axis;
  _RDI = bounds;
  if ( axis >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
      __debugbreak();
    LODWORD(v8) = 3;
    LODWORD(v7) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+rbx*4]
    vsubss  xmm0, xmm0, dword ptr [rdi+rbx*4+0Ch]
  }
  return *(float *)&_XMM0;
}

/*
==============
Bounds_OverlapProjectionGrid
==============
*/
void Bounds_OverlapProjectionGrid(const Bounds *b, const tmat44_t<vec4_t> *projTransform, unsigned int gridResolution, unsigned int *outX, unsigned int *outY, unsigned int *outSizeX, unsigned int *outSizeY)
{
  signed int v60; 
  __int64 v84; 
  __int64 v85; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = projTransform;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RBX = b;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0E8h+var_88], xmm12
    vmovaps [rsp+0E8h+var_98], xmm13
    vmovaps [rsp+0E8h+var_A8], xmm14
  }
  if ( !b && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1345, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, dword ptr [rdi+10h]
    vmulss  xmm0, xmm9, dword ptr [rbx+4]
    vmovss  xmm7, dword ptr [rdi+14h]
    vmovss  xmm8, dword ptr [rdi+4]
    vmovss  xmm6, dword ptr [rbx+14h]
    vmovss  xmm10, dword ptr [rdi]
    vmulss  xmm1, xmm10, dword ptr [rbx]
    vmovss  xmm4, dword ptr [rbx+8]
    vmulss  xmm3, xmm7, dword ptr [rbx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, dword ptr [rbx+4]
    vmulss  xmm1, xmm4, dword ptr [rdi+20h]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm14, xmm2, dword ptr [rdi+30h]
    vmulss  xmm1, xmm8, dword ptr [rbx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rdi+24h]
    vmulss  xmm0, xmm10, dword ptr [rbx+0Ch]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbx+10h]
    vaddss  xmm13, xmm2, dword ptr [rdi+34h]
    vandps  xmm1, xmm1, xmm5
    vandps  xmm0, xmm0, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+20h]
    vmulss  xmm0, xmm8, dword ptr [rbx+0Ch]
    vandps  xmm1, xmm1, xmm5
    vaddss  xmm9, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rdi+24h]
    vandps  xmm0, xmm0, xmm5
    vandps  xmm3, xmm3, xmm5
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm0, xmm14, xmm9
    vxorps  xmm6, xmm6, xmm6
    vandps  xmm1, xmm1, xmm5
    vcvtsi2ss xmm6, xmm6, rsi
    vaddss  xmm8, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  v60 = gridResolution - 1;
  __asm
  {
    vroundss xmm0, xmm7, xmm2, 1
    vcvttss2si r14, xmm0
  }
  if ( (int)(gridResolution - 1) < 0 )
  {
    LODWORD(v84) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v84, gridResolution - 1) )
      __debugbreak();
  }
  __asm { vaddss  xmm0, xmm9, xmm14 }
  if ( v60 < (int)_R14 )
    LODWORD(_R14) = gridResolution - 1;
  __asm { vmulss  xmm2, xmm0, xmm6 }
  if ( (int)_R14 < 0 )
    LODWORD(_R14) = 0;
  __asm
  {
    vroundss xmm0, xmm7, xmm2, 1
    vcvttss2si rsi, xmm0
  }
  if ( v60 < 0 )
  {
    LODWORD(v85) = v60;
    LODWORD(v84) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v84, v85) )
      __debugbreak();
  }
  __asm { vsubss  xmm0, xmm13, xmm8 }
  if ( v60 < (int)_RSI )
    LODWORD(_RSI) = v60;
  __asm { vmulss  xmm2, xmm0, xmm6 }
  if ( (int)_RSI < 0 )
    LODWORD(_RSI) = 0;
  __asm
  {
    vroundss xmm0, xmm7, xmm2, 1
    vcvttss2si rbp, xmm0
  }
  if ( v60 < 0 )
  {
    LODWORD(v85) = v60;
    LODWORD(v84) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v84, v85) )
      __debugbreak();
  }
  __asm { vaddss  xmm0, xmm8, xmm13 }
  if ( v60 < (int)_RBP )
    LODWORD(_RBP) = v60;
  __asm { vmulss  xmm2, xmm0, xmm6 }
  if ( (int)_RBP < 0 )
    LODWORD(_RBP) = 0;
  __asm
  {
    vroundss xmm0, xmm7, xmm2, 1
    vcvttss2si rbx, xmm0
  }
  if ( v60 < 0 )
  {
    LODWORD(v85) = v60;
    LODWORD(v84) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v84, v85) )
      __debugbreak();
  }
  if ( v60 < (int)_RBX )
    LODWORD(_RBX) = v60;
  if ( (int)_RBX < 0 )
    LODWORD(_RBX) = 0;
  if ( (unsigned int)_R14 > (unsigned int)_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1356, ASSERT_TYPE_ASSERT, "(minX <= maxX)", (const char *)&queryFormat, "minX <= maxX") )
    __debugbreak();
  if ( (unsigned int)_RBP > (unsigned int)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1357, ASSERT_TYPE_ASSERT, "(minY <= maxY)", (const char *)&queryFormat, "minY <= maxY") )
    __debugbreak();
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  *outX = _R14;
  *outY = _RBP;
  *outSizeX = _RSI - _R14 + 1;
  *outSizeY = _RBX - _RBP + 1;
}

/*
==============
Sphere_OverlapOrTouch
==============
*/
__int64 Sphere_OverlapOrTouch(const Bounds *b, const Sphere *s)
{
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 

  _RDI = s;
  _RBX = b;
  if ( !b && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rdi] }
  HIDWORD(v29) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+30h]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rbx]
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vmovups xmmword ptr [rsp+30h], xmm5
  }
  HIDWORD(v30) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+30h]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vinsertps xmm4, xmm4, dword ptr [rbx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rbx+8], 20h ; ' '
    vmovups xmmword ptr [rsp+30h], xmm4
  }
  HIDWORD(v31) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+30h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbx+10h], 10h
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vinsertps xmm3, xmm3, dword ptr [rbx+14h], 20h ; ' '
    vsubps  xmm1, xmm5, xmm4
    vandnps xmm2, xmm0, xmm1
    vsubps  xmm3, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vmaxps  xmm1, xmm3, xmm0
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vcomiss xmm1, dword ptr [rdi+10h]
  }
  return 1i64;
}

/*
==============
Bounds_SetMinMax
==============
*/

void __fastcall Bounds_SetMinMax(Bounds *bounds, unsigned int axis, double min, double max)
{
  __int64 v17; 
  __int64 v18; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm7 }
  _RBX = (int)axis;
  _RSI = bounds;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  if ( axis >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
    __debugbreak();
  __asm
  {
    vaddss  xmm0, xmm8, xmm7
    vmulss  xmm0, xmm0, cs:__real@3f000000
    vmovss  dword ptr [rsi+rbx*4], xmm0
  }
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm7, xmm8
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovaps xmm7, [rsp+68h+var_18]
    vmovaps xmm8, [rsp+68h+var_28]
    vmovss  dword ptr [rsi+rbx*4+0Ch], xmm1
  }
}

/*
==============
Bounds_ForOBB
==============
*/
void Bounds_ForOBB(Bounds *bounds, const vec3_t *center, const vec3_t *halfSize, const vec3_t *xAxis, const vec3_t *yAxis, const vec3_t *zAxis)
{
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 

  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vmovss  xmm1, dword ptr [r9+4]
    vmovss  xmm2, dword ptr [r9+8]
  }
  _RAX = yAxis;
  _R10 = zAxis;
  HIDWORD(v39) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rax]
    vinsertps xmm5, xmm5, xmm1, 10h
    vmovss  xmm1, dword ptr [rax+4]
    vinsertps xmm5, xmm5, xmm2, 20h ; ' '
    vmovss  xmm2, dword ptr [rax+8]
    vmovups xmmword ptr [rsp], xmm5
  }
  HIDWORD(v40) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vmovss  xmm0, dword ptr [r10]
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmovups xmmword ptr [rsp], xmm3
  }
  HIDWORD(v41) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vinsertps xmm4, xmm4, dword ptr [r10+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r10+8], 20h ; ' '
    vandnps xmm1, xmm0, xmm5
    vandnps xmm3, xmm0, xmm3
    vandnps xmm4, xmm0, xmm4
    vbroadcastss xmm0, dword ptr [r8]
    vmulps  xmm2, xmm0, xmm1
    vbroadcastss xmm1, dword ptr [r8+4]
    vmulps  xmm0, xmm1, xmm3
    vbroadcastss xmm1, dword ptr [r8+8]
    vaddps  xmm3, xmm0, xmm2
    vmulps  xmm0, xmm1, xmm4
    vaddps  xmm2, xmm0, xmm3
    vmovss  dword ptr [rcx+0Ch], xmm2
    vextractps dword ptr [rcx+10h], xmm2, 1
    vextractps dword ptr [rcx+14h], xmm2, 2
  }
  bounds->midPoint = *center;
}

