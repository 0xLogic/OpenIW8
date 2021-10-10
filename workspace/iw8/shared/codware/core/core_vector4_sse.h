/*
==============
Float4BlendXyZW
==============
*/

void __fastcall Float4BlendXyZW(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4BlendXyZW@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
FloatUnpackFloat16HQ
==============
*/

double __fastcall FloatUnpackFloat16HQ(const unsigned int packedInt)
{
  double result; 

  *(float *)&result = ?FloatUnpackFloat16HQ@@YAMI@Z(packedInt);
  return result;
}

/*
==============
Float4BlendxYZW
==============
*/

void __fastcall Float4BlendxYZW(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4BlendxYZW@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4BlendXyzW
==============
*/

void __fastcall Float4BlendXyzW(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4BlendXyzW@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4AnglesToAxis
==============
*/

void __fastcall Float4AnglesToAxis(const float4 *axis, vector3 *a2)
{
  ?Float4AnglesToAxis@@YQXUfloat4@@AEAUvector3@@@Z(axis, a2);
}

/*
==============
Float4BlendxyZW
==============
*/

void __fastcall Float4BlendxyZW(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4BlendxyZW@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4QuatRotationAxis
==============
*/

void __fastcall Float4QuatRotationAxis(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4QuatRotationAxis@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float3RotateQuatAroundOrigin
==============
*/

void __fastcall Float3RotateQuatAroundOrigin(const float4 *result, const float4 *a2, const float4 *a3, float4 *a4)
{
  ?Float3RotateQuatAroundOrigin@@YQXUfloat4@@00AEAU1@@Z(result, a2, a3, a4);
}

/*
==============
Float4x4RotationAroundUnitAxis
==============
*/

vector4 *__fastcall Float4x4RotationAroundUnitAxis(vector4 *result, const float4 *axis, const float radians)
{
  return ?Float4x4RotationAroundUnitAxis@@YA?AUvector4@@Ufloat4@@M@Z(result, axis, radians);
}

/*
==============
Float4RadianToQuat
==============
*/

float4 *__fastcall Float4RadianToQuat(float4 *result, const float4 *sinAngles)
{
  return ?Float4RadianToQuat@@YQ?AUfloat4@@U1@@Z(result, sinAngles);
}

/*
==============
Float4CosEst
==============
*/

float4 *__fastcall Float4CosEst(float4 *result, const float4 *a2)
{
  return ?Float4CosEst@@YQ?AUfloat4@@U1@@Z(result, a2);
}

/*
==============
Float4Clamp
==============
*/

void __fastcall Float4Clamp(const float4 *result, const float4 *a2, const float4 *a3, float4 *a4)
{
  ?Float4Clamp@@YQXUfloat4@@00AEAU1@@Z(result, a2, a3, a4);
}

/*
==============
Float4SinCos
==============
*/

void __fastcall Float4SinCos(const float4 *sin, float4 *cos, float4 *a3)
{
  ?Float4SinCos@@YQXUfloat4@@AEAU1@1@Z(sin, cos, a3);
}

/*
==============
Float4QuatMultiply
==============
*/

void __fastcall Float4QuatMultiply(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4QuatMultiply@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4UnitQuatToAxis
==============
*/

vector3 *__fastcall Float4UnitQuatToAxis(vector3 *result, const float4 *a2)
{
  return ?Float4UnitQuatToAxis@@YQ?AUvector3@@Ufloat4@@@Z(result, a2);
}

/*
==============
Float4LoadVec3
==============
*/

void __fastcall Float4LoadVec3(const vec3_t *element, float4 *result)
{
  ?Float4LoadVec3@@YQXAEBTvec3_t@@AEAUfloat4@@@Z(element, result);
}

/*
==============
FloatPackFloat16HQ
==============
*/

unsigned int __fastcall FloatPackFloat16HQ(const float v)
{
  return ?FloatPackFloat16HQ@@YAIM@Z(v);
}

/*
==============
Float4QuatTransform
==============
*/

void __fastcall Float4QuatTransform(const float4 *outResult, const float4 *a2, float4 *a3)
{
  ?Float4QuatTransform@@YQXUfloat4@@0AEAU1@@Z(outResult, a2, a3);
}

/*
==============
Float4x4Inverse
==============
*/

vector4 *__fastcall Float4x4Inverse(vector4 *result, const vector4 *in)
{
  return ?Float4x4Inverse@@YQ?AUvector4@@AEBU1@@Z(result, in);
}

/*
==============
Float4x4Mul
==============
*/

vector4 *__fastcall Float4x4Mul(vector4 *result, const vector4 *M1, const vector4 *M2)
{
  return ?Float4x4Mul@@YQ?AUvector4@@AEBU1@0@Z(result, M1, M2);
}

/*
==============
Float4BlendXYzW
==============
*/

void __fastcall Float4BlendXYzW(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4BlendXYzW@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4Clamp
==============
*/

float4 *__fastcall Float4Clamp(float4 *result, const float4 *a2, const float4 *a3, const float4 *a4)
{
  return ?Float4Clamp@@YQ?AUfloat4@@U1@00@Z(result, a2, a3, a4);
}

/*
==============
Float4BlendxYzW
==============
*/

void __fastcall Float4BlendxYzW(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4BlendxYzW@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4Clamp
==============
*/
void Float4Clamp(const float4 *result, const float4 *a2, const float4 *a3, float4 *a4)
{
  __int128 v4; 
  __int128 v5; 

  _XMM6 = v5;
  __asm
  {
    vcmpltps xmm3, xmm6, xmm7
    vmovmskps eax, xmm3
  }
  _XMM8 = v4;
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmaxps  xmm0, xmm8, xmm7
    vminps  xmm1, xmm0, xmm6
  }
  *a4 = (float4)_XMM1.v;
}

/*
==============
Float4SinCos
==============
*/
void Float4SinCos(const float4 *sin, float4 *cos, float4 *a3)
{
  __int128 v3; 
  __int128 v4; 
  __m128 v7; 
  __m128 v9; 
  __m128 v11; 
  __m128 v15; 
  __m128 v16; 
  __m128 v20; 
  __int128 v21; 

  v4 = v3 & _xmm;
  _XMM2 = _mm128_add_ps(_mm128_mul_ps((__m128)(v3 & _xmm), (__m128)_xmm), (__m128)_xmm);
  __asm { vcvttps2dq xmm3, xmm2 }
  v21 = v3;
  v7 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm);
  _XMM1 = _mm128_sub_ps(_mm128_add_ps((__m128)(v3 & _xmm), (__m128)_xmm), v7);
  v9 = _mm128_sub_ps(_XMM1, (__m128)_xmm);
  _XMM0 = _xmm;
  v11 = _mm128_sub_ps((__m128)v4, v7);
  __asm
  {
    vpand   xmm2, xmm0, xmm3
    vpxor   xmm1, xmm1, xmm1
    vpcmpeqd xmm2, xmm2, xmm1
  }
  v15 = _mm128_mul_ps(v11, v11);
  v16 = _mm128_mul_ps(v9, v9);
  v20 = v11;
  __asm { vandnps xmm10, xmm2, cs:__xmm@80000000800000008000000080000000 }
  _XMM1 = v21;
  __asm { vcmpltps xmm1, xmm1, xmm0 }
  *cos = (float4)(*(_OWORD *)&_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v15, (__m128)_xmm_ab573f9fab573f9fab573f9fab573f9f), (__m128)_xmm), v15), (__m128)_xmm_b2d7322bb2d7322bb2d7322bb2d7322b), v15), (__m128)_xmm), v15), (__m128)_xmm_b9500d01b9500d01b9500d01b9500d01), v15), (__m128)_xmm), v15), (__m128)_xmm_be2aaaabbe2aaaabbe2aaaabbe2aaaab), v15), v20), v20) ^ _XMM10 ^ _XMM1 & _xmm);
  *a3 = (float4)(*(_OWORD *)&_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v16, (__m128)_xmm_ad49cba5ad49cba5ad49cba5ad49cba5), (__m128)_xmm), v16), (__m128)_xmm_b493f27eb493f27eb493f27eb493f27e), v16), (__m128)_xmm), v16), (__m128)_xmm_bab60b61bab60b61bab60b61bab60b61), v16), (__m128)_xmm), v16), (__m128)_xmm_bf000000bf000000bf000000bf000000), v16), (__m128)_xmm) ^ _XMM10);
}

/*
==============
Float4RadianToQuat
==============
*/
void Float4RadianToQuat(float4 *result, const float4 *sinAngles)
{
  __m128 v2; 
  __m128 v3; 
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  float4 v15; 
  float4 v16; 

  _mm128_mul_ps(_mm_shuffle_ps(v2, v2, 216), g_oneHalf.v);
  Float4SinCos(result, &v15, &v16);
  v3 = _mm_shuffle_ps(v15.v, v16.v, 0);
  v4 = _mm_shuffle_ps(v3, v3, 232);
  v5 = _mm_shuffle_ps(v15.v, v16.v, 85);
  v6 = _mm_shuffle_ps(v5, v5, 230);
  v7 = _mm_shuffle_ps(v16.v, v15.v, 170);
  v8 = _mm_shuffle_ps(v7, v7, 36);
  v9 = _mm_shuffle_ps(v16.v, v15.v, 0);
  v10 = _mm_shuffle_ps(v16.v, v15.v, 85);
  v11 = _mm_shuffle_ps(v10, v10, 230);
  v12 = _mm128_mul_ps(_mm_shuffle_ps(v9, v9, 232), (__m128)_xmm);
  v13 = _mm_shuffle_ps(v15.v, v16.v, 170);
  v14 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v12, v11), _mm_shuffle_ps(v13, v13, 36)), _mm128_mul_ps(_mm128_mul_ps(v6, v4), v8));
  _mm_shuffle_ps(v14, v14, 225);
}

/*
==============
Float4x4Inverse
==============
*/
vector4 *Float4x4Inverse(vector4 *result, const vector4 *in)
{
  vector4 *v2; 
  __m128 v3; 
  float4 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  void *retaddr; 

  v2 = (vector4 *)&retaddr;
  v3 = _mm_shuffle_ps(result->x.v, result->y.v, 238);
  v4.v = (__m128)result->z;
  v5 = _mm_shuffle_ps(v4.v, result->w.v, 238);
  v6 = _mm_shuffle_ps(v4.v, result->w.v, 68);
  v7 = _mm_shuffle_ps(result->x.v, result->y.v, 68);
  v8 = _mm_shuffle_ps(v3, v5, 136);
  v9 = _mm_shuffle_ps(v8, v8, 78);
  v10 = _mm_shuffle_ps(v5, v3, 221);
  v11 = _mm128_mul_ps(v10, v8);
  v12 = _mm_shuffle_ps(v11, v11, 177);
  v13 = _mm_shuffle_ps(v11, v11, 27);
  v14 = _mm_shuffle_ps(v6, v7, 221);
  v15 = _mm128_mul_ps(v14, v13);
  v16 = _mm128_mul_ps(v14, v12);
  v17 = _mm_shuffle_ps(v7, v6, 136);
  v57 = _mm128_sub_ps(_mm128_mul_ps(v17, v13), _mm128_mul_ps(v17, v12));
  v18 = _mm128_mul_ps(v8, v14);
  v19 = _mm_shuffle_ps(v18, v18, 177);
  v20 = _mm128_mul_ps(v17, v19);
  v21 = _mm128_mul_ps(v10, v19);
  v22 = _mm_shuffle_ps(v19, v19, 78);
  v23 = _mm128_mul_ps(v10, v22);
  v24 = _mm128_sub_ps(_mm128_mul_ps(v17, v22), v20);
  v25 = _mm128_mul_ps(_mm_shuffle_ps(v14, v14, 78), v10);
  v26 = _mm_shuffle_ps(v25, v25, 27);
  v54 = v17;
  v56 = v14;
  v59 = v24;
  v27 = _mm_shuffle_ps(v25, v25, 177);
  v55 = v10;
  v28 = _mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(v15, v16), v21), v23), _mm128_mul_ps(v9, v27)), _mm128_mul_ps(v9, v26));
  v58 = _mm128_sub_ps(_mm128_mul_ps(v17, v26), _mm128_mul_ps(v17, v27));
  v29 = _mm128_mul_ps(v14, v17);
  v30 = _mm_shuffle_ps(v29, v29, 177);
  v60 = _mm128_mul_ps(v9, v30);
  v31 = _mm_shuffle_ps(v30, v30, 78);
  v32 = _mm128_mul_ps(v10, v31);
  v61 = _mm128_mul_ps(v9, v31);
  v33 = _mm128_mul_ps(v10, v17);
  v34 = _mm128_mul_ps(v10, v30);
  v35 = _mm_shuffle_ps(v33, v33, 177);
  v36 = _mm_shuffle_ps(v33, v33, 27);
  v37 = _mm128_mul_ps(v9, v36);
  v38 = _mm128_mul_ps(v14, v35);
  v39 = _mm128_mul_ps(v14, v36);
  v40 = _mm128_mul_ps(v9, v54);
  v41 = _mm128_mul_ps(v9, v35);
  v42 = _mm_shuffle_ps(v40, v40, 177);
  v43 = _mm128_mul_ps(v42, v55);
  v44 = _mm128_mul_ps(v42, v56);
  v45 = _mm_shuffle_ps(v40, v40, 27);
  v46 = _mm128_mul_ps(v45, v55);
  v47 = _mm128_mul_ps(v45, v56);
  _XMM0 = _mm128_mul_ps(v28, v54);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vrcpss  xmm3, xmm2, xmm2
  }
  v52 = _XMM3;
  v52.m128_f32[0] = (float)(_XMM3.m128_f32[0] + _XMM3.m128_f32[0]) - (float)(*(float *)&_XMM2 * (float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]));
  v53 = _mm_shuffle_ps(v52, v52, 0);
  _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm_shuffle_ps(v57, v57, 78), v41), v37), v43), v46), v53);
  _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(v32, _mm128_add_ps(_mm_shuffle_ps(v58, v58, 78), v34)), v38), v39), v53);
  _mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_sub_ps(_mm128_sub_ps(v60, _mm_shuffle_ps(v59, v59, 78)), v61), v44), v47), v53);
  _mm128_mul_ps(v53, v28);
  return v2;
}

/*
==============
Float4x4Mul
==============
*/
vector4 *Float4x4Mul(vector4 *result, const vector4 *M1, const vector4 *M2)
{
  vector4 *v3; 
  __m128 v8; 
  __m128 v10; 
  __m128 v12; 
  __m128 v14; 
  __m128 v15; 
  __m128 v18; 
  __m128 v19; 
  __m128 v21; 
  __m128 v22; 
  __m128 v24; 
  __m128 v25; 
  __m128 v27; 
  __m128 v28; 
  __m128 v30; 
  __m128 v31; 
  __m128 v34; 
  __m128 v35; 
  __int64 v37; 

  v3 = (vector4 *)((unsigned __int64)&v37 ^ _security_cookie);
  __asm
  {
    vbroadcastss xmm1, dword ptr [rcx+30h]
    vbroadcastss xmm4, dword ptr [rcx]
    vbroadcastss xmm3, dword ptr [rcx+10h]
    vbroadcastss xmm2, dword ptr [rcx+20h]
  }
  v8 = _mm128_mul_ps(_XMM3, M1->x.v);
  __asm { vbroadcastss xmm3, dword ptr [rcx+24h] }
  v10 = _mm128_mul_ps(_XMM2, M1->x.v);
  __asm { vbroadcastss xmm2, dword ptr [rcx+14h] }
  v12 = _mm128_mul_ps(_XMM1, M1->x.v);
  __asm { vbroadcastss xmm1, dword ptr [rcx+4] }
  v14 = _mm128_mul_ps(_XMM4, M1->x.v);
  v15 = _mm128_mul_ps(_XMM1, M1->y.v);
  __asm
  {
    vbroadcastss xmm4, dword ptr [rcx+34h]
    vbroadcastss xmm1, dword ptr [rcx+8]
  }
  v18 = _mm128_add_ps(v15, v14);
  v19 = _mm128_mul_ps(_XMM2, M1->y.v);
  __asm { vbroadcastss xmm2, dword ptr [rcx+18h] }
  v21 = _mm128_add_ps(v19, v8);
  v22 = _mm128_mul_ps(_XMM3, M1->y.v);
  __asm { vbroadcastss xmm3, dword ptr [rcx+28h] }
  v24 = _mm128_add_ps(v22, v10);
  v25 = _mm128_mul_ps(_XMM4, M1->y.v);
  __asm { vbroadcastss xmm4, dword ptr [rcx+38h] }
  v27 = _mm128_add_ps(v25, v12);
  v28 = _mm128_mul_ps(_XMM1, M1->z.v);
  __asm { vbroadcastss xmm1, dword ptr [rcx+0Ch] }
  v30 = _mm128_add_ps(v28, v18);
  v31 = _mm128_mul_ps(_XMM2, M1->z.v);
  __asm
  {
    vbroadcastss xmm2, dword ptr [rcx+1Ch]
    vbroadcastss xmm5, dword ptr [rcx+3Ch]
  }
  v34 = _mm128_add_ps(v31, v21);
  v35 = _mm128_mul_ps(_XMM3, M1->z.v);
  __asm { vbroadcastss xmm3, dword ptr [rcx+2Ch] }
  _mm128_add_ps(_mm128_mul_ps(_XMM2, M1->w.v), v34);
  _mm128_add_ps(_mm128_mul_ps(_XMM5, M1->w.v), _mm128_add_ps(_mm128_mul_ps(_XMM4, M1->z.v), v27));
  _mm128_add_ps(_mm128_mul_ps(_XMM3, M1->w.v), _mm128_add_ps(v35, v24));
  _mm128_add_ps(_mm128_mul_ps(_XMM1, M1->w.v), v30);
  return v3;
}

/*
==============
Float4UnitQuatToAxis
==============
*/
void Float4UnitQuatToAxis(vector3 *result, const float4 *a2)
{
  __m128 v2; 
  __m128 v3; 
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 

  v3 = _mm128_add_ps(v2, v2);
  v4 = _mm128_mul_ps(v2, v3);
  v5 = _mm128_sub_ps(_mm128_sub_ps((__m128)(*(_OWORD *)&g_keepXYZ.v & _xmm), (__m128)(*(_OWORD *)&_mm_shuffle_ps(v4, v4, 193) & *(_OWORD *)&g_keepXYZ.v)), (__m128)(*(_OWORD *)&_mm_shuffle_ps(v4, v4, 218) & *(_OWORD *)&g_keepXYZ.v));
  v6 = _mm128_mul_ps(_mm_shuffle_ps(v2, v2, 208), _mm_shuffle_ps(v3, v3, 230));
  v7 = _mm128_mul_ps(_mm_shuffle_ps(v2, v2, 255), _mm_shuffle_ps(v3, v3, 201));
  v8 = _mm128_sub_ps(v6, v7);
  v9 = _mm128_add_ps(v7, v6);
  v10 = _mm_shuffle_ps(v9, v8, 73);
  v11 = _mm_shuffle_ps(v10, v10, 120);
  v12 = _mm_shuffle_ps(v9, v8, 160);
  v13 = _mm_shuffle_ps(v5, v11, 76);
  v14 = _mm_shuffle_ps(v5, v11, 237);
  _XMM2 = _mm_shuffle_ps(v12, v12, 136);
  __asm { vblendps xmm2, xmm2, xmm5, 0Ch }
  _mm_shuffle_ps(v13, v13, 120);
  _mm_shuffle_ps(v14, v14, 114);
}

/*
==============
Float3RotateQuatAroundOrigin
==============
*/
void Float3RotateQuatAroundOrigin(const float4 *result, const float4 *a2, const float4 *a3, float4 *a4)
{
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v10; 
  __m128 v11; 
  __m128 v15; 

  v7 = _mm128_mul_ps(v5, (__m128)_xmm);
  _XMM3 = g_keepXYZ.v;
  _mm128_sub_ps(v4, v6);
  __asm { vblendps xmm4, xmm3, xmm0, 7 }
  v10 = v6;
  v11 = _mm_shuffle_ps(_XMM4, _XMM4, 255);
  _XMM1 = _mm128_mul_ps(_XMM4, v7);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
  }
  v15 = _mm_shuffle_ps(v7, v7, 255);
  __asm { vhaddps xmm3, xmm2, xmm2 }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v15, v11), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM4, _XMM4, 201), _mm_shuffle_ps(v7, v7, 210)), _mm128_mul_ps(_mm_shuffle_ps(_XMM4, _XMM4, 210), _mm_shuffle_ps(v7, v7, 201))), _mm128_add_ps(_mm128_mul_ps(_XMM4, v15), _mm128_mul_ps(v7, v11)));
  __asm { vblendps xmm0, xmm2, xmm0, 7 }
  Float4QuatMultiply(result, a2, a4);
  a4->v = _mm128_add_ps(v10, a4->v);
}

/*
==============
Float4CosEst
==============
*/
__m128 Float4CosEst(float4 *result, const float4 *a2)
{
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 

  _XMM3 = g_negativeZero.v;
  __asm { vandnps xmm1, xmm3, xmm0 }
  _XMM1 = _mm128_mul_ps(_mm128_sub_ps((__m128)0i64, _XMM1), g_inv2Pi.v);
  __asm { vroundps xmm0, xmm1, 2 }
  _mm128_sub_ps(_mm128_sub_ps(_XMM0, _XMM1), g_oneHalf.v);
  __asm { vandnps xmm2, xmm3, xmm0 }
  v7 = _mm128_sub_ps(_XMM2, g_oneQuarter.v);
  v8 = _mm128_mul_ps(v7, v7);
  v9 = _mm128_mul_ps(v8, v8);
  v10 = _mm128_mul_ps(v7, v8);
  v11 = _mm128_mul_ps(v7, v9);
  return _mm128_add_ps(_mm128_mul_ps(v7, g_cosK1.v), _mm128_add_ps(_mm128_mul_ps(v10, g_cosK3.v), _mm128_add_ps(_mm128_mul_ps(v11, g_cosK5.v), _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v9, v10), g_cosK7.v), _mm128_mul_ps(_mm128_mul_ps(v9, v11), g_cosK9.v)))));
}

/*
==============
Float4LoadVec3
==============
*/
void Float4LoadVec3(const vec3_t *element, float4 *result)
{
  __int128 v3; 
  __int128 v6; 

  HIDWORD(v6) = 0;
  v3 = v6;
  *(float *)&v3 = element->v[0];
  _XMM3 = v3;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
  }
  *result = (float4)_XMM3.v;
}

/*
==============
Float4QuatMultiply
==============
*/
void Float4QuatMultiply(const float4 *result, const float4 *a2, float4 *a3)
{
  __m128 v3; 
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v14; 

  v5 = _mm128_mul_ps(_mm_shuffle_ps(v4, v4, 201), _mm_shuffle_ps(v3, v3, 210));
  v6 = _mm_shuffle_ps(v3, v3, 201);
  v7 = v3;
  v8 = _mm_shuffle_ps(v3, v3, 255);
  _XMM0 = _mm128_mul_ps(v4, v3);
  v10 = _mm128_mul_ps(_mm_shuffle_ps(v4, v4, 210), v6);
  v11 = v4;
  v12 = _mm_shuffle_ps(v4, v4, 255);
  __asm { vinsertps xmm1, xmm0, xmm0, 8 }
  v14 = _mm128_sub_ps(v5, v10);
  __asm
  {
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm3, xmm2, xmm2
  }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v8, v12), _XMM3);
  _mm128_add_ps(v14, _mm128_add_ps(_mm128_mul_ps(v8, v11), _mm128_mul_ps(v12, v7)));
  __asm { vblendps xmm0, xmm2, xmm0, 7 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4AnglesToAxis
==============
*/

void __fastcall Float4AnglesToAxis(const float4 *axis, vector3 *a2, double a3)
{
  __m128 v3; 
  __int128 v4; 
  __m128 v5; 
  const float4 *v7; 
  vector3 *v8; 
  __m256i v9; 

  v5 = _mm128_mul_ps(v3, g_degreeToRadian.v);
  Float4RadianToQuat((float4 *)axis, &a2->x);
  Float4UnitQuatToAxis(v8, v7);
  *(_OWORD *)&v9.m256i_u64[2] = v4;
  *(__m128 *)v9.m256i_i8 = v5;
  *(__m256i *)a2->x.v.m128_f32 = v9;
  a2->z = *(float4 *)&a3;
}

/*
==============
Float4BlendXYzW
==============
*/
void Float4BlendXYzW(const float4 *result, const float4 *a2, float4 *a3)
{
  __asm { vblendps xmm0, xmm0, xmm1, 4 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4BlendXyZW
==============
*/
void Float4BlendXyZW(const float4 *result, const float4 *a2, float4 *a3)
{
  __asm { vblendps xmm0, xmm0, xmm1, 2 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4BlendXyzW
==============
*/
void Float4BlendXyzW(const float4 *result, const float4 *a2, float4 *a3)
{
  __asm { vblendps xmm0, xmm0, xmm1, 6 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4BlendxYZW
==============
*/
void Float4BlendxYZW(const float4 *result, const float4 *a2, float4 *a3)
{
  __asm { vblendps xmm0, xmm0, xmm1, 1 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4BlendxYzW
==============
*/
void Float4BlendxYzW(const float4 *result, const float4 *a2, float4 *a3)
{
  __asm { vblendps xmm0, xmm0, xmm1, 5 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4BlendxyZW
==============
*/
void Float4BlendxyZW(const float4 *result, const float4 *a2, float4 *a3)
{
  __asm { vblendps xmm0, xmm0, xmm1, 3 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4QuatRotationAxis
==============
*/
void Float4QuatRotationAxis(const float4 *result, const float4 *a2, float4 *a3)
{
  __m128 v3; 
  __m128 v4; 
  __m128 v8; 
  float4 v14; 
  float4 v15; 

  _XMM2 = _mm128_mul_ps(v3, v3);
  __asm { vinsertps xmm3, xmm2, xmm2, 8 }
  v8 = v3;
  _mm128_mul_ps(v4, g_oneHalf.v);
  __asm { vhaddps xmm6, xmm3, xmm3 }
  Float4SinCos(result, &v14, &v15);
  __asm
  {
    vhaddps xmm0, xmm6, xmm6
    vrsqrtps xmm1, xmm0
  }
  _XMM3 = _mm128_mul_ps(_mm128_mul_ps(_XMM1, v8), v14.v);
  __asm { vblendps xmm0, xmm3, [rsp+78h+var_48], 8 }
  *a3 = (float4)_XMM0.v;
}

/*
==============
Float4QuatTransform
==============
*/
void Float4QuatTransform(const float4 *outResult, const float4 *a2, float4 *a3)
{
  __m128 v3; 
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 

  v5 = _mm_shuffle_ps(v3, v3, 210);
  v6 = _mm_shuffle_ps(v3, v3, 201);
  v7 = _mm_shuffle_ps(v3, v3, 255);
  v8 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v4, v4, 210), v6), _mm128_mul_ps(_mm_shuffle_ps(v4, v4, 201), v5));
  v9 = _mm128_add_ps(v8, v8);
  a3->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v9, v9, 210), v6), _mm128_mul_ps(_mm_shuffle_ps(v9, v9, 201), v5)), _mm128_add_ps(_mm128_mul_ps(v7, v9), v4));
}

/*
==============
FloatPackFloat16HQ
==============
*/
__int64 FloatPackFloat16HQ(const float v)
{
  unsigned int v1; 
  unsigned int v2; 
  int v4; 
  int v5; 
  unsigned int v6; 

  if ( (LODWORD(v) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 959, ASSERT_TYPE_SANITY, "( !IS_NAN( v ) )", (const char *)&queryFormat, "!IS_NAN( v )") )
    __debugbreak();
  v1 = LODWORD(v) & 0x7FFFFFFF;
  v2 = HIWORD(LODWORD(v)) & 0x8000;
  if ( (LODWORD(v) & 0x7FFFFFFFu) < 0x33000000 )
    return v2;
  if ( v1 >= 0x477FD000 )
  {
    v2 |= 0x7BFFu;
    return v2;
  }
  v4 = 0;
  v5 = v1 >> 23;
  v6 = LODWORD(v) & 0x7FFFFF;
  if ( v5 >= 113 )
    v4 = v5 - 112;
  else
    v6 = (v6 | 0x800000) >> (113 - v5);
  return v2 | (((v6 | (v4 << 23)) + 4096) >> 13);
}

/*
==============
FloatUnpackFloat16HQ
==============
*/
float FloatUnpackFloat16HQ(const unsigned int packedInt)
{
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  float result; 

  v1 = packedInt >> 10;
  v2 = (packedInt & 0xFFFF8000) << 16;
  v3 = packedInt & 0x3FF;
  v4 = v1 & 0x1F;
  if ( !v4 )
    return COERCE_FLOAT(v3 + (v2 | 0x3F000000)) - COERCE_FLOAT(v2 | 0x3F000000);
  LODWORD(result) = v2 | (v3 << 13) | ((v4 + 112) << 23);
  return result;
}

/*
==============
Float4Clamp
==============
*/
char Float4Clamp(float4 *result, const float4 *a2, const float4 *a3, const float4 *a4)
{
  __int128 v4; 
  __int128 v5; 

  _XMM6 = v5;
  __asm
  {
    vcmpltps xmm3, xmm6, xmm7
    vmovmskps eax, xmm3
  }
  _XMM8 = v4;
  if ( _EAX )
  {
    LOBYTE(_EAX) = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )");
    if ( (_BYTE)_EAX )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm8, xmm7
    vminps  xmm0, xmm0, xmm6
  }
  return _EAX;
}

/*
==============
Float4x4RotationAroundUnitAxis
==============
*/
vector4 *Float4x4RotationAroundUnitAxis(vector4 *result, const float4 *axis, const float radians)
{
  __m128 v; 
  vector4 *v18; 
  int v19; 
  float v20[3]; 

  FastSinCos(radians, v20, (float *)&v19);
  v = axis->v;
  _mm_shuffle_ps(v, v, 170);
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 170);
  _XMM3 = 0i64;
  __asm
  {
    vinsertps xmm3, xmm3, xmm2, 0
    vinsertps xmm3, xmm3, xmm4, 10h
    vinsertps xmm3, xmm3, xmm5, 20h ; ' '
  }
  result->x = (float4)_XMM3.v;
  _XMM4 = 0i64;
  _mm_shuffle_ps(v, v, 170);
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 170);
  __asm
  {
    vinsertps xmm4, xmm4, xmm2, 0
    vinsertps xmm4, xmm4, xmm5, 10h
  }
  _XMM3 = 0i64;
  __asm { vinsertps xmm4, xmm4, xmm6, 20h ; ' ' }
  _mm_shuffle_ps(v, v, 170);
  _mm_shuffle_ps(v, v, 170);
  _mm_shuffle_ps(v, v, 170);
  _mm_shuffle_ps(v, v, 85);
  _mm_shuffle_ps(v, v, 170);
  result->y = (float4)_XMM4.v;
  _mm_shuffle_ps(v, v, 85);
  __asm
  {
    vinsertps xmm3, xmm3, xmm2, 0
    vinsertps xmm3, xmm3, xmm4, 10h
    vinsertps xmm3, xmm3, xmm5, 20h ; ' '
  }
  result->z = (float4)_XMM3.v;
  v18 = result;
  result->w = (float4)_xmm;
  return v18;
}

