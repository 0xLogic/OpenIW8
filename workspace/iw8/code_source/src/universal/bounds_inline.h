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
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  if ( mins->v[0] > maxs->v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 109, ASSERT_TYPE_ASSERT, "( mins.x ) <= ( maxs.x )", "%s <= %s\n\t%g, %g", "mins.x", "maxs.x", mins->v[0], maxs->v[0]) )
    __debugbreak();
  v6 = mins->v[1];
  v7 = maxs->v[1];
  if ( v6 > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 110, ASSERT_TYPE_ASSERT, "( mins.y ) <= ( maxs.y )", "%s <= %s\n\t%g, %g", "mins.y", "maxs.y", v6, v7) )
    __debugbreak();
  v8 = mins->v[2];
  v9 = maxs->v[2];
  if ( v8 > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 111, ASSERT_TYPE_ASSERT, "( mins.z ) <= ( maxs.z )", "%s <= %s\n\t%g, %g", "mins.z", "maxs.z", v8, v9) )
    __debugbreak();
  bounds->midPoint.v[0] = (float)(maxs->v[0] + mins->v[0]) * 0.5;
  bounds->midPoint.v[1] = (float)(maxs->v[1] + mins->v[1]) * 0.5;
  bounds->midPoint.v[2] = (float)(maxs->v[2] + mins->v[2]) * 0.5;
  v10 = maxs->v[2];
  v11 = mins->v[2];
  v12 = (float)(maxs->v[1] - mins->v[1]) * 0.5;
  bounds->halfSize.v[0] = (float)(maxs->v[0] - mins->v[0]) * 0.5;
  bounds->halfSize.v[2] = (float)(v10 - v11) * 0.5;
  bounds->halfSize.v[1] = v12;
}

/*
==============
Bounds_Transform
==============
*/
void Bounds_Transform(const Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Bounds *rotatedBounds)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  char v17; 

  if ( rotatedBounds == baseBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 218, ASSERT_TYPE_ASSERT, "( rotatedBounds != baseBounds )", (const char *)&queryFormat, "rotatedBounds != baseBounds") )
    __debugbreak();
  if ( baseBounds == (const Bounds *)&v17 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v8 = baseBounds->midPoint.v[1];
  v9 = baseBounds->midPoint.v[0];
  v10 = baseBounds->midPoint.v[2];
  v11 = axis->m[1].v[1];
  v12 = axis->m[0].v[1];
  v13 = axis->m[2].v[1];
  v14 = axis->m[1].v[2];
  v15 = axis->m[0].v[2];
  v16 = axis->m[2].v[2];
  rotatedBounds->midPoint.v[0] = (float)((float)((float)(v8 * axis->m[1].v[0]) + (float)(baseBounds->midPoint.v[0] * axis->m[0].v[0])) + (float)(v10 * axis->m[2].v[0])) + origin->v[0];
  rotatedBounds->midPoint.v[1] = (float)((float)((float)(v9 * v12) + (float)(v8 * v11)) + (float)(v10 * v13)) + origin->v[1];
  rotatedBounds->midPoint.v[2] = (float)((float)((float)(v8 * v14) + (float)(v9 * v15)) + (float)(v10 * v16)) + origin->v[2];
  rotatedBounds->halfSize.v[0] = (float)((float)(COERCE_FLOAT(LODWORD(axis->m[0].v[0]) & _xmm) * baseBounds->halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(axis->m[1].v[0]) & _xmm) * baseBounds->halfSize.v[1])) + (float)(COERCE_FLOAT(LODWORD(axis->m[2].v[0]) & _xmm) * baseBounds->halfSize.v[2]);
  rotatedBounds->halfSize.v[1] = (float)((float)(COERCE_FLOAT(LODWORD(axis->m[1].v[1]) & _xmm) * baseBounds->halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(axis->m[0].v[1]) & _xmm) * baseBounds->halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(axis->m[2].v[1]) & _xmm) * baseBounds->halfSize.v[2]);
  rotatedBounds->halfSize.v[2] = (float)((float)(COERCE_FLOAT(LODWORD(axis->m[0].v[2]) & _xmm) * baseBounds->halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(axis->m[1].v[2]) & _xmm) * baseBounds->halfSize.v[1])) + (float)(COERCE_FLOAT(LODWORD(axis->m[2].v[2]) & _xmm) * baseBounds->halfSize.v[2]);
}

/*
==============
Bounds_AddPoint
==============
*/
void Bounds_AddPoint(Bounds *bounds, const vec3_t *pt)
{
  __int128 v3; 
  __int128 v7; 
  __m128 v11; 
  __int128 v20; 
  __int128 v21; 
  __m128 v22; 

  HIDWORD(v20) = 0;
  v3 = v20;
  *(float *)&v3 = pt->v[0];
  _XMM5 = v3;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
  }
  v21 = _XMM5;
  HIDWORD(v21) = 0;
  v7 = v21;
  *(float *)&v7 = bounds->midPoint.v[0];
  _XMM4 = v7;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
  }
  v22 = _XMM4;
  v22.m128_i32[3] = 0;
  v11 = v22;
  v11.m128_f32[0] = bounds->halfSize.v[0];
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
  }
  _XMM0 = _mm128_sub_ps(_XMM4, _XMM3);
  _XMM1 = _mm128_add_ps(_XMM4, _XMM3);
  __asm
  {
    vminps  xmm2, xmm0, xmm5
    vmaxps  xmm0, xmm1, xmm5
  }
  _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
  bounds->midPoint.v[0] = _XMM3.m128_f32[0];
  _XMM4 = _mm128_sub_ps(_XMM3, _XMM2);
  __asm
  {
    vextractps dword ptr [rcx+4], xmm3, 1
    vextractps dword ptr [rcx+8], xmm3, 2
  }
  bounds->halfSize.v[0] = _XMM4.m128_f32[0];
  __asm
  {
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
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v9; 
  float v10; 
  __int128 v13; 
  __int128 v16; 

  v2 = LODWORD(fromBounds->maxs.v[0]);
  *(float *)&v2 = (float)(fromBounds->maxs.v[0] + fromBounds->mins.v[0]) * 0.5;
  v3 = v2;
  toBounds->midPoint.v[0] = *(float *)&v2;
  v4 = LODWORD(fromBounds->maxs.v[1]);
  *(float *)&v4 = (float)(fromBounds->maxs.v[1] + fromBounds->mins.v[1]) * 0.5;
  v5 = v4;
  toBounds->midPoint.v[1] = *(float *)&v4;
  v6 = LODWORD(fromBounds->maxs.v[2]);
  *(float *)&v6 = (float)(fromBounds->maxs.v[2] + fromBounds->mins.v[2]) * 0.5;
  v7 = v6;
  toBounds->midPoint.v[2] = *(float *)&v6;
  v9 = v3;
  *(float *)&v9 = *(float *)&v3 - fromBounds->mins.v[0];
  _XMM2 = v9;
  v10 = fromBounds->mins.v[2];
  __asm { vmaxss  xmm2, xmm2, xmm1 }
  v13 = v5;
  *(float *)&v13 = *(float *)&v5 - fromBounds->mins.v[1];
  _XMM3 = v13;
  __asm { vmaxss  xmm1, xmm3, xmm0 }
  toBounds->halfSize.v[0] = *(float *)&_XMM2;
  v16 = v7;
  *(float *)&v16 = *(float *)&v7 - v10;
  _XMM2 = v16;
  toBounds->halfSize.v[1] = *(float *)&_XMM1;
  __asm { vmaxss  xmm1, xmm2, xmm0 }
  toBounds->halfSize.v[2] = *(float *)&_XMM1;
}

/*
==============
Bounds_DistToPointSq
==============
*/
float Bounds_DistToPointSq(const Bounds *bounds, const vec3_t *point)
{
  __int128 v3; 
  __m128 v7; 
  __m128 v11; 
  __int128 v22; 
  __m128 v23; 
  __m128 v24; 

  HIDWORD(v22) = 0;
  v3 = v22;
  *(float *)&v3 = point->v[0];
  _XMM5 = v3;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
  }
  v23 = _XMM5;
  v23.m128_i32[3] = 0;
  v7 = v23;
  v7.m128_f32[0] = bounds->midPoint.v[0];
  _XMM4 = v7;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
  }
  v24 = _XMM4;
  _mm128_sub_ps(_XMM5, _XMM4);
  v24.m128_i32[3] = 0;
  v11 = v24;
  v11.m128_f32[0] = bounds->halfSize.v[0];
  _XMM3 = v11;
  __asm { vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h }
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
    vandnps xmm2, xmm0, xmm1
  }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
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
_BOOL8 Bounds_ContainsPoint(const Bounds *bounds, const vec3_t *pt)
{
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 496, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(pt->v[0] - bounds->midPoint.v[0]) & _xmm) < bounds->halfSize.v[0] && COERCE_FLOAT(COERCE_UNSIGNED_INT(pt->v[1] - bounds->midPoint.v[1]) & _xmm) < bounds->halfSize.v[1] && COERCE_FLOAT(COERCE_UNSIGNED_INT(pt->v[2] - bounds->midPoint.v[2]) & _xmm) < bounds->halfSize.v[2];
}

/*
==============
Bounds_ExpandToWidth
==============
*/
void Bounds_ExpandToWidth(Bounds *bounds)
{
  if ( bounds->halfSize.v[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
    __debugbreak();
  if ( bounds->halfSize.v[1] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
    __debugbreak();
  if ( bounds->halfSize.v[2] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
    __debugbreak();
  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm { vmaxss  xmm1, xmm0, dword ptr [rbx+0Ch] }
  bounds->halfSize.v[0] = *(float *)&_XMM1;
  bounds->halfSize.v[1] = *(float *)&_XMM1;
  _XMM0 = LODWORD(bounds->halfSize.v[2]);
  __asm { vmaxss  xmm1, xmm0, xmm1 }
  bounds->halfSize.v[2] = *(float *)&_XMM1;
}

/*
==============
Bounds_RaiseToWidth
==============
*/
void Bounds_RaiseToWidth(Bounds *bounds)
{
  __int128 v5; 

  if ( bounds->halfSize.v[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 840, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
    __debugbreak();
  if ( bounds->halfSize.v[1] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 841, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
    __debugbreak();
  if ( bounds->halfSize.v[2] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 842, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
    __debugbreak();
  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm { vmaxss  xmm3, xmm0, dword ptr [rbx+0Ch] }
  v5 = _XMM3;
  *(float *)&v5 = *(float *)&_XMM3 - bounds->halfSize.v[2];
  _XMM1 = v5;
  __asm { vmaxss  xmm2, xmm1, xmm6 }
  bounds->midPoint.v[2] = *(float *)&_XMM2 + bounds->midPoint.v[2];
  bounds->halfSize.v[0] = *(float *)&_XMM3;
  bounds->halfSize.v[1] = *(float *)&_XMM3;
  bounds->halfSize.v[2] = *(float *)&_XMM2 + bounds->halfSize.v[2];
}

/*
==============
Bounds_Expand
==============
*/
void Bounds_Expand(Bounds *bounds, const Bounds *added)
{
  __int128 v3; 
  __m128 v7; 
  __m128 v11; 
  __m128 v15; 
  __int128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 

  HIDWORD(v24) = 0;
  v3 = v24;
  *(float *)&v3 = bounds->midPoint.v[0];
  _XMM6 = v3;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rcx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rcx+8], 20h ; ' '
  }
  v25 = _XMM6;
  v25.m128_i32[3] = 0;
  v7 = v25;
  v7.m128_f32[0] = bounds->halfSize.v[0];
  _XMM3 = v7;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
  }
  v26 = _XMM3;
  _mm128_sub_ps(_XMM6, _XMM3);
  v26.m128_i32[3] = 0;
  v11 = v26;
  v11.m128_f32[0] = added->midPoint.v[0];
  _XMM5 = v11;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
  }
  v27 = _XMM5;
  _mm128_add_ps(_XMM6, _XMM3);
  v27.m128_i32[3] = 0;
  v15 = v27;
  v15.m128_f32[0] = added->halfSize.v[0];
  _XMM4 = v15;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rdx+10h], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+14h], 20h ; ' '
  }
  _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
  _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
  __asm
  {
    vminps  xmm4, xmm0, xmm2
    vmaxps  xmm0, xmm1, xmm3
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
  bounds->midPoint.v[0] = _XMM2.m128_f32[0];
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM4);
  __asm
  {
    vextractps dword ptr [rcx+4], xmm2, 1
    vextractps dword ptr [rcx+8], xmm2, 2
  }
  bounds->halfSize.v[0] = _XMM3.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rcx+10h], xmm3, 1
    vextractps dword ptr [rcx+14h], xmm3, 2
  }
}

/*
==============
Bounds_Max
==============
*/
float Bounds_Max(const Bounds *bounds, unsigned int axis)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 

  v2 = (int)axis;
  if ( axis >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
      __debugbreak();
    LODWORD(v6) = 3;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return bounds->halfSize.v[v2] + bounds->midPoint.v[v2];
}

/*
==============
Bounds_Min
==============
*/
float Bounds_Min(const Bounds *bounds, unsigned int axis)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 

  v2 = (int)axis;
  if ( axis >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
      __debugbreak();
    LODWORD(v6) = 3;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return bounds->midPoint.v[v2] - bounds->halfSize.v[v2];
}

/*
==============
Bounds_OverlapProjectionGrid
==============
*/
void Bounds_OverlapProjectionGrid(const Bounds *b, const tmat44_t<vec4_t> *projTransform, unsigned int gridResolution, unsigned int *outX, unsigned int *outY, unsigned int *outSizeX, unsigned int *outSizeY)
{
  signed int v10; 
  signed int v12; 
  int v14; 
  signed int v16; 
  int v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !b && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1345, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  _XMM7 = 0i64;
  v10 = gridResolution - 1;
  __asm { vroundss xmm0, xmm7, xmm2, 1 }
  v12 = (int)*(float *)&_XMM0;
  if ( (int)(gridResolution - 1) < 0 )
  {
    LODWORD(v19) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v19, gridResolution - 1) )
      __debugbreak();
  }
  if ( v10 < v12 )
    v12 = gridResolution - 1;
  if ( v12 < 0 )
    v12 = 0;
  __asm { vroundss xmm0, xmm7, xmm2, 1 }
  v14 = (int)*(float *)&_XMM0;
  if ( v10 < 0 )
  {
    LODWORD(v20) = v10;
    LODWORD(v19) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v19, v20) )
      __debugbreak();
  }
  if ( v10 < v14 )
    v14 = v10;
  if ( v14 < 0 )
    v14 = 0;
  __asm { vroundss xmm0, xmm7, xmm2, 1 }
  v16 = (int)*(float *)&_XMM0;
  if ( v10 < 0 )
  {
    LODWORD(v20) = v10;
    LODWORD(v19) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v19, v20) )
      __debugbreak();
  }
  if ( v10 < v16 )
    v16 = v10;
  if ( v16 < 0 )
    v16 = 0;
  __asm { vroundss xmm0, xmm7, xmm2, 1 }
  v18 = (int)*(float *)&_XMM0;
  if ( v10 < 0 )
  {
    LODWORD(v20) = v10;
    LODWORD(v19) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v19, v20) )
      __debugbreak();
  }
  if ( v10 < v18 )
    v18 = v10;
  if ( v18 < 0 )
    v18 = 0;
  if ( v12 > (unsigned int)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1356, ASSERT_TYPE_ASSERT, "(minX <= maxX)", (const char *)&queryFormat, "minX <= maxX") )
    __debugbreak();
  if ( v16 > (unsigned int)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1357, ASSERT_TYPE_ASSERT, "(minY <= maxY)", (const char *)&queryFormat, "minY <= maxY") )
    __debugbreak();
  *outX = v12;
  *outY = v16;
  *outSizeX = v14 - v12 + 1;
  *outSizeY = v18 - v16 + 1;
}

/*
==============
Sphere_OverlapOrTouch
==============
*/
_BOOL8 Sphere_OverlapOrTouch(const Bounds *b, const Sphere *s)
{
  __int128 v5; 
  __m128 v9; 
  __m128 v13; 
  __int128 v24; 
  __m128 v25; 
  __m128 v26; 

  if ( !b && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  HIDWORD(v24) = 0;
  v5 = v24;
  *(float *)&v5 = s->origin.v[0];
  _XMM5 = v5;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
  }
  v25 = _XMM5;
  v25.m128_i32[3] = 0;
  v9 = v25;
  v9.m128_f32[0] = b->midPoint.v[0];
  _XMM4 = v9;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rbx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rbx+8], 20h ; ' '
  }
  v26 = _XMM4;
  v26.m128_i32[3] = 0;
  v13 = v26;
  v13.m128_f32[0] = b->halfSize.v[0];
  _XMM3 = v13;
  __asm { vinsertps xmm3, xmm3, dword ptr [rbx+10h], 10h }
  _XMM0 = g_negativeZero.v;
  __asm { vinsertps xmm3, xmm3, dword ptr [rbx+14h], 20h ; ' ' }
  _mm128_sub_ps(_XMM5, _XMM4);
  __asm { vandnps xmm2, xmm0, xmm1 }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  return *(float *)&_XMM1 <= s->radiusSq;
}

/*
==============
Bounds_SetMinMax
==============
*/
void Bounds_SetMinMax(Bounds *bounds, unsigned int axis, float min, float max)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 

  v4 = (int)axis;
  if ( axis >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
    __debugbreak();
  bounds->midPoint.v[v4] = (float)(min + max) * 0.5;
  if ( (unsigned int)v4 >= 3 )
  {
    LODWORD(v7) = 3;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  bounds->halfSize.v[v4] = (float)(max - min) * 0.5;
}

/*
==============
Bounds_ForOBB
==============
*/
void Bounds_ForOBB(Bounds *bounds, const vec3_t *center, const vec3_t *halfSize, const vec3_t *xAxis, const vec3_t *yAxis, const vec3_t *zAxis)
{
  __int128 v7; 
  __int128 v11; 
  __int128 v15; 
  __m128 v23; 
  __m128 v25; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 

  HIDWORD(v28) = 0;
  v7 = v28;
  *(float *)&v7 = xAxis->v[0];
  _XMM5 = v7;
  __asm
  {
    vinsertps xmm5, xmm5, xmm1, 10h
    vinsertps xmm5, xmm5, xmm2, 20h ; ' '
  }
  v29 = _XMM5;
  HIDWORD(v29) = 0;
  v11 = v29;
  *(float *)&v11 = yAxis->v[0];
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
  }
  v30 = _XMM3;
  HIDWORD(v30) = 0;
  v15 = v30;
  *(float *)&v15 = zAxis->v[0];
  _XMM4 = v15;
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [r10+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r10+8], 20h ; ' '
    vandnps xmm1, xmm0, xmm5
    vandnps xmm3, xmm0, xmm3
    vandnps xmm4, xmm0, xmm4
    vbroadcastss xmm0, dword ptr [r8]
  }
  v23 = _mm128_mul_ps(_XMM0, _XMM1);
  __asm { vbroadcastss xmm1, dword ptr [r8+4] }
  v25 = _mm128_mul_ps(_XMM1, _XMM3);
  __asm { vbroadcastss xmm1, dword ptr [r8+8] }
  _XMM2 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM4), _mm128_add_ps(v25, v23));
  bounds->halfSize.v[0] = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rcx+10h], xmm2, 1
    vextractps dword ptr [rcx+14h], xmm2, 2
  }
  bounds->midPoint = *center;
}

