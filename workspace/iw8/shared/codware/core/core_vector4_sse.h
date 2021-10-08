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
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovups xmm6, xmm2
    vmovups xmm7, xmm1
    vcmpltps xmm3, xmm6, xmm7
    vmovmskps eax, xmm3
  }
  _RBX = a4;
  __asm { vmovups xmm8, xmm0 }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmaxps  xmm0, xmm8, xmm7
    vminps  xmm1, xmm0, xmm6
    vmovups xmmword ptr [rbx], xmm1
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
Float4SinCos
==============
*/
void Float4SinCos(const float4 *sin, float4 *cos, float4 *_R8)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vandps  xmm4, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulps  xmm2, xmm4, cs:__xmm@3ea2f9833ea2f9833ea2f9833ea2f983
    vaddps  xmm2, xmm2, cs:__xmm@3f0000003f0000003f0000003f000000
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vcvttps2dq xmm3, xmm2
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovups [rsp+0C8h+var_B8], xmm0
    vaddps  xmm0, xmm4, cs:__xmm@3fc90fdb3fc90fdb3fc90fdb3fc90fdb
    vcvtdq2ps xmm1, xmm3
    vmulps  xmm2, xmm1, cs:__xmm@40490fdb40490fdb40490fdb40490fdb
    vsubps  xmm1, xmm0, xmm2
    vsubps  xmm5, xmm1, cs:__xmm@3fc90fdb3fc90fdb3fc90fdb3fc90fdb
    vmovdqu xmm0, cs:__xmm@00000001000000010000000100000001
    vsubps  xmm10, xmm4, xmm2
    vpand   xmm2, xmm0, xmm3
    vpxor   xmm1, xmm1, xmm1
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovaps [rsp+0C8h+var_A8], xmm15
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm13, [rsp+0C8h+var_88]
    vmovaps xmm14, [rsp+0C8h+var_98]
    vmovaps xmm15, [rsp+0C8h+var_A8]
    vpcmpeqd xmm2, xmm2, xmm1
    vmulps  xmm4, xmm10, xmm10
    vmulps  xmm0, xmm4, cs:__xmm@ab573f9fab573f9fab573f9fab573f9f
    vaddps  xmm1, xmm0, cs:__xmm@2f3092312f3092312f3092312f309231
    vmulps  xmm12, xmm5, xmm5
    vmovups [rsp+0C8h+var_C8], xmm10
    vandnps xmm10, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulps  xmm2, xmm1, xmm4
    vaddps  xmm3, xmm2, cs:__xmm@b2d7322bb2d7322bb2d7322bb2d7322b
    vmulps  xmm0, xmm3, xmm4
    vaddps  xmm1, xmm0, cs:__xmm@3638ef1d3638ef1d3638ef1d3638ef1d
    vmulps  xmm2, xmm1, xmm4
    vaddps  xmm3, xmm2, cs:__xmm@b9500d01b9500d01b9500d01b9500d01
    vmulps  xmm0, xmm3, xmm4
    vaddps  xmm1, xmm0, cs:__xmm@3c0888893c0888893c0888893c088889
    vmulps  xmm2, xmm1, xmm4
    vaddps  xmm3, xmm2, cs:__xmm@be2aaaabbe2aaaabbe2aaaabbe2aaaab
    vmulps  xmm0, xmm3, xmm4
    vmulps  xmm1, xmm0, [rsp+0C8h+var_C8]
    vaddps  xmm2, xmm1, [rsp+0C8h+var_C8]
    vmovups xmm1, [rsp+0C8h+var_B8]
    vxorps  xmm3, xmm2, xmm10
    vxorps  xmm0, xmm0, xmm0
    vcmpltps xmm1, xmm1, xmm0
    vandps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulps  xmm0, xmm12, cs:__xmm@ad49cba5ad49cba5ad49cba5ad49cba5
    vaddps  xmm1, xmm0, cs:__xmm@310f76c7310f76c7310f76c7310f76c7
    vxorps  xmm3, xmm3, xmm2
    vmulps  xmm2, xmm1, xmm12
    vmovups xmmword ptr [rdx], xmm3
    vaddps  xmm3, xmm2, cs:__xmm@b493f27eb493f27eb493f27eb493f27e
    vmulps  xmm0, xmm3, xmm12
    vaddps  xmm1, xmm0, cs:__xmm@37d00d0137d00d0137d00d0137d00d01
    vmulps  xmm2, xmm1, xmm12
    vaddps  xmm3, xmm2, cs:__xmm@bab60b61bab60b61bab60b61bab60b61
    vmulps  xmm0, xmm3, xmm12
    vaddps  xmm1, xmm0, cs:__xmm@3d2aaaab3d2aaaab3d2aaaab3d2aaaab
    vmulps  xmm2, xmm1, xmm12
    vaddps  xmm3, xmm2, cs:__xmm@bf000000bf000000bf000000bf000000
    vmulps  xmm4, xmm3, xmm12
    vaddps  xmm1, xmm4, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovaps xmm12, xmmword ptr [r11-78h]
    vxorps  xmm2, xmm1, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovups xmmword ptr [r8], xmm2
  }
}

/*
==============
Float4RadianToQuat
==============
*/
void Float4RadianToQuat(float4 *result, const float4 *sinAngles)
{
  float4 v35; 
  float4 v36[6]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vshufps xmm1, xmm0, xmm0, 0D8h ; 'Ø'
    vmulps  xmm0, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
  }
  Float4SinCos(result, &v35, v36);
  __asm
  {
    vmovups xmm4, [rsp+98h+var_68]
    vmovups xmm7, [rsp+98h+var_78]
    vshufps xmm0, xmm7, xmm4, 0
    vshufps xmm8, xmm0, xmm0, 0E8h ; 'è'
    vshufps xmm1, xmm7, xmm4, 55h ; 'U'
    vshufps xmm5, xmm1, xmm1, 0E6h ; 'æ'
    vshufps xmm0, xmm4, xmm7, 0AAh ; 'ª'
    vshufps xmm6, xmm0, xmm0, 24h ; '$'
    vshufps xmm1, xmm4, xmm7, 0
    vshufps xmm2, xmm1, xmm1, 0E8h ; 'è'
    vshufps xmm0, xmm4, xmm7, 55h ; 'U'
    vshufps xmm3, xmm0, xmm0, 0E6h ; 'æ'
    vmulps  xmm0, xmm2, cs:__xmm@3f800000bf800000bf8000003f800000
    vshufps xmm1, xmm7, xmm4, 0AAh ; 'ª'
    vshufps xmm4, xmm1, xmm1, 24h ; '$'
    vmulps  xmm2, xmm0, xmm3
    vmulps  xmm0, xmm2, xmm4
    vmulps  xmm1, xmm5, xmm8
    vmulps  xmm1, xmm1, xmm6
    vaddps  xmm1, xmm0, xmm1
    vshufps xmm0, xmm1, xmm1, 0E1h ; 'á'
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
}

/*
==============
Float4x4Inverse
==============
*/
vector4 *Float4x4Inverse(vector4 *result, const vector4 *in)
{
  void *retaddr; 

  _RAX = (vector4 *)&retaddr;
  __asm
  {
    vmovups xmm3, xmmword ptr [rcx]
    vshufps xmm2, xmm3, xmmword ptr [rcx+10h], 0EEh ; 'î'
    vmovups xmm1, xmmword ptr [rcx+20h]
    vshufps xmm5, xmm1, xmmword ptr [rcx+30h], 0EEh ; 'î'
    vshufps xmm4, xmm1, xmmword ptr [rcx+30h], 44h ; 'D'
    vmovaps xmmword ptr [rax-18h], xmm6
    vshufps xmm6, xmm3, xmmword ptr [rcx+10h], 44h ; 'D'
    vshufps xmm3, xmm2, xmm5, 88h ; 'ˆ'
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vshufps xmm10, xmm3, xmm3, 4Eh ; 'N'
    vmovaps xmmword ptr [rax-68h], xmm11
    vshufps xmm11, xmm5, xmm2, 0DDh ; 'Ý'
    vmulps  xmm0, xmm11, xmm3
    vshufps xmm1, xmm0, xmm0, 0B1h ; '±'
    vshufps xmm0, xmm0, xmm0, 1Bh
    vmovaps xmmword ptr [rax-78h], xmm12
    vshufps xmm12, xmm4, xmm6, 0DDh ; 'Ý'
    vmulps  xmm8, xmm12, xmm0
    vmulps  xmm9, xmm12, xmm1
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
    vshufps xmm13, xmm6, xmm4, 88h ; 'ˆ'
    vmulps  xmm0, xmm13, xmm0
    vmulps  xmm2, xmm13, xmm1
    vsubps  xmm1, xmm0, xmm2
    vmovups [rsp+128h+var_F8], xmm1
    vmulps  xmm1, xmm3, xmm12
    vshufps xmm0, xmm1, xmm1, 0B1h ; '±'
    vmulps  xmm1, xmm13, xmm0
    vmulps  xmm7, xmm11, xmm0
    vshufps xmm0, xmm0, xmm0, 4Eh ; 'N'
    vmulps  xmm6, xmm11, xmm0
    vmulps  xmm0, xmm13, xmm0
    vsubps  xmm2, xmm0, xmm1
    vshufps xmm1, xmm12, xmm12, 4Eh ; 'N'
    vmulps  xmm0, xmm1, xmm11
    vshufps xmm4, xmm0, xmm0, 1Bh
    vmovups [rsp+128h+var_128], xmm13
    vmovups [rsp+128h+var_108], xmm12
    vmovups [rsp+128h+var_D8], xmm2
    vshufps xmm2, xmm0, xmm0, 0B1h ; '±'
    vsubps  xmm0, xmm8, xmm9
    vaddps  xmm1, xmm0, xmm7
    vmulps  xmm5, xmm13, xmm2
    vmulps  xmm0, xmm10, xmm4
    vmulps  xmm3, xmm10, xmm2
    vsubps  xmm2, xmm1, xmm6
    vmulps  xmm1, xmm13, xmm4
    vmovups [rsp+128h+var_118], xmm11
    vaddps  xmm3, xmm2, xmm3
    vsubps  xmm8, xmm3, xmm0
    vsubps  xmm0, xmm1, xmm5
    vmovups [rsp+128h+var_E8], xmm0
    vmulps  xmm0, xmm12, xmm13
    vshufps xmm1, xmm0, xmm0, 0B1h ; '±'
    vmulps  xmm0, xmm10, xmm1
    vmovups [rsp+128h+var_C8], xmm0
    vshufps xmm0, xmm1, xmm1, 4Eh ; 'N'
    vmulps  xmm14, xmm11, xmm0
    vmulps  xmm0, xmm10, xmm0
    vmovups [rsp+128h+var_B8], xmm0
    vmulps  xmm0, xmm11, xmm13
    vmulps  xmm15, xmm11, xmm1
    vshufps xmm1, xmm0, xmm0, 0B1h ; '±'
    vshufps xmm0, xmm0, xmm0, 1Bh
    vmulps  xmm6, xmm10, xmm0
    vmulps  xmm13, xmm12, xmm1
    vmulps  xmm12, xmm12, xmm0
    vmulps  xmm0, xmm10, [rsp+128h+var_128]
    vmulps  xmm11, xmm10, xmm1
    vshufps xmm1, xmm0, xmm0, 0B1h ; '±'
    vmulps  xmm5, xmm1, [rsp+128h+var_118]
    vmulps  xmm10, xmm1, [rsp+128h+var_108]
    vshufps xmm0, xmm0, xmm0, 1Bh
    vmulps  xmm4, xmm0, [rsp+128h+var_118]
    vmulps  xmm9, xmm0, [rsp+128h+var_108]
    vmulps  xmm0, xmm8, [rsp+128h+var_128]
    vhaddps xmm1, xmm0, xmm0
  }
  _R11 = &retaddr;
  __asm
  {
    vhaddps xmm2, xmm1, xmm1
    vrcpss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm0
    vmovups xmm0, [rsp+128h+var_F8]
    vshufps xmm0, xmm0, xmm0, 4Eh ; 'N'
    vsubps  xmm1, xmm0, xmm11
    vmovaps xmm11, xmmword ptr [r11-68h]
    vaddss  xmm3, xmm3, xmm3
    vsubss  xmm3, xmm3, xmm2
    vshufps xmm7, xmm3, xmm3, 0
    vaddps  xmm2, xmm1, xmm6
    vaddps  xmm3, xmm2, xmm5
    vsubps  xmm0, xmm3, xmm4
    vmulps  xmm6, xmm0, xmm7
    vmovups xmm0, [rsp+128h+var_E8]
    vshufps xmm1, xmm0, xmm0, 4Eh ; 'N'
    vaddps  xmm0, xmm1, xmm15
    vmovaps xmm15, xmmword ptr [r11-0A8h]
    vsubps  xmm2, xmm14, xmm0
    vmovups xmm0, [rsp+128h+var_D8]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vaddps  xmm3, xmm2, xmm13
    vmovaps xmm13, xmmword ptr [r11-88h]
    vsubps  xmm4, xmm3, xmm12
    vmovaps xmm12, xmmword ptr [r11-78h]
    vshufps xmm3, xmm0, xmm0, 4Eh ; 'N'
    vmovups xmm0, [rsp+128h+var_C8]
    vmulps  xmm2, xmm4, xmm7
    vsubps  xmm4, xmm0, xmm3
    vsubps  xmm5, xmm4, [rsp+128h+var_B8]
    vsubps  xmm3, xmm5, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmulps  xmm8, xmm7, xmm8
    vaddps  xmm4, xmm3, xmm9
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmulps  xmm3, xmm4, xmm7
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovups xmm1, xmm6
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovups xmm0, xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return _RAX;
}

/*
==============
Float4x4Mul
==============
*/
vector4 *Float4x4Mul(vector4 *result, const vector4 *M1, const vector4 *M2)
{
  vector4 *v7; 
  __int64 v58; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps [rsp+58h+var_48], xmm9
  }
  v7 = (vector4 *)((unsigned __int64)&v58 ^ _security_cookie);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vbroadcastss xmm1, dword ptr [rcx+30h]
    vbroadcastss xmm4, dword ptr [rcx]
    vbroadcastss xmm3, dword ptr [rcx+10h]
    vbroadcastss xmm2, dword ptr [rcx+20h]
    vmulps  xmm6, xmm3, xmm0
    vbroadcastss xmm3, dword ptr [rcx+24h]
    vmulps  xmm7, xmm2, xmm0
    vbroadcastss xmm2, dword ptr [rcx+14h]
    vmulps  xmm8, xmm1, xmm0
    vbroadcastss xmm1, dword ptr [rcx+4]
    vmulps  xmm5, xmm4, xmm0
    vmulps  xmm0, xmm1, xmmword ptr [rdx+10h]
    vbroadcastss xmm4, dword ptr [rcx+34h]
    vbroadcastss xmm1, dword ptr [rcx+8]
    vaddps  xmm5, xmm0, xmm5
    vmulps  xmm0, xmm2, xmmword ptr [rdx+10h]
    vbroadcastss xmm2, dword ptr [rcx+18h]
    vaddps  xmm6, xmm0, xmm6
    vmulps  xmm0, xmm3, xmmword ptr [rdx+10h]
    vbroadcastss xmm3, dword ptr [rcx+28h]
    vaddps  xmm7, xmm0, xmm7
    vmulps  xmm0, xmm4, xmmword ptr [rdx+10h]
    vbroadcastss xmm4, dword ptr [rcx+38h]
    vaddps  xmm8, xmm0, xmm8
    vmulps  xmm0, xmm1, xmmword ptr [rdx+20h]
    vbroadcastss xmm1, dword ptr [rcx+0Ch]
    vaddps  xmm9, xmm0, xmm5
    vmulps  xmm0, xmm2, xmmword ptr [rdx+20h]
    vbroadcastss xmm2, dword ptr [rcx+1Ch]
    vbroadcastss xmm5, dword ptr [rcx+3Ch]
    vaddps  xmm6, xmm0, xmm6
    vmulps  xmm0, xmm3, xmmword ptr [rdx+20h]
    vbroadcastss xmm3, dword ptr [rcx+2Ch]
    vaddps  xmm7, xmm0, xmm7
    vmulps  xmm0, xmm4, xmmword ptr [rdx+20h]
    vaddps  xmm8, xmm0, xmm8
    vmulps  xmm0, xmm1, xmmword ptr [rdx+30h]
    vaddps  xmm4, xmm0, xmm9
    vmulps  xmm0, xmm2, xmmword ptr [rdx+30h]
    vmulps  xmm2, xmm3, xmmword ptr [rdx+30h]
    vmulps  xmm3, xmm5, xmmword ptr [rdx+30h]
    vaddps  xmm1, xmm0, xmm6
    vaddps  xmm3, xmm3, xmm8
    vaddps  xmm2, xmm2, xmm7
    vmovups xmm0, xmm4
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
  }
  return v7;
}

/*
==============
Float4UnitQuatToAxis
==============
*/
void Float4UnitQuatToAxis(vector3 *result, const float4 *a2)
{
  __asm
  {
    vmovups xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
    vandps  xmm2, xmm5, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovups xmm7, xmm0
    vmovaps [rsp+38h+var_38], xmm8
    vaddps  xmm8, xmm0, xmm0
    vmulps  xmm6, xmm0, xmm8
    vshufps xmm1, xmm6, xmm6, 0C1h ; 'Á'
    vandps  xmm3, xmm1, xmm5
    vsubps  xmm4, xmm2, xmm3
    vshufps xmm2, xmm0, xmm0, 0D0h ; 'Ð'
    vshufps xmm3, xmm6, xmm6, 0DAh ; 'Ú'
    vmovaps xmm6, [rsp+38h+var_18]
    vandps  xmm1, xmm3, xmm5
    vsubps  xmm5, xmm4, xmm1
    vshufps xmm0, xmm8, xmm8, 0E6h ; 'æ'
    vmulps  xmm3, xmm2, xmm0
    vshufps xmm1, xmm7, xmm7, 0FFh
    vmovaps xmm7, [rsp+38h+var_28]
    vshufps xmm0, xmm8, xmm8, 0C9h ; 'É'
    vmovaps xmm8, [rsp+38h+var_38]
    vmulps  xmm2, xmm1, xmm0
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm2, xmm3
    vshufps xmm0, xmm4, xmm1, 49h ; 'I'
    vshufps xmm2, xmm0, xmm0, 78h ; 'x'
    vshufps xmm3, xmm4, xmm1, 0A0h ; ' '
    vshufps xmm0, xmm5, xmm2, 4Ch ; 'L'
    vshufps xmm1, xmm5, xmm2, 0EDh ; 'í'
    vshufps xmm2, xmm3, xmm3, 88h ; 'ˆ'
    vblendps xmm2, xmm2, xmm5, 0Ch
    vshufps xmm0, xmm0, xmm0, 78h ; 'x'
    vshufps xmm1, xmm1, xmm1, 72h ; 'r'
  }
}

/*
==============
Float3RotateQuatAroundOrigin
==============
*/
void Float3RotateQuatAroundOrigin(const float4 *result, const float4 *a2, const float4 *a3, float4 *a4)
{
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps [rsp+88h+var_58], xmm10
    vmulps  xmm7, xmm1, cs:__xmm@3f800000bf800000bf800000bf800000
    vmovups xmm3, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
    vsubps  xmm0, xmm0, xmm2
    vblendps xmm4, xmm3, xmm0, 7
    vmovups xmm9, xmm1
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmovups xmm10, xmm2
    vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm6, xmm4, xmm4, 0FFh
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm4, xmm7
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vshufps xmm8, xmm7, xmm7, 0FFh
    vmulps  xmm0, xmm8, xmm6
    vmulps  xmm4, xmm4, xmm8
    vmulps  xmm1, xmm7, xmm6
    vaddps  xmm1, xmm4, xmm1
    vhaddps xmm3, xmm2, xmm2
    vsubps  xmm2, xmm0, xmm3
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm0, xmm2, xmm0, 7
  }
  _RBX = a4;
  __asm { vmovups xmm1, xmm9 }
  Float4QuatMultiply(result, a2, a4);
  __asm
  {
    vaddps  xmm0, xmm10, xmmword ptr [rbx]
    vmovups xmmword ptr [rbx], xmm0
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
}

/*
==============
Float4CosEst
==============
*/
__m128 Float4CosEst(float4 *result, const float4 *a2)
{
  __asm
  {
    vmovups xmm3, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm1, xmm3, xmm0
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm2, xmm0, xmm1
    vmulps  xmm1, xmm2, xmmword ptr cs:?g_inv2Pi@@3Ufloat4@@B.v; float4 const g_inv2Pi
    vroundps xmm0, xmm1, 2
    vsubps  xmm1, xmm0, xmm1
    vsubps  xmm0, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vandnps xmm2, xmm3, xmm0
    vsubps  xmm5, xmm2, xmmword ptr cs:?g_oneQuarter@@3Ufloat4@@B.v; float4 const g_oneQuarter
    vmulps  xmm0, xmm5, xmm5
    vmulps  xmm1, xmm0, xmm0
    vmulps  xmm4, xmm5, xmm0
    vmulps  xmm3, xmm5, xmm1
    vmulps  xmm2, xmm1, xmm4
    vmulps  xmm0, xmm1, xmm3
    vmulps  xmm1, xmm0, xmmword ptr cs:?g_cosK9@@3Ufloat4@@B.v; float4 const g_cosK9
    vmulps  xmm0, xmm2, xmmword ptr cs:?g_cosK7@@3Ufloat4@@B.v; float4 const g_cosK7
    vaddps  xmm2, xmm0, xmm1
    vmulps  xmm0, xmm3, xmmword ptr cs:?g_cosK5@@3Ufloat4@@B.v; float4 const g_cosK5
    vaddps  xmm1, xmm0, xmm2
    vmulps  xmm0, xmm4, xmmword ptr cs:?g_cosK3@@3Ufloat4@@B.v; float4 const g_cosK3
    vaddps  xmm2, xmm0, xmm1
    vmulps  xmm0, xmm5, xmmword ptr cs:?g_cosK1@@3Ufloat4@@B.v; float4 const g_cosK1
    vaddps  xmm0, xmm0, xmm2
  }
  return _XMM0;
}

/*
==============
Float4LoadVec3
==============
*/
void Float4LoadVec3(const vec3_t *element, float4 *result)
{
  __int128 v7; 

  __asm { vmovss  xmm0, dword ptr [rcx] }
  HIDWORD(v7) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
    vmovups xmmword ptr [rdx], xmm3
  }
}

/*
==============
Float4QuatMultiply
==============
*/
void Float4QuatMultiply(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps [rsp+58h+var_48], xmm9
    vshufps xmm2, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm3, xmm1, xmm1, 0C9h ; 'É'
    vmulps  xmm5, xmm3, xmm2
    vshufps xmm3, xmm0, xmm0, 0C9h ; 'É'
    vmovups xmm9, xmm0
    vshufps xmm8, xmm0, xmm0, 0FFh
    vmulps  xmm0, xmm1, xmm0
    vshufps xmm4, xmm1, xmm1, 0D2h ; 'Ò'
    vmulps  xmm2, xmm4, xmm3
    vmovups xmm7, xmm1
    vshufps xmm6, xmm1, xmm1, 0FFh
    vinsertps xmm1, xmm0, xmm0, 8
    vsubps  xmm5, xmm5, xmm2
    vhaddps xmm2, xmm1, xmm1
    vmulps  xmm0, xmm8, xmm6
    vmulps  xmm1, xmm6, xmm9
    vmulps  xmm4, xmm8, xmm7
    vhaddps xmm3, xmm2, xmm2
    vsubps  xmm2, xmm0, xmm3
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm0, xmm2, xmm0, 7
    vmovups xmmword ptr [r8], xmm0
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
  }
}

/*
==============
Float4AnglesToAxis
==============
*/

void __fastcall Float4AnglesToAxis(const float4 *axis, vector3 *a2, double _XMM2_8)
{
  const float4 *v7; 
  vector3 *v8; 

  __asm { vmulps  xmm0, xmm0, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian }
  _RBX = a2;
  Float4RadianToQuat((float4 *)axis, &a2->x);
  Float4UnitQuatToAxis(v8, v7);
  __asm
  {
    vmovups xmmword ptr [rsp+68h+var_48+10h], xmm1
    vmovups xmmword ptr [rsp+68h+var_48], xmm0
    vmovups ymm1, [rsp+68h+var_48]
    vmovups ymmword ptr [rbx], ymm1
    vmovups xmmword ptr [rbx+20h], xmm2
  }
}

/*
==============
Float4BlendXYzW
==============
*/
void Float4BlendXYzW(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vblendps xmm0, xmm0, xmm1, 4
    vmovups xmmword ptr [r8], xmm0
  }
}

/*
==============
Float4BlendXyZW
==============
*/
void Float4BlendXyZW(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vblendps xmm0, xmm0, xmm1, 2
    vmovups xmmword ptr [r8], xmm0
  }
}

/*
==============
Float4BlendXyzW
==============
*/
void Float4BlendXyzW(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vblendps xmm0, xmm0, xmm1, 6
    vmovups xmmword ptr [r8], xmm0
  }
}

/*
==============
Float4BlendxYZW
==============
*/
void Float4BlendxYZW(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vblendps xmm0, xmm0, xmm1, 1
    vmovups xmmword ptr [r8], xmm0
  }
}

/*
==============
Float4BlendxYzW
==============
*/
void Float4BlendxYzW(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vblendps xmm0, xmm0, xmm1, 5
    vmovups xmmword ptr [r8], xmm0
  }
}

/*
==============
Float4BlendxyZW
==============
*/
void Float4BlendxyZW(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vblendps xmm0, xmm0, xmm1, 3
    vmovups xmmword ptr [r8], xmm0
  }
}

/*
==============
Float4QuatRotationAxis
==============
*/
void Float4QuatRotationAxis(const float4 *result, const float4 *a2, float4 *a3)
{
  float4 v20; 
  float4 v21; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmulps  xmm2, xmm0, xmm0
    vinsertps xmm3, xmm2, xmm2, 8
  }
  _RBX = a3;
  __asm
  {
    vmovups xmm7, xmm0
    vmulps  xmm0, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vhaddps xmm6, xmm3, xmm3
  }
  Float4SinCos(result, &v20, &v21);
  __asm
  {
    vhaddps xmm0, xmm6, xmm6
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm3, xmm2, [rsp+78h+var_58]
    vblendps xmm0, xmm3, [rsp+78h+var_48], 8
    vmovups xmmword ptr [rbx], xmm0
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
Float4QuatTransform
==============
*/
void Float4QuatTransform(const float4 *outResult, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm1, xmm1, 0D2h ; 'Ò'
    vshufps xmm2, xmm1, xmm1, 0C9h ; 'É'
    vmulps  xmm4, xmm0, xmm6
    vmulps  xmm3, xmm2, xmm7
    vsubps  xmm0, xmm4, xmm3
    vaddps  xmm2, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm2
    vaddps  xmm4, xmm0, xmm1
    vshufps xmm1, xmm2, xmm2, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vshufps xmm0, xmm2, xmm2, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm4
    vmovups xmmword ptr [r8], xmm3
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
  }
}

/*
==============
FloatPackFloat16HQ
==============
*/

__int64 __fastcall FloatPackFloat16HQ(double v)
{
  unsigned int v1; 
  unsigned int v2; 
  int v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 

  __asm
  {
    vmovss  [rsp+arg_0], xmm0
    vmovss  [rsp+38h+arg_8], xmm0
  }
  if ( (v8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 959, ASSERT_TYPE_SANITY, "( !IS_NAN( v ) )", (const char *)&queryFormat, "!IS_NAN( v )") )
    __debugbreak();
  v1 = v7 & 0x7FFFFFFF;
  v2 = HIWORD(v7) & 0x8000;
  if ( (v7 & 0x7FFFFFFF) < 0x33000000 )
    return v2;
  if ( v1 >= 0x477FD000 )
  {
    v2 |= 0x7BFFu;
    return v2;
  }
  v4 = 0;
  v5 = v1 >> 23;
  v6 = v7 & 0x7FFFFF;
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
  unsigned int v8; 
  int v9; 

  v1 = packedInt >> 10;
  v2 = (packedInt & 0xFFFF8000) << 16;
  v3 = packedInt & 0x3FF;
  v4 = v1 & 0x1F;
  if ( v4 )
  {
    v9 = v2 | (v3 << 13) | ((v4 + 112) << 23);
    __asm { vmovss  xmm0, [rsp+arg_0] }
  }
  else
  {
    v8 = v3 + (v2 | 0x3F000000);
    __asm
    {
      vmovss  xmm0, [rsp+arg_0]
      vsubss  xmm0, xmm0, [rsp+arg_8]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
Float4Clamp
==============
*/
char Float4Clamp(float4 *result, const float4 *a2, const float4 *a3, const float4 *a4)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovups xmm6, xmm2
    vmovups xmm7, xmm1
    vcmpltps xmm3, xmm6, xmm7
    vmovmskps eax, xmm3
    vmovups xmm8, xmm0
  }
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
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return _EAX;
}

/*
==============
Float4x4RotationAroundUnitAxis
==============
*/

vector4 *__fastcall Float4x4RotationAroundUnitAxis(vector4 *result, const float4 *axis, double radians)
{
  vector4 *v79; 
  int v85; 
  float v86[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = axis;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RDI = result;
  __asm
  {
    vmovaps xmm0, xmm2; radians
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  FastSinCos(*(const float *)&_XMM0, v86, (float *)&v85);
  __asm
  {
    vmovups xmm10, xmmword ptr [rbx]
    vmovss  xmm7, [rsp+88h+var_64]
    vmovss  xmm8, [rsp+88h+var_68]
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm9, xmm0, xmm8
    vshufps xmm0, xmm10, xmm10, 0AAh ; 'ª'
    vmulss  xmm0, xmm0, xmm10
    vmulss  xmm2, xmm0, xmm9
    vshufps xmm1, xmm10, xmm10, 55h ; 'U'
    vmulss  xmm0, xmm1, xmm7
    vaddss  xmm5, xmm2, xmm0
    vshufps xmm2, xmm10, xmm10, 55h ; 'U'
    vmulss  xmm0, xmm2, xmm10
    vmulss  xmm3, xmm0, xmm9
    vshufps xmm1, xmm10, xmm10, 0AAh ; 'ª'
    vmulss  xmm0, xmm1, xmm7
    vsubss  xmm4, xmm3, xmm0
    vxorps  xmm3, xmm3, xmm3
    vmulss  xmm0, xmm10, xmm10
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm2, xmm1, xmm8
    vinsertps xmm3, xmm3, xmm2, 0
    vinsertps xmm3, xmm3, xmm4, 10h
    vinsertps xmm3, xmm3, xmm5, 20h ; ' '
    vmovups xmmword ptr [rdi], xmm3
    vxorps  xmm4, xmm4, xmm4
    vshufps xmm1, xmm10, xmm10, 0AAh ; 'ª'
    vshufps xmm3, xmm10, xmm10, 55h ; 'U'
    vshufps xmm0, xmm10, xmm10, 55h ; 'U'
    vmulss  xmm0, xmm1, xmm0
    vmulss  xmm2, xmm0, xmm9
    vmulss  xmm1, xmm10, xmm7
    vsubss  xmm6, xmm2, xmm1
    vshufps xmm2, xmm10, xmm10, 55h ; 'U'
    vshufps xmm0, xmm10, xmm10, 55h ; 'U'
    vmulss  xmm0, xmm3, xmm0
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm5, xmm1, xmm8
    vmulss  xmm0, xmm2, xmm10
    vmulss  xmm3, xmm0, xmm9
    vshufps xmm1, xmm10, xmm10, 0AAh ; 'ª'
    vmulss  xmm0, xmm1, xmm7
    vaddss  xmm2, xmm3, xmm0
    vinsertps xmm4, xmm4, xmm2, 0
    vinsertps xmm4, xmm4, xmm5, 10h
    vxorps  xmm3, xmm3, xmm3
    vshufps xmm1, xmm10, xmm10, 0AAh ; 'ª'
    vshufps xmm2, xmm10, xmm10, 0AAh ; 'ª'
    vinsertps xmm4, xmm4, xmm6, 20h ; ' '
    vshufps xmm0, xmm10, xmm10, 0AAh ; 'ª'
    vmulss  xmm0, xmm1, xmm0
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm5, xmm1, xmm8
    vmulss  xmm1, xmm10, xmm7
    vshufps xmm0, xmm10, xmm10, 55h ; 'U'
    vmulss  xmm0, xmm2, xmm0
    vmulss  xmm2, xmm0, xmm9
    vshufps xmm0, xmm10, xmm10, 0AAh ; 'ª'
    vmulss  xmm0, xmm0, xmm10
    vmovups xmmword ptr [rdi+10h], xmm4
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm9
    vshufps xmm1, xmm10, xmm10, 55h ; 'U'
    vmulss  xmm0, xmm1, xmm7
    vsubss  xmm2, xmm2, xmm0
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vinsertps xmm3, xmm3, xmm2, 0
    vinsertps xmm3, xmm3, xmm4, 10h
    vinsertps xmm3, xmm3, xmm5, 20h ; ' '
    vmovups xmmword ptr [rdi+20h], xmm3
  }
  v79 = _RDI;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
    vmovups xmmword ptr [rdi+30h], xmm0
  }
  return v79;
}

