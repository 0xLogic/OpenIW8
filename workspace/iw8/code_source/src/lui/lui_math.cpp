/*
==============
LUI_Matrix_BuildXRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildXRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildXRotationMatrix@@YAXMAEAT?$tmat44_t@Tvec4_t@@@@@Z(degrees, result);
}

/*
==============
LUI_Vec3MadHighPrecision
==============
*/

void __fastcall LUI_Vec3MadHighPrecision(const dvec3_t *start, long double scale, const dvec3_t *dir, dvec3_t *result)
{
  ?LUI_Vec3MadHighPrecision@@YAXAEBTdvec3_t@@N0AEAT1@@Z(start, scale, dir, result);
}

/*
==============
LUI_Matrix_Copy
==============
*/

void __fastcall LUI_Matrix_Copy(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *dest)
{
  ?LUI_Matrix_Copy@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(source, dest);
}

/*
==============
LUI_Matrix_LoadIdentity
==============
*/

void __fastcall LUI_Matrix_LoadIdentity(tmat44_t<vec4_t> *matrix)
{
  ?LUI_Matrix_LoadIdentity@@YAXAEAT?$tmat44_t@Tvec4_t@@@@@Z(matrix);
}

/*
==============
LUI_Matrix_BuildYRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildYRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildYRotationMatrix@@YAXMAEAT?$tmat44_t@Tvec4_t@@@@@Z(degrees, result);
}

/*
==============
LUI_Matrix_Invert
==============
*/

bool __fastcall LUI_Matrix_Invert(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *result)
{
  return ?LUI_Matrix_Invert@@YA_NAEBT?$tmat44_t@Tvec4_t@@@@AEAT1@@Z(source, result);
}

/*
==============
LUI_Matrix_BuildScaleMatrix
==============
*/

void __fastcall LUI_Matrix_BuildScaleMatrix(const float x, const float y, const float z, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildScaleMatrix@@YAXMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(x, y, z, result);
}

/*
==============
LUI_ApplyTransformsToPoint
==============
*/

void __fastcall LUI_ApplyTransformsToPoint(vec4_t *point)
{
  ?LUI_ApplyTransformsToPoint@@YAXPEATvec4_t@@@Z(point);
}

/*
==============
LUI_Matrix_MultiplyVector
==============
*/

void __fastcall LUI_Matrix_MultiplyVector(const tmat44_t<vec4_t> *matrix, const vec4_t *vec, vec4_t *result)
{
  ?LUI_Matrix_MultiplyVector@@YAXAEBT?$tmat44_t@Tvec4_t@@@@AEBTvec4_t@@AEAT2@@Z(matrix, vec, result);
}

/*
==============
LUI_Vector3_DotProduct
==============
*/

double __fastcall LUI_Vector3_DotProduct(const vec3_t *vec1, const vec4_t *vec2)
{
  double result; 

  *(float *)&result = ?LUI_Vector3_DotProduct@@YAMAEBTvec3_t@@AEBTvec4_t@@@Z(vec1, vec2);
  return result;
}

/*
==============
LUI_Matrix_Multiply
==============
*/

void __fastcall LUI_Matrix_Multiply(const tmat44_t<vec4_t> *matrix1, const tmat44_t<vec4_t> *matrix2, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_Multiply@@YAXAEBT?$tmat44_t@Tvec4_t@@@@0AEAT1@@Z(matrix1, matrix2, result);
}

/*
==============
LUI_Matrix_BuildTranslationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildTranslationMatrix(const float x, const float y, const float z, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildTranslationMatrix@@YAXMMMAEAT?$tmat44_t@Tvec4_t@@@@@Z(x, y, z, result);
}

/*
==============
LUI_Matrix_BuildZRotationMatrix
==============
*/

void __fastcall LUI_Matrix_BuildZRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  ?LUI_Matrix_BuildZRotationMatrix@@YAXMAEAT?$tmat44_t@Tvec4_t@@@@@Z(degrees, result);
}

/*
==============
LUI_Vector3_DotProduct
==============
*/

double __fastcall LUI_Vector3_DotProduct(const vec3_t *vec1, const vec3_t *vec2)
{
  double result; 

  *(float *)&result = ?LUI_Vector3_DotProduct@@YAMAEBTvec3_t@@0@Z(vec1, vec2);
  return result;
}

/*
==============
LUI_Vector_NormalizeInPlace
==============
*/

void __fastcall LUI_Vector_NormalizeInPlace(float *x, float *y, float *z)
{
  ?LUI_Vector_NormalizeInPlace@@YAXAEAM00@Z(x, y, z);
}

/*
==============
LUI_ApplyTransformsToPoint
==============
*/
void LUI_ApplyTransformsToPoint(vec4_t *point)
{
  tmat44_t<vec4_t> *CurrentMenuTransform; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  char v9; 

  CurrentMenuTransform = LUI_GetCurrentMenuTransform();
  if ( !CurrentMenuTransform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 224, ASSERT_TYPE_ASSERT, "(currentMatrix)", (const char *)&queryFormat, "currentMatrix") )
    __debugbreak();
  if ( &v9 == (char *)point && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 44, ASSERT_TYPE_ASSERT, "(&result != &vec)", (const char *)&queryFormat, "&result != &vec") )
    __debugbreak();
  v3 = point->v[1];
  v4 = point->v[2];
  v5 = point->v[3];
  v6 = (float)((float)((float)(v3 * CurrentMenuTransform->m[0].v[1]) + (float)(point->v[0] * CurrentMenuTransform->m[0].v[0])) + (float)(v4 * CurrentMenuTransform->m[0].v[2])) + (float)(v5 * CurrentMenuTransform->m[0].v[3]);
  v7 = (float)((float)((float)(point->v[0] * CurrentMenuTransform->m[1].v[0]) + (float)(v3 * CurrentMenuTransform->m[1].v[1])) + (float)(v4 * CurrentMenuTransform->m[1].v[2])) + (float)(v5 * CurrentMenuTransform->m[1].v[3]);
  v8 = (float)((float)((float)(point->v[0] * CurrentMenuTransform->m[2].v[0]) + (float)(v3 * CurrentMenuTransform->m[2].v[1])) + (float)(v4 * CurrentMenuTransform->m[2].v[2])) + (float)(v5 * CurrentMenuTransform->m[2].v[3]);
  point->v[3] = (float)((float)((float)(point->v[0] * CurrentMenuTransform->m[3].v[0]) + (float)(v3 * CurrentMenuTransform->m[3].v[1])) + (float)(v4 * CurrentMenuTransform->m[3].v[2])) + (float)(v5 * CurrentMenuTransform->m[3].v[3]);
  point->v[0] = v6;
  point->v[1] = v7;
  point->v[2] = v8;
}

/*
==============
LUI_Matrix_BuildScaleMatrix
==============
*/
void LUI_Matrix_BuildScaleMatrix(const float x, const float y, const float z, tmat44_t<vec4_t> *result)
{
  result->m[0].v[0] = x;
  *(vec4_t *)((char *)&result->row0 + 4) = 0ui64;
  result->m[1].v[1] = y;
  *(vec4_t *)((char *)&result->row1 + 8) = 0ui64;
  result->m[2].v[2] = z;
  *(vec4_t *)((char *)&result->row2 + 12) = 0ui64;
  result->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildTranslationMatrix
==============
*/
void LUI_Matrix_BuildTranslationMatrix(const float x, const float y, const float z, tmat44_t<vec4_t> *result)
{
  *(_QWORD *)result->m[0].v = 1065353216i64;
  result->m[0].v[2] = 0.0;
  result->m[0].v[3] = x;
  result->m[1].v[0] = 0.0;
  *(_QWORD *)&result->row1.xyz.y = 1065353216i64;
  result->m[1].v[3] = y;
  *(_QWORD *)result->row2.v = 0i64;
  result->m[2].v[2] = 1.0;
  result->m[2].v[3] = z;
  *(_QWORD *)result->row3.v = 0i64;
  result->m[3].v[2] = 0.0;
  result->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildXRotationMatrix
==============
*/
void LUI_Matrix_BuildXRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  float v3; 
  float v4; 
  float v5; 
  float c; 
  float s; 

  FastSinCos(degrees * 0.017453292, &s, &c);
  v3 = s;
  v4 = c;
  LODWORD(v5) = LODWORD(s) ^ _xmm;
  *(_QWORD *)result->m[0].v = 1065353216i64;
  *(_QWORD *)&result->row0.xyz.z = 0i64;
  result->m[1].v[0] = 0.0;
  result->m[1].v[1] = v4;
  result->m[1].v[2] = v5;
  *(_QWORD *)(&result->row1.xyz + 1) = 0i64;
  result->m[2].v[1] = v3;
  result->m[2].v[2] = v4;
  *(_QWORD *)(&result->row2.xyz + 1) = 0i64;
  *(_QWORD *)&result->row3.xyz.y = 0i64;
  result->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildYRotationMatrix
==============
*/
void LUI_Matrix_BuildYRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  float v3; 
  float v4; 
  float v5; 
  float c; 
  float s; 

  FastSinCos(degrees * 0.017453292, &s, &c);
  v3 = c;
  v4 = s;
  LODWORD(v5) = LODWORD(s) ^ _xmm;
  result->m[0].v[0] = c;
  result->m[0].v[1] = 0.0;
  result->m[0].v[2] = v5;
  *(_QWORD *)(&result->row0.xyz + 1) = 0i64;
  *(_QWORD *)&result->row1.xyz.y = 1065353216i64;
  result->m[1].v[3] = 0.0;
  result->m[2].v[0] = v4;
  result->m[2].v[1] = 0.0;
  result->m[2].v[2] = v3;
  *(_QWORD *)(&result->row2.xyz + 1) = 0i64;
  *(_QWORD *)&result->row3.xyz.y = 0i64;
  result->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_BuildZRotationMatrix
==============
*/
void LUI_Matrix_BuildZRotationMatrix(const float degrees, tmat44_t<vec4_t> *result)
{
  float v3; 
  float v4; 
  float v5; 
  float c; 
  float s; 

  FastSinCos(degrees * 0.017453292, &s, &c);
  v3 = s;
  v4 = c;
  LODWORD(v5) = LODWORD(s) ^ _xmm;
  result->m[0].v[0] = c;
  result->m[0].v[1] = v5;
  *(_QWORD *)&result->row0.xyz.z = 0i64;
  result->m[1].v[0] = v3;
  result->m[1].v[1] = v4;
  *(_QWORD *)&result->row1.xyz.z = 0i64;
  *(_QWORD *)result->row2.v = 0i64;
  *(_QWORD *)&result->row2.xyz.z = 1065353216i64;
  *(_QWORD *)result->row3.v = 0i64;
  result->m[3].v[2] = 0.0;
  result->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_Copy
==============
*/
void LUI_Matrix_Copy(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *dest)
{
  *dest = *source;
}

/*
==============
LUI_Matrix_Invert
==============
*/
char LUI_Matrix_Invert(const tmat44_t<vec4_t> *source, tmat44_t<vec4_t> *result)
{
  int v2; 
  __int64 v3; 
  int v6; 
  const tmat44_t<vec4_t> *v7; 
  bool v8; 
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
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v80; 
  int i; 
  int j; 
  __int64 v83; 
  __int64 v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 

  v2 = 0;
  v3 = 0i64;
  do
  {
    v6 = 0;
    v7 = source;
    v8 = 1;
    do
    {
      if ( !v8 )
      {
        LODWORD(v84) = 4;
        LODWORD(v83) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v83, v84) )
          __debugbreak();
      }
      if ( (unsigned int)v2 >= 4 )
      {
        LODWORD(v84) = 4;
        LODWORD(v83) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v83, v84) )
          __debugbreak();
      }
      ++v6;
      *(&v85 + v3) = v7->m[0].v[0];
      v7 = (const tmat44_t<vec4_t> *)((char *)v7 + 16);
      ++v3;
      v8 = (unsigned int)v6 < 4;
    }
    while ( v6 < 4 );
    ++v2;
    source = (const tmat44_t<vec4_t> *)((char *)source + 4);
  }
  while ( v2 < 4 );
  v9 = v92;
  v10 = v100 * v95;
  v11 = v97 * v95;
  v12 = v91;
  v13 = v96 * v99;
  v14 = v96 * v98;
  v15 = v93 * v99;
  v16 = v97 * v94;
  v17 = v93 * v100;
  v18 = v93 * v98;
  v19 = v97 * v96;
  result->m[0].v[0] = (float)((float)((float)((float)(v96 * v98) * v91) + (float)((float)(v100 * v95) * v90)) + (float)((float)(v94 * v99) * v92)) - (float)((float)((float)((float)(v94 * v100) * v91) + (float)((float)(v96 * v99) * v90)) + (float)((float)(v98 * v95) * v92));
  v20 = v17 * v12;
  v21 = v89;
  v22 = v17 * v90;
  result->m[0].v[1] = (float)((float)(v20 + (float)(v13 * v89)) + (float)(v11 * v9)) - (float)((float)((float)(v10 * v89) + (float)(v19 * v91)) + (float)(v15 * v9));
  v23 = v22 + (float)(v21 * v14);
  v24 = v11 * v90;
  v25 = v15 * v90;
  v26 = (float)((float)((float)((float)(v94 * v100) * v21) + (float)(v19 * v90)) + (float)(v9 * v18)) - (float)(v23 + (float)(v9 * v16));
  v27 = v98;
  result->m[0].v[2] = v26;
  v28 = (float)((float)(v25 + (float)(v21 * (float)(v27 * v95))) + (float)(v16 * v91)) - (float)((float)(v24 + (float)(v21 * (float)(v94 * v99))) + (float)(v18 * v91));
  v29 = v94;
  result->m[0].v[3] = v28;
  v30 = v19 * v87;
  v31 = v17 * v87;
  result->m[1].v[0] = (float)((float)((float)((float)(v29 * v100) * v87) + (float)(v13 * v86)) + (float)((float)(v98 * v95) * v88)) - (float)((float)((float)(v14 * v87) + (float)(v10 * v86)) + (float)((float)(v94 * v99) * v88));
  v32 = v10 * v85;
  v33 = v86;
  v34 = v30 + v32;
  v35 = v13 * v85;
  v36 = v85;
  result->m[1].v[1] = (float)(v34 + (float)(v15 * v88)) - (float)((float)(v31 + v35) + (float)(v11 * v88));
  v37 = v94 * v99;
  result->m[1].v[2] = (float)((float)((float)(v33 * v17) + (float)(v36 * v14)) + (float)(v16 * v88)) - (float)((float)((float)(v33 * v19) + (float)(v36 * (float)(v94 * v100))) + (float)(v18 * v88));
  v38 = (float)((float)(v33 * v11) + (float)(v36 * v37)) + (float)(v87 * v18);
  v39 = v88;
  v40 = v88 * v90;
  v41 = v87 * v16;
  v42 = v21 * v87;
  v43 = (float)((float)(v33 * v15) + (float)(v36 * (float)(v98 * v95))) + v41;
  v44 = v91;
  v45 = v88 * v91;
  v46 = v33 * v91;
  v47 = v87 * v9;
  v48 = v33 * v9;
  result->m[1].v[3] = v38 - v43;
  v49 = v36 * v9;
  v50 = v36 * v44;
  v51 = v36 * v90;
  v52 = v39 * v21;
  v53 = v21 * v86;
  v54 = (float)(v45 * v97) + (float)(v49 * v99);
  v55 = v47 * v97;
  v56 = (float)(v39 * v21) * v99;
  result->m[2].v[0] = (float)((float)((float)(v40 * v99) + (float)(v47 * v98)) + (float)(v46 * v100)) - (float)((float)((float)(v45 * v98) + (float)(v48 * v99)) + (float)((float)(v87 * v90) * v100));
  v57 = (float)(v54 + (float)(v42 * v100)) - (float)((float)(v56 + v55) + (float)(v50 * v100));
  v58 = (float)(v52 * v98) + (float)(v48 * v97);
  v59 = v40 * v97;
  v60 = v49 * v98;
  result->m[2].v[1] = v57;
  v61 = v87;
  result->m[2].v[2] = (float)(v58 + (float)(v51 * v100)) - (float)((float)(v59 + v60) + (float)(v53 * v100));
  result->m[2].v[3] = (float)((float)((float)((float)(v61 * v90) * v97) + (float)(v50 * v98)) + (float)(v53 * v99)) - (float)((float)((float)(v46 * v97) + (float)(v42 * v98)) + (float)(v51 * v99));
  v62 = (float)((float)(v46 * v96) + (float)(v47 * v94)) + (float)(v40 * v95);
  v63 = v47 * v93;
  v64 = v96;
  v65 = (float)((float)((float)((float)(v87 * v90) * v96) + (float)(v48 * v95)) + (float)(v45 * v94)) - v62;
  v66 = (float)(v50 * v96) + v63;
  v67 = v49 * v95;
  result->m[3].v[0] = v65;
  v68 = v45 * v93;
  v69 = v93;
  v70 = (float)(v66 + (float)(v52 * v95)) - (float)((float)((float)(v42 * v64) + v67) + v68);
  v71 = (float)(v53 * v64) + (float)(v49 * v94);
  result->m[3].v[1] = v70;
  v72 = v51 * v64;
  v73 = v94;
  result->m[3].v[2] = (float)(v71 + (float)(v69 * v40)) - (float)((float)(v72 + (float)(v69 * v48)) + (float)(v52 * v94));
  v74 = (float)((float)(v69 * v46) + (float)(v51 * v95)) + (float)(v42 * v73);
  v75 = v50 * v73;
  v76 = v87;
  v77 = v85;
  result->m[3].v[3] = v74 - (float)((float)(v75 + (float)(v53 * v95)) + (float)(v69 * (float)(v87 * v90)));
  v78 = (float)((float)((float)(v77 * result->m[0].v[0]) + (float)(v86 * result->m[0].v[1])) + (float)(v76 * result->m[0].v[2])) + (float)(v88 * result->m[0].v[3]);
  if ( v78 == 0.0 )
    return 0;
  v80 = 1.0 / v78;
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( (unsigned int)i >= 4 )
      {
        LODWORD(v84) = 4;
        LODWORD(v83) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v83, v84) )
          __debugbreak();
      }
      if ( (unsigned int)j >= 4 )
      {
        LODWORD(v84) = 4;
        LODWORD(v83) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v83, v84) )
          __debugbreak();
      }
      result->m[0].v[0] = v80 * result->m[0].v[0];
      result = (tmat44_t<vec4_t> *)((char *)result + 4);
    }
  }
  return 1;
}

/*
==============
LUI_Matrix_LoadIdentity
==============
*/
void LUI_Matrix_LoadIdentity(tmat44_t<vec4_t> *matrix)
{
  matrix->m[0] = (vec4_t)0x3F800000ui64;
  matrix->m[1].v[0] = 0.0;
  *(vec4_t *)((char *)&matrix->row1 + 4) = (vec4_t)0x3F800000ui64;
  matrix->m[2].v[1] = 0.0;
  *(vec4_t *)((char *)&matrix->row2 + 8) = (vec4_t)0x3F800000ui64;
  matrix->m[3].v[2] = 0.0;
  matrix->m[3].v[3] = 1.0;
}

/*
==============
LUI_Matrix_Multiply
==============
*/
void LUI_Matrix_Multiply(const tmat44_t<vec4_t> *matrix1, const tmat44_t<vec4_t> *matrix2, tmat44_t<vec4_t> *result)
{
  if ( result == matrix1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 55, ASSERT_TYPE_ASSERT, "(&result != &matrix1)", (const char *)&queryFormat, "&result != &matrix1") )
    __debugbreak();
  if ( result == matrix2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 56, ASSERT_TYPE_ASSERT, "(&result != &matrix2)", (const char *)&queryFormat, "&result != &matrix2") )
    __debugbreak();
  result->m[0].v[0] = (float)((float)((float)(matrix1->m[0].v[0] * matrix2->m[0].v[0]) + (float)(matrix2->m[1].v[0] * matrix1->m[0].v[1])) + (float)(matrix1->m[0].v[2] * matrix2->m[2].v[0])) + (float)(matrix1->m[0].v[3] * matrix2->m[3].v[0]);
  result->m[0].v[1] = (float)((float)((float)(matrix2->m[1].v[1] * matrix1->m[0].v[1]) + (float)(matrix2->m[0].v[1] * matrix1->m[0].v[0])) + (float)(matrix2->m[2].v[1] * matrix1->m[0].v[2])) + (float)(matrix1->m[0].v[3] * matrix2->m[3].v[1]);
  result->m[0].v[2] = (float)((float)((float)(matrix2->m[1].v[2] * matrix1->m[0].v[1]) + (float)(matrix2->m[0].v[2] * matrix1->m[0].v[0])) + (float)(matrix1->m[0].v[2] * matrix2->m[2].v[2])) + (float)(matrix1->m[0].v[3] * matrix2->m[3].v[2]);
  result->m[0].v[3] = (float)((float)((float)(matrix1->m[0].v[0] * matrix2->m[0].v[3]) + (float)(matrix2->m[1].v[3] * matrix1->m[0].v[1])) + (float)(matrix1->m[0].v[2] * matrix2->m[2].v[3])) + (float)(matrix2->m[3].v[3] * matrix1->m[0].v[3]);
  result->m[1].v[0] = (float)((float)((float)(matrix1->m[1].v[1] * matrix2->m[1].v[0]) + (float)(matrix1->m[1].v[0] * matrix2->m[0].v[0])) + (float)(matrix1->m[1].v[2] * matrix2->m[2].v[0])) + (float)(matrix1->m[1].v[3] * matrix2->m[3].v[0]);
  result->m[1].v[1] = (float)((float)((float)(matrix2->m[1].v[1] * matrix1->m[1].v[1]) + (float)(matrix2->m[0].v[1] * matrix1->m[1].v[0])) + (float)(matrix2->m[2].v[1] * matrix1->m[1].v[2])) + (float)(matrix1->m[1].v[3] * matrix2->m[3].v[1]);
  result->m[1].v[2] = (float)((float)((float)(matrix2->m[1].v[2] * matrix1->m[1].v[1]) + (float)(matrix2->m[0].v[2] * matrix1->m[1].v[0])) + (float)(matrix1->m[1].v[2] * matrix2->m[2].v[2])) + (float)(matrix1->m[1].v[3] * matrix2->m[3].v[2]);
  result->m[1].v[3] = (float)((float)((float)(matrix1->m[1].v[1] * matrix2->m[1].v[3]) + (float)(matrix1->m[1].v[0] * matrix2->m[0].v[3])) + (float)(matrix1->m[1].v[2] * matrix2->m[2].v[3])) + (float)(matrix1->m[1].v[3] * matrix2->m[3].v[3]);
  result->m[2].v[0] = (float)((float)((float)(matrix1->m[2].v[1] * matrix2->m[1].v[0]) + (float)(matrix1->m[2].v[0] * matrix2->m[0].v[0])) + (float)(matrix1->m[2].v[2] * matrix2->m[2].v[0])) + (float)(matrix1->m[2].v[3] * matrix2->m[3].v[0]);
  result->m[2].v[1] = (float)((float)((float)(matrix2->m[1].v[1] * matrix1->m[2].v[1]) + (float)(matrix2->m[0].v[1] * matrix1->m[2].v[0])) + (float)(matrix2->m[2].v[1] * matrix1->m[2].v[2])) + (float)(matrix1->m[2].v[3] * matrix2->m[3].v[1]);
  result->m[2].v[2] = (float)((float)((float)(matrix2->m[1].v[2] * matrix1->m[2].v[1]) + (float)(matrix2->m[0].v[2] * matrix1->m[2].v[0])) + (float)(matrix1->m[2].v[2] * matrix2->m[2].v[2])) + (float)(matrix1->m[2].v[3] * matrix2->m[3].v[2]);
  result->m[2].v[3] = (float)((float)((float)(matrix1->m[2].v[1] * matrix2->m[1].v[3]) + (float)(matrix1->m[2].v[0] * matrix2->m[0].v[3])) + (float)(matrix1->m[2].v[2] * matrix2->m[2].v[3])) + (float)(matrix1->m[2].v[3] * matrix2->m[3].v[3]);
  result->m[3].v[0] = (float)((float)((float)(matrix1->m[3].v[1] * matrix2->m[1].v[0]) + (float)(matrix1->m[3].v[0] * matrix2->m[0].v[0])) + (float)(matrix1->m[3].v[2] * matrix2->m[2].v[0])) + (float)(matrix1->m[3].v[3] * matrix2->m[3].v[0]);
  result->m[3].v[1] = (float)((float)((float)(matrix2->m[1].v[1] * matrix1->m[3].v[1]) + (float)(matrix2->m[0].v[1] * matrix1->m[3].v[0])) + (float)(matrix2->m[2].v[1] * matrix1->m[3].v[2])) + (float)(matrix1->m[3].v[3] * matrix2->m[3].v[1]);
  result->m[3].v[2] = (float)((float)((float)(matrix2->m[1].v[2] * matrix1->m[3].v[1]) + (float)(matrix2->m[0].v[2] * matrix1->m[3].v[0])) + (float)(matrix1->m[3].v[2] * matrix2->m[2].v[2])) + (float)(matrix1->m[3].v[3] * matrix2->m[3].v[2]);
  result->m[3].v[3] = (float)((float)((float)(matrix1->m[3].v[1] * matrix2->m[1].v[3]) + (float)(matrix1->m[3].v[0] * matrix2->m[0].v[3])) + (float)(matrix1->m[3].v[2] * matrix2->m[2].v[3])) + (float)(matrix1->m[3].v[3] * matrix2->m[3].v[3]);
}

/*
==============
LUI_Matrix_MultiplyVector
==============
*/
void LUI_Matrix_MultiplyVector(const tmat44_t<vec4_t> *matrix, const vec4_t *vec, vec4_t *result)
{
  if ( result == vec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_math.cpp", 44, ASSERT_TYPE_ASSERT, "(&result != &vec)", (const char *)&queryFormat, "&result != &vec") )
    __debugbreak();
  result->v[0] = (float)((float)((float)(matrix->m[0].v[1] * vec->v[1]) + (float)(matrix->m[0].v[0] * vec->v[0])) + (float)(matrix->m[0].v[2] * vec->v[2])) + (float)(matrix->m[0].v[3] * vec->v[3]);
  result->v[1] = (float)((float)((float)(matrix->m[1].v[1] * vec->v[1]) + (float)(matrix->m[1].v[0] * vec->v[0])) + (float)(matrix->m[1].v[2] * vec->v[2])) + (float)(matrix->m[1].v[3] * vec->v[3]);
  result->v[2] = (float)((float)((float)(matrix->m[2].v[1] * vec->v[1]) + (float)(matrix->m[2].v[0] * vec->v[0])) + (float)(matrix->m[2].v[2] * vec->v[2])) + (float)(matrix->m[2].v[3] * vec->v[3]);
  result->v[3] = (float)((float)((float)(matrix->m[3].v[1] * vec->v[1]) + (float)(matrix->m[3].v[0] * vec->v[0])) + (float)(matrix->m[3].v[2] * vec->v[2])) + (float)(matrix->m[3].v[3] * vec->v[3]);
}

/*
==============
LUI_Vec3MadHighPrecision
==============
*/
void LUI_Vec3MadHighPrecision(const dvec3_t *start, long double scale, const dvec3_t *dir, dvec3_t *result)
{
  result->x = scale * dir->x + start->x;
  result->y = scale * dir->y + start->y;
  result->z = scale * dir->z + start->z;
}

/*
==============
LUI_Vector3_DotProduct
==============
*/
float LUI_Vector3_DotProduct(const vec3_t *vec1, const vec3_t *vec2)
{
  return (float)((float)(vec1->v[1] * vec2->v[1]) + (float)(vec1->v[0] * vec2->v[0])) + (float)(vec1->v[2] * vec2->v[2]);
}

/*
==============
LUI_Vector3_DotProduct
==============
*/
float LUI_Vector3_DotProduct(const vec3_t *vec1, const vec4_t *vec2)
{
  return (float)((float)(vec1->v[1] * vec2->v[1]) + (float)(vec1->v[0] * vec2->v[0])) + (float)(vec1->v[2] * vec2->v[2]);
}

/*
==============
LUI_Vector_NormalizeInPlace
==============
*/
void LUI_Vector_NormalizeInPlace(float *x, float *y, float *z)
{
  float v3; 

  v3 = 1.0 / fsqrt((float)((float)(*x * *x) + (float)(*y * *y)) + (float)(*z * *z));
  *x = v3 * *x;
  *y = v3 * *y;
  *z = v3 * *z;
}

