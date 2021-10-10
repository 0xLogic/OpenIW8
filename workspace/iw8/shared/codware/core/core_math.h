/*
==============
LerpAngles
==============
*/

void __fastcall LerpAngles(const vec3_t *from, const vec3_t *to, const float frac, vec3_t *out)
{
  ?LerpAngles@@YAXAEBTvec3_t@@0MAEAT1@@Z(from, to, frac, out);
}

/*
==============
Vec3Basis_RightHanded
==============
*/

void __fastcall Vec3Basis_RightHanded(const vec3_t *forward, vec3_t *left, vec3_t *up)
{
  ?Vec3Basis_RightHanded@@YAXAEBTvec3_t@@AEAT1@1@Z(forward, left, up);
}

/*
==============
QuatMultiply
==============
*/

void __fastcall QuatMultiply(const vec4_t *in1, const vec4_t *in2, vec4_t *out)
{
  ?QuatMultiply@@YAXAEBTvec4_t@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
RotatePoint
==============
*/

void __fastcall RotatePoint(const vec3_t *v, const vec4_t *q, vec3_t *out)
{
  ?RotatePoint@@YAXAEBTvec3_t@@AEBTvec4_t@@AEAT1@@Z(v, q, out);
}

/*
==============
MatrixTransformVector
==============
*/

void __fastcall MatrixTransformVector(const vec3_t *in1, const tmat33_t<vec3_t> *in2, vec3_t *out)
{
  ?MatrixTransformVector@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(in1, in2, out);
}

/*
==============
UnitQuatToAxis
==============
*/

void __fastcall UnitQuatToAxis(const vec4_t *quat, tmat33_t<vec3_t> *axis)
{
  ?UnitQuatToAxis@@YAXAEBTvec4_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(quat, axis);
}

/*
==============
ClosestPointToBounds
==============
*/

bool __fastcall ClosestPointToBounds(const vec3_t *v, const vec3_t *mins, const vec3_t *maxs, vec3_t *out)
{
  return ?ClosestPointToBounds@@YA_NAEBTvec3_t@@00AEAT1@@Z(v, mins, maxs, out);
}

/*
==============
QuatMultiply
==============
*/
void QuatMultiply(const vec4_t *in1, const vec4_t *in2, vec4_t *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  if ( in2 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  out->v[0] = (float)((float)((float)(in1->v[0] * in2->v[3]) + (float)(in1->v[3] * in2->v[0])) + (float)(in2->v[1] * in1->v[2])) - (float)(in2->v[2] * in1->v[1]);
  out->v[1] = (float)((float)((float)(in1->v[1] * in2->v[3]) - (float)(in1->v[2] * in2->v[0])) + (float)(in1->v[3] * in2->v[1])) + (float)(in2->v[2] * in1->v[0]);
  out->v[2] = (float)((float)((float)(in1->v[1] * in2->v[0]) + (float)(in1->v[2] * in2->v[3])) - (float)(in2->v[1] * in1->v[0])) + (float)(in1->v[3] * in2->v[2]);
  out->v[3] = (float)((float)((float)(in1->v[3] * in2->v[3]) - (float)(in1->v[0] * in2->v[0])) - (float)(in2->v[1] * in1->v[1])) - (float)(in2->v[2] * in1->v[2]);
}

/*
==============
MatrixTransformVector
==============
*/
void MatrixTransformVector(const vec3_t *in1, const tmat33_t<vec3_t> *in2, vec3_t *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  out->v[0] = (float)((float)(in2->m[1].v[0] * in1->v[1]) + (float)(in1->v[0] * in2->m[0].v[0])) + (float)(in2->m[2].v[0] * in1->v[2]);
  out->v[1] = (float)((float)(in2->m[0].v[1] * in1->v[0]) + (float)(in2->m[1].v[1] * in1->v[1])) + (float)(in2->m[2].v[1] * in1->v[2]);
  out->v[2] = (float)((float)(in2->m[0].v[2] * in1->v[0]) + (float)(in2->m[1].v[2] * in1->v[1])) + (float)(in2->m[2].v[2] * in1->v[2]);
}

/*
==============
RotatePoint
==============
*/
void RotatePoint(const vec3_t *v, const vec4_t *q, vec3_t *out)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  v3 = q->v[0];
  v4 = q->v[1];
  v5 = q->v[2];
  v6 = q->v[3];
  v7 = v5 * q->v[0];
  LODWORD(v8) = COERCE_UNSIGNED_INT(v3 * v3) ^ _xmm;
  LODWORD(v9) = COERCE_UNSIGNED_INT(v5 * v5) ^ _xmm;
  LODWORD(v10) = COERCE_UNSIGNED_INT(v4 * v4) ^ _xmm;
  out->v[0] = (float)((float)((float)((float)((float)(v9 + v10) * v->v[0]) + (float)((float)((float)(v4 * q->v[0]) - (float)(v5 * v6)) * v->v[1])) + (float)((float)(v7 + (float)(v4 * v6)) * v->v[2])) * 2.0) + v->v[0];
  out->v[1] = (float)((float)((float)((float)((float)((float)(v4 * v3) + (float)(v5 * v6)) * v->v[0]) + (float)((float)(v9 + v8) * v->v[1])) + (float)((float)((float)(v5 * v4) - (float)(v3 * v6)) * v->v[2])) * 2.0) + v->v[1];
  out->v[2] = (float)((float)((float)((float)((float)(v7 - (float)(v4 * v6)) * v->v[0]) + (float)((float)((float)(v5 * v4) + (float)(v3 * v6)) * v->v[1])) + (float)((float)(v10 + v8) * v->v[2])) * 2.0) + v->v[2];
}

/*
==============
UnitQuatToAxis
==============
*/
void UnitQuatToAxis(const vec4_t *quat, tmat33_t<vec3_t> *axis)
{
  float v2; 
  float v3; 
  float v5; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 

  v2 = quat->v[1];
  v3 = quat->v[0];
  v5 = quat->v[2];
  v7 = quat->v[3];
  v8 = (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v3, v2, v5, v7, fsqrt(v8)) )
    __debugbreak();
  v9 = quat->v[1];
  v10 = quat->v[2];
  v11 = quat->v[3];
  v12 = 2.0 * quat->v[0];
  v13 = v12 * quat->v[0];
  v14 = v9 * v12;
  v15 = v9 * (float)(v9 * 2.0);
  v16 = v10 * (float)(v9 * 2.0);
  v17 = v11 * (float)(v9 * 2.0);
  v18 = v11 * (float)(v10 * 2.0);
  v19 = v10 * (float)(v10 * 2.0);
  axis->m[0].v[0] = 1.0 - (float)(v19 + v15);
  axis->m[0].v[1] = v18 + v14;
  axis->m[0].v[2] = (float)(v10 * v12) - v17;
  axis->m[1].v[0] = v14 - v18;
  axis->m[1].v[1] = 1.0 - (float)(v19 + v13);
  axis->m[1].v[2] = v16 + (float)(v11 * v12);
  axis->m[2].v[0] = v17 + (float)(v10 * v12);
  axis->m[2].v[1] = v16 - (float)(v11 * v12);
  axis->m[2].v[2] = 1.0 - (float)(v15 + v13);
}

/*
==============
ClosestPointToBounds
==============
*/
bool ClosestPointToBounds(const vec3_t *v, const vec3_t *mins, const vec3_t *maxs, vec3_t *out)
{
  signed __int64 v4; 
  signed __int64 v5; 
  signed __int64 v6; 
  char v7; 
  unsigned int v8; 
  bool v9; 
  const vec3_t *v10; 
  float v11; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v4 = (char *)mins - (char *)maxs;
  v5 = (char *)v - (char *)maxs;
  v6 = (char *)out - (char *)maxs;
  v7 = 0;
  v8 = 0;
  v9 = 1;
  v10 = maxs;
  do
  {
    if ( !v9 )
    {
      LODWORD(v16) = 3;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v16) )
        __debugbreak();
      LODWORD(v17) = 3;
      LODWORD(v14) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, v17) )
        __debugbreak();
    }
    if ( *(float *)((char *)v10->v + v4) > *(float *)((char *)v10->v + v5) )
    {
      if ( v8 >= 3 )
      {
        LODWORD(v16) = 3;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v16) )
          __debugbreak();
      }
      v11 = *(float *)((char *)v10->v + v4);
LABEL_22:
      if ( v8 >= 3 )
      {
        LODWORD(v16) = 3;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v16) )
          __debugbreak();
      }
      v7 = 1;
      goto LABEL_32;
    }
    if ( v8 >= 3 )
    {
      LODWORD(v16) = 3;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v16) )
        __debugbreak();
      LODWORD(v18) = 3;
      LODWORD(v15) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v18) )
        __debugbreak();
    }
    if ( v10->v[0] < *(float *)((char *)v10->v + v5) )
    {
      if ( v8 >= 3 )
      {
        LODWORD(v16) = 3;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v16) )
          __debugbreak();
      }
      v11 = v10->v[0];
      goto LABEL_22;
    }
    if ( v8 >= 3 )
    {
      LODWORD(v16) = 3;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v16) )
        __debugbreak();
    }
    v11 = *(float *)((char *)v10->v + v5);
    if ( v8 >= 3 )
    {
      LODWORD(v16) = 3;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v16) )
        __debugbreak();
    }
LABEL_32:
    *(float *)((char *)v10->v + v6) = v11;
    v10 = (const vec3_t *)((char *)v10 + 4);
    v9 = ++v8 < 3;
  }
  while ( (int)v8 < 3 );
  return v7 == 0;
}

/*
==============
LerpAngles
==============
*/
void LerpAngles(const vec3_t *from, const vec3_t *to, const float frac, vec3_t *out)
{
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  out->v[0] = (float)((float)((float)((float)((float)(to->v[0] - from->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * frac) + from->v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  out->v[1] = (float)((float)((float)((float)((float)(to->v[1] - from->v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * frac) + from->v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  out->v[2] = (float)((float)((float)((float)((float)(to->v[2] - from->v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * frac) + from->v[2];
}

/*
==============
Vec3Basis_RightHanded
==============
*/
void Vec3Basis_RightHanded(const vec3_t *forward, vec3_t *left, vec3_t *up)
{
  PerpendicularVector(forward, up);
  if ( up == left && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( forward == left && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  left->v[0] = (float)(up->v[1] * forward->v[2]) - (float)(forward->v[1] * up->v[2]);
  left->v[1] = (float)(forward->v[0] * up->v[2]) - (float)(up->v[0] * forward->v[2]);
  left->v[2] = (float)(forward->v[1] * up->v[0]) - (float)(forward->v[0] * up->v[1]);
}

