/*
==============
DynEnt_Vec4LengthSq
==============
*/

long double __fastcall DynEnt_Vec4LengthSq(const dvec4_t *v)
{
  return ?DynEnt_Vec4LengthSq@@YANAEBTdvec4_t@@@Z(v);
}

/*
==============
DynEnt_AxisComponentsToQuat
==============
*/

void __fastcall DynEnt_AxisComponentsToQuat(const dvec3_t *mat0, const dvec3_t *mat1, const dvec3_t *mat2, vec4_t *out)
{
  ?DynEnt_AxisComponentsToQuat@@YAXAEBTdvec3_t@@00AEATvec4_t@@@Z(mat0, mat1, mat2, out);
}

/*
==============
DynEnt_MatrixMultiply43
==============
*/

void __fastcall DynEnt_MatrixMultiply43(const tmat43_t<dvec3_t> *in1, const tmat43_t<dvec3_t> *in2, tmat43_t<dvec3_t> *out)
{
  ?DynEnt_MatrixMultiply43@@YAXAEBT?$tmat43_t@Tdvec3_t@@@@0AEAT1@@Z(in1, in2, out);
}

/*
==============
DynEnt_AnglesToAxis
==============
*/

void __fastcall DynEnt_AnglesToAxis(const vec3_t *angles, tmat33_t<dvec3_t> *axis)
{
  ?DynEnt_AnglesToAxis@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tdvec3_t@@@@@Z(angles, axis);
}

/*
==============
DynEnt_AnglesToAxis
==============
*/
void DynEnt_AnglesToAxis(const vec3_t *angles, tmat33_t<dvec3_t> *axis)
{
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  long double v11; 
  long double v12; 
  long double pcos; 
  double v14; 
  double v15; 
  long double psin; 

  FastSinCosDouble(angles->v[1] * 0.01745329300562541, &v15, &v14);
  FastSinCosDouble(angles->v[0] * 0.01745329300562541, &psin, &pcos);
  FastSinCosDouble(angles->v[2] * 0.01745329300562541, &v11, &v12);
  v4 = v14;
  v5 = v15;
  v6 = pcos;
  v7 = v11;
  v8 = v12;
  _XMM3 = *(unsigned __int64 *)&psin;
  axis->m[0].x = pcos * v14;
  __asm { vxorpd  xmm0, xmm3, cs:__xmm@80000000000000008000000000000000 }
  axis->m[0].y = v6 * v5;
  axis->m[0].z = *(double *)&_XMM0;
  axis->m[1].x = v7 * *(double *)&_XMM3 * v4 - v8 * v5;
  axis->m[1].y = v7 * *(double *)&_XMM3 * v5 + v8 * v4;
  axis->m[1].z = v7 * v6;
  axis->m[2].x = v8 * *(double *)&_XMM3 * v4 + v7 * v5;
  axis->m[2].y = v8 * *(double *)&_XMM3 * v5 - v7 * v4;
  axis->m[2].z = v8 * v6;
}

/*
==============
DynEnt_AxisComponentsToQuat
==============
*/
void DynEnt_AxisComponentsToQuat(const dvec3_t *mat0, const dvec3_t *mat1, const dvec3_t *mat2, vec4_t *out)
{
  double v4; 
  __int128 v5; 
  __int128 v6; 
  double z; 
  double y; 
  __int128 v9; 
  double v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v15; 
  double *v17; 
  __int64 *v18; 
  __int64 *v19; 
  __int64 *v20; 
  __int128 v21; 
  __int128 v22; 
  double v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  double v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v32; 
  __int128 v33; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  __int64 v46; 
  double v47; 
  __int64 v48; 
  double v49; 
  double v50; 
  double v51; 
  __int64 v52; 
  __int64 v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 

  v4 = mat0->y - mat1->x;
  v5 = *(unsigned __int64 *)&mat1->y;
  v6 = *(unsigned __int64 *)&mat0->x;
  z = mat1->z;
  y = mat2->y;
  v9 = *(unsigned __int64 *)&mat2->x;
  v10 = *(double *)&v9 - mat0->z;
  v11 = *(unsigned __int64 *)&mat2->z;
  v12 = COERCE_UNSIGNED_INT64(z - y);
  _XMM0 = COERCE_UNSIGNED_INT64(*(double *)&v12 * *(double *)&v12 + v10 * v10);
  *((_QWORD *)&v15 + 1) = 0i64;
  *(double *)&v15 = *(double *)&v12 * *(double *)&v12 + v10 * v10 + v4 * v4 + (*(double *)&v6 + *(double *)&v5 + *(double *)&v11 + 1.0) * (*(double *)&v6 + *(double *)&v5 + *(double *)&v11 + 1.0);
  _XMM6 = v15;
  v42 = z - y;
  v43 = v10;
  v44 = v4;
  v45 = *(double *)&v6 + *(double *)&v5 + *(double *)&v11 + 1.0;
  if ( *(double *)&v15 < 1.0 )
  {
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v9 + 1);
    *(double *)&v22 = *(double *)&v9 + mat0->z;
    v21 = v22;
    v23 = y + z;
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v11 + 1);
    *(double *)&v22 = *(double *)&v11 - *(double *)&v5 - *(double *)&v6 + 1.0;
    v24 = v22;
    v49 = v4;
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v21 + 1);
    *(double *)&v22 = *(double *)&v21 * *(double *)&v21;
    v25 = v22;
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v24 + 1);
    *(double *)&v22 = *(double *)&v24 * *(double *)&v24;
    _XMM0 = v22;
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v25 + 1);
    *(double *)&v22 = *(double *)&v25 + v23 * v23 + *(double *)&_XMM0 + v4 * v4;
    _XMM6 = v22;
    v46 = *(__int64 *)&v21;
    v47 = v23;
    v48 = *(__int64 *)&v24;
    if ( *(double *)&v22 < 1.0 )
    {
      *((_QWORD *)&v26 + 1) = *((_QWORD *)&v6 + 1);
      v27 = mat1->x + mat0->y;
      v52 = *(__int64 *)&v21;
      v50 = *(double *)&v6 - *(double *)&v5 - *(double *)&v11 + 1.0;
      *(double *)&v26 = v50 * v50 + v27 * v27 + *(double *)&v25;
      v28 = v26;
      *((_QWORD *)&v26 + 1) = *((_QWORD *)&v12 + 1);
      *(double *)&v26 = *(double *)&v12 * *(double *)&v12;
      _XMM0 = v26;
      *((_QWORD *)&v26 + 1) = *((_QWORD *)&v28 + 1);
      *(double *)&v26 = *(double *)&v28 + *(double *)&_XMM0;
      _XMM6 = v26;
      v51 = v27;
      v53 = *(__int64 *)&v12;
      if ( *(double *)&v28 + *(double *)&_XMM0 < 1.0 )
      {
        *((_QWORD *)&v29 + 1) = *((_QWORD *)&v5 + 1);
        *(double *)&v29 = (*(double *)&v5 - *(double *)&v6 - *(double *)&v11 + 1.0) * (*(double *)&v5 - *(double *)&v6 - *(double *)&v11 + 1.0);
        _XMM0 = v29;
        v55 = *(double *)&v5 - *(double *)&v6 - *(double *)&v11 + 1.0;
        *(double *)&v29 = *(double *)&v29 + v27 * v27 + v23 * v23 + v10 * v10;
        _XMM6 = v29;
        v54 = v27;
        v56 = v23;
        v57 = v10;
        if ( *(double *)&v29 < 1.0 )
        {
          __asm { vcvtsd2ss xmm0, xmm6, xmm6 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_math.cpp", 155, ASSERT_TYPE_ASSERT, "( ( testSizeSq >= 1.0 ) )", "( testSizeSq ) = %g", *(float *)&_XMM0) )
            __debugbreak();
        }
        v17 = &v54;
        v18 = (__int64 *)&v55;
        v19 = (__int64 *)&v56;
        v20 = (__int64 *)&v57;
      }
      else
      {
        v17 = &v50;
        v18 = (__int64 *)&v51;
        v19 = &v52;
        v20 = &v53;
      }
    }
    else
    {
      v17 = (double *)&v46;
      v18 = (__int64 *)&v47;
      v19 = &v48;
      v20 = (__int64 *)&v49;
    }
  }
  else
  {
    v17 = &v42;
    v18 = (__int64 *)&v43;
    v19 = (__int64 *)&v44;
    v20 = (__int64 *)&v45;
  }
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( *(double *)&_XMM6 == *(double *)&_XMM0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_math.cpp", 160, ASSERT_TYPE_ASSERT, "(testSizeSq)", (const char *)&queryFormat, "testSizeSq") )
    __debugbreak();
  __asm { vsqrtsd xmm0, xmm6, xmm6 }
  *((_QWORD *)&v33 + 1) = 0i64;
  *(double *)&v33 = 1.0 / *(double *)&_XMM0;
  v32 = v33;
  *(double *)&v33 = 1.0 / *(double *)&_XMM0 * *v17;
  _XMM0 = v33;
  *((_QWORD *)&v33 + 1) = *((_QWORD *)&v32 + 1);
  *(double *)&v33 = *(double *)&v32 * *(double *)v18;
  _XMM2 = v33;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  out->v[0] = *(float *)&_XMM1;
  *((_QWORD *)&v33 + 1) = *((_QWORD *)&v32 + 1);
  *(double *)&v33 = *(double *)&v32 * *(double *)v19;
  _XMM1 = v33;
  __asm { vcvtsd2ss xmm0, xmm2, xmm2 }
  out->v[1] = *(float *)&_XMM0;
  __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
  *((_QWORD *)&v33 + 1) = *((_QWORD *)&v32 + 1);
  *(double *)&v33 = *(double *)&v32 * *(double *)v20;
  _XMM1 = v33;
  out->v[2] = *(float *)&_XMM0;
  __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
  out->v[3] = *(float *)&_XMM0;
}

/*
==============
DynEnt_MatrixMultiply43
==============
*/
void DynEnt_MatrixMultiply43(const tmat43_t<dvec3_t> *in1, const tmat43_t<dvec3_t> *in2, tmat43_t<dvec3_t> *out)
{
  if ( in1 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_math.cpp", 75, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  if ( in2 == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_math.cpp", 76, ASSERT_TYPE_ASSERT, "(&in2 != &out)", (const char *)&queryFormat, "&in2 != &out") )
    __debugbreak();
  out->m[0].x = in1->m[0].x * in2->m[0].x + in1->m[0].y * in2->m[1].x + in1->m[0].z * in2->m[2].x;
  out->m[1].x = in1->m[1].y * in2->m[1].x + in1->m[1].x * in2->m[0].x + in1->m[1].z * in2->m[2].x;
  out->m[2].x = in1->m[2].y * in2->m[1].x + in1->m[2].x * in2->m[0].x + in1->m[2].z * in2->m[2].x;
  out->m[0].y = in2->m[0].y * in1->m[0].x + in2->m[1].y * in1->m[0].y + in2->m[2].y * in1->m[0].z;
  out->m[1].y = in1->m[1].y * in2->m[1].y + in1->m[1].x * in2->m[0].y + in2->m[2].y * in1->m[1].z;
  out->m[2].y = in1->m[2].y * in2->m[1].y + in1->m[2].x * in2->m[0].y + in1->m[2].z * in2->m[2].y;
  out->m[0].z = in1->m[0].x * in2->m[0].z + in1->m[0].y * in2->m[1].z + in1->m[0].z * in2->m[2].z;
  out->m[1].z = in1->m[1].y * in2->m[1].z + in1->m[1].x * in2->m[0].z + in1->m[1].z * in2->m[2].z;
  out->m[2].z = in1->m[2].y * in2->m[1].z + in1->m[2].x * in2->m[0].z + in1->m[2].z * in2->m[2].z;
  out->m[3].x = in1->m[3].y * in2->m[1].x + in1->m[3].x * in2->m[0].x + in1->m[3].z * in2->m[2].x + in2->m[3].x;
  out->m[3].y = in1->m[3].y * in2->m[1].y + in1->m[3].x * in2->m[0].y + in1->m[3].z * in2->m[2].y + in2->m[3].y;
  out->m[3].z = in1->m[3].y * in2->m[1].z + in1->m[3].x * in2->m[0].z + in1->m[3].z * in2->m[2].z + in2->m[3].z;
}

/*
==============
DynEnt_Vec4LengthSq
==============
*/
long double DynEnt_Vec4LengthSq(const dvec4_t *v)
{
  return v->v[0] * v->v[0] + v->v[1] * v->v[1] + v->v[2] * v->v[2] + v->v[3] * v->v[3];
}

