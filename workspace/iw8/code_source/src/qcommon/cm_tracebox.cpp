/*
==============
CM_TraceBox_NoFloat4
==============
*/

int __fastcall CM_TraceBox_NoFloat4(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return ?CM_TraceBox_NoFloat4@@YAHPEBUTraceExtents@@PEBUBounds@@M@Z(extents, bounds, fraction);
}

/*
==============
CM_CalcTraceExtents
==============
*/

void __fastcall CM_CalcTraceExtents(TraceExtents *extents)
{
  ?CM_CalcTraceExtents@@YAXPEAUTraceExtents@@@Z(extents);
}

/*
==============
CM_TraceBox
==============
*/

int __fastcall CM_TraceBox(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return ?CM_TraceBox@@YAHPEBUTraceExtents@@PEBUBounds@@M@Z(extents, bounds, fraction);
}

/*
==============
CM_TraceBox_Float4
==============
*/

int __fastcall CM_TraceBox_Float4(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return ?CM_TraceBox_Float4@@YAHPEBUTraceExtents@@PEBUBounds@@M@Z(extents, bounds, fraction);
}

/*
==============
CM_CalcTraceExtents
==============
*/
void CM_CalcTraceExtents(TraceExtents *extents)
{
  float v1; 
  float v2; 
  float v3; 
  float v4; 
  int v5; 
  float v6; 
  signed __int64 v7; 
  float *v8; 
  bool v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  __int64 v14; 
  int v15[4]; 

  v1 = extents->end.v[0];
  v2 = v1 - extents->start.v[0];
  v3 = extents->end.v[1] - extents->start.v[1];
  v4 = extents->end.v[2] - extents->start.v[2];
  extents->midPoint.v[0] = (float)(v1 + extents->start.v[0]) * 0.5;
  extents->midPoint.v[1] = (float)(extents->end.v[1] + extents->start.v[1]) * 0.5;
  extents->midPoint.v[2] = (float)(extents->end.v[2] + extents->start.v[2]) * 0.5;
  extents->halfDelta.v[2] = v4 * 0.5;
  extents->halfDelta.v[0] = v2 * 0.5;
  extents->halfDelta.v[1] = v3 * 0.5;
  extents->halfDeltaAbs.v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 * 0.5) & _xmm);
  extents->halfDeltaAbs.v[1] = COERCE_FLOAT(LODWORD(extents->halfDelta.v[1]) & _xmm);
  v5 = 0;
  LODWORD(v6) = LODWORD(extents->halfDelta.v[2]) & _xmm;
  v7 = (char *)&extents->invDeltaAbs - (char *)v15;
  v8 = (float *)v15;
  v15[2] = LODWORD(v4) & _xmm;
  extents->halfDeltaAbs.v[2] = v6;
  v15[0] = LODWORD(v2) & _xmm;
  v15[1] = LODWORD(v3) & _xmm;
  v10 = 1;
  do
  {
    if ( !v10 )
    {
      LODWORD(v14) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v11 = *v8;
    if ( *v8 >= 0.000001 )
    {
      if ( (unsigned int)v5 >= 3 )
      {
        LODWORD(v14) = 3;
        LODWORD(v13) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v12 = 1.0 / v11;
    }
    else
    {
      v12 = 0.0;
    }
    if ( (unsigned int)v5 >= 3 )
    {
      LODWORD(v14) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    *(float *)((char *)v8++ + v7) = v12;
    v10 = (unsigned int)++v5 < 3;
  }
  while ( v5 < 3 );
  extents->midPointPad = 0.0;
  extents->halfDeltaPad = 0.0;
  extents->halfDeltaAbsPad = 0.0;
  extents->startPad = 0.0;
  extents->endPad = 0.0;
}

/*
==============
CM_TraceBox
==============
*/

int __fastcall CM_TraceBox(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  return CM_TraceBox_Float4(extents, bounds, fraction);
}

/*
==============
CM_TraceBox_Float4
==============
*/

_BOOL8 __fastcall CM_TraceBox_Float4(const TraceExtents *extents, const Bounds *bounds, double fraction)
{
  __int128 v5; 
  __m128 v9; 
  __m128 v13; 
  __m128 v17; 
  __m128 v21; 
  __m128 v24; 
  __m128 v25; 
  __int128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 

  _XMM10 = g_negativeZero.v;
  HIDWORD(v35) = 0;
  v5 = v35;
  *(float *)&v5 = extents->start.v[0];
  _XMM5 = v5;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rcx+44h], 10h
    vinsertps xmm5, xmm5, xmm3, 20h ; ' '
  }
  v36 = _XMM5;
  v36.m128_i32[3] = 0;
  v9 = v36;
  v9.m128_f32[0] = extents->halfDelta.v[0];
  _XMM7 = v9;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [rcx+14h], 10h
    vinsertps xmm7, xmm7, dword ptr [rcx+18h], 20h ; ' '
  }
  v37 = _XMM7;
  v37.m128_i32[3] = 0;
  v13 = v37;
  v13.m128_f32[0] = extents->halfDeltaAbs.v[0];
  _XMM8 = v13;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rcx+24h], 10h
    vinsertps xmm8, xmm8, dword ptr [rcx+28h], 20h ; ' '
  }
  v38 = _XMM8;
  v38.m128_i32[3] = 0;
  v17 = v38;
  v17.m128_f32[0] = bounds->midPoint.v[0];
  _XMM4 = v17;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
  }
  v39 = _XMM4;
  v39.m128_i32[3] = 0;
  v21 = v39;
  v21.m128_f32[0] = bounds->halfSize.v[0];
  _XMM9 = v21;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rdx+10h], 10h
    vinsertps xmm9, xmm9, dword ptr [rdx+14h], 20h ; ' '
  }
  v24 = _mm_shuffle_ps(*(__m128 *)&fraction, *(__m128 *)&fraction, 0);
  v25 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(v24, _XMM7), _XMM5), _XMM4);
  __asm { vandnps xmm2, xmm10, xmm5 }
  _XMM1 = _mm128_add_ps(_mm128_mul_ps(v24, _XMM8), _XMM9);
  __asm
  {
    vcmpltps xmm2, xmm1, xmm2
    vmovmskps eax, xmm2
  }
  if ( (_EAX & 0xF) != 0 )
    return 1i64;
  _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), _mm_shuffle_ps(v25, v25, 210)), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 210), _mm_shuffle_ps(v25, v25, 201)));
  __asm { vandnps xmm3, xmm10, xmm1 }
  _XMM1 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), _mm_shuffle_ps(_XMM8, _XMM8, 201)), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), _mm_shuffle_ps(_XMM8, _XMM8, 210)));
  __asm
  {
    vcmpltps xmm2, xmm1, xmm3
    vmovmskps eax, xmm2
  }
  return (_EAX & 0xF) != 0;
}

/*
==============
CM_TraceBox_NoFloat4
==============
*/
_BOOL8 CM_TraceBox_NoFloat4(const TraceExtents *extents, const Bounds *bounds, float fraction)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  _BOOL8 result; 

  v3 = extents->halfDelta.v[0];
  v4 = extents->halfDeltaAbs.v[0];
  v5 = bounds->halfSize.v[0];
  v6 = (float)((float)(v3 * fraction) + extents->start.v[0]) - bounds->midPoint.v[0];
  result = 1;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) <= (float)((float)(v4 * fraction) + v5) )
  {
    v7 = extents->halfDelta.v[1];
    v8 = extents->halfDeltaAbs.v[1];
    v9 = bounds->halfSize.v[1];
    v10 = (float)((float)(v7 * fraction) + extents->start.v[1]) - bounds->midPoint.v[1];
    if ( COERCE_FLOAT(LODWORD(v10) & _xmm) <= (float)((float)(v8 * fraction) + v9) )
    {
      v11 = extents->halfDelta.v[2];
      v12 = (float)((float)(v11 * fraction) + extents->start.v[2]) - bounds->midPoint.v[2];
      if ( COERCE_FLOAT(LODWORD(v12) & _xmm) <= (float)((float)(fraction * extents->halfDeltaAbs.v[2]) + bounds->halfSize.v[2]) )
      {
        v13 = extents->halfDeltaAbs.v[2];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v12 * v7) - (float)(v10 * v11)) & _xmm) <= (float)((float)(v13 * v9) + (float)(v8 * bounds->halfSize.v[2])) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v6 * v11) - (float)(v12 * v3)) & _xmm) <= (float)((float)(v13 * v5) + (float)(v4 * bounds->halfSize.v[2])) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v10 * v3) - (float)(v6 * v7)) & _xmm) <= (float)((float)(v8 * v5) + (float)(v9 * v4)) )
          return 0;
      }
    }
  }
  return result;
}

