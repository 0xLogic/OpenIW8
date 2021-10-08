/*
==============
FloatPack10F
==============
*/

unsigned int __fastcall FloatPack10F(float v)
{
  return ?FloatPack10F@@YAIM@Z(v);
}

/*
==============
Vec3UnpackUnitVec
==============
*/

void __fastcall Vec3UnpackUnitVec(const PackedUnitVec in, vec3_t *out)
{
  ?Vec3UnpackUnitVec@@YAXUPackedUnitVec@@AEATvec3_t@@@Z(in, out);
}

/*
==============
Vec2UnpackTexCoords
==============
*/

void __fastcall Vec2UnpackTexCoords(const PackedTexCoords in, vec2_t *out)
{
  ?Vec2UnpackTexCoords@@YAXUPackedTexCoords@@AEATvec2_t@@@Z(in, out);
}

/*
==============
FloatPack11FHQ
==============
*/

unsigned int __fastcall FloatPack11FHQ(float v)
{
  return ?FloatPack11FHQ@@YAIM@Z(v);
}

/*
==============
Vec3PackR11G11B10F
==============
*/

unsigned int __fastcall Vec3PackR11G11B10F(const vec3_t *vec)
{
  return ?Vec3PackR11G11B10F@@YAIAEBTvec3_t@@@Z(vec);
}

/*
==============
Vec4UnpackUnitVecFromUint2
==============
*/

void __fastcall Vec4UnpackUnitVecFromUint2(const base_vec2_t<unsigned int> in, vec4_t *out)
{
  ?Vec4UnpackUnitVecFromUint2@@YAXT?$base_vec2_t@I@@AEATvec4_t@@@Z(in, out);
}

/*
==============
Vec2UnpackLmapCoords
==============
*/

vec2_t __fastcall Vec2UnpackLmapCoords(const PackedLmapCoords *in)
{
  return ?Vec2UnpackLmapCoords@@YA?ATvec2_t@@AEBUPackedLmapCoords@@@Z(in);
}

/*
==============
Vec4PackNormalTransform
==============
*/

PackedNormalTransform __fastcall Vec4PackNormalTransform(const vec4_t *in)
{
  return ?Vec4PackNormalTransform@@YA?AUPackedNormalTransform@@AEBTvec4_t@@@Z(in);
}

/*
==============
Vec2PackLmapCoords
==============
*/

PackedLmapCoords __fastcall Vec2PackLmapCoords(const vec2_t *in)
{
  return ?Vec2PackLmapCoords@@YA?AUPackedLmapCoords@@AEBTvec2_t@@@Z(in);
}

/*
==============
Vec3UnpackUnitVecWithAlpha
==============
*/

void __fastcall Vec3UnpackUnitVecWithAlpha(const PackedUnitVec in, vec3_t *out, float *alpha)
{
  ?Vec3UnpackUnitVecWithAlpha@@YAXUPackedUnitVec@@AEATvec3_t@@PEAM@Z(in, out, alpha);
}

/*
==============
Vec3PackNormAxis
==============
*/

void __fastcall Vec3PackNormAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *result)
{
  ?Vec3PackNormAxis@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(axis, result);
}

/*
==============
PackBounds
==============
*/

PackedBounds *__fastcall PackBounds(PackedBounds *result, const Bounds *in)
{
  return ?PackBounds@@YA?ATPackedBounds@@AEBUBounds@@@Z(result, in);
}

/*
==============
Vec2PackTexCoords
==============
*/

PackedTexCoords __fastcall Vec2PackTexCoords(const vec2_t *in)
{
  return ?Vec2PackTexCoords@@YA?AUPackedTexCoords@@AEBTvec2_t@@@Z(in);
}

/*
==============
Vec4PackUnisgnedUnitVecToUint2
==============
*/

base_vec2_t<unsigned int> __fastcall Vec4PackUnisgnedUnitVecToUint2(const vec4_t *unitVec)
{
  return ?Vec4PackUnisgnedUnitVecToUint2@@YA?AT?$base_vec2_t@I@@AEBTvec4_t@@@Z(unitVec);
}

/*
==============
FloatUnpack10FHQ
==============
*/

double __fastcall FloatUnpack10FHQ(const unsigned int packedInt)
{
  double result; 

  *(float *)&result = ?FloatUnpack10FHQ@@YAMI@Z(packedInt);
  return result;
}

/*
==============
UnpackBounds
==============
*/

Bounds *__fastcall UnpackBounds(Bounds *result, const PackedBounds *in)
{
  return ?UnpackBounds@@YA?AUBounds@@AEBTPackedBounds@@@Z(result, in);
}

/*
==============
FloatUnpack11FHQ
==============
*/

double __fastcall FloatUnpack11FHQ(const unsigned int packedInt)
{
  double result; 

  *(float *)&result = ?FloatUnpack11FHQ@@YAMI@Z(packedInt);
  return result;
}

/*
==============
FloatUnpack10F
==============
*/

double __fastcall FloatUnpack10F(const unsigned int packedInt)
{
  double result; 

  *(float *)&result = ?FloatUnpack10F@@YAMI@Z(packedInt);
  return result;
}

/*
==============
FloatUnpack11F
==============
*/

double __fastcall FloatUnpack11F(const unsigned int packedInt)
{
  double result; 

  *(float *)&result = ?FloatUnpack11F@@YAMI@Z(packedInt);
  return result;
}

/*
==============
FloatPack10FHQ
==============
*/

unsigned int __fastcall FloatPack10FHQ(float v)
{
  return ?FloatPack10FHQ@@YAIM@Z(v);
}

/*
==============
Vec4PackUnitVecToUint2
==============
*/

base_vec2_t<unsigned int> __fastcall Vec4PackUnitVecToUint2(const vec4_t *unitVec)
{
  return ?Vec4PackUnitVecToUint2@@YA?AT?$base_vec2_t@I@@AEBTvec4_t@@@Z(unitVec);
}

/*
==============
Vec4UnpackUnisgnedUnitVecFromUint2
==============
*/

void __fastcall Vec4UnpackUnisgnedUnitVecFromUint2(const base_vec2_t<unsigned int> in, vec4_t *out)
{
  ?Vec4UnpackUnisgnedUnitVecFromUint2@@YAXT?$base_vec2_t@I@@AEATvec4_t@@@Z(in, out);
}

/*
==============
Vec3PackR9G9B9E5SharedExp
==============
*/

unsigned int __fastcall Vec3PackR9G9B9E5SharedExp(const vec3_t *vec)
{
  return ?Vec3PackR9G9B9E5SharedExp@@YAIAEBTvec3_t@@@Z(vec);
}

/*
==============
UnpackUnitVecAlpha
==============
*/

double __fastcall UnpackUnitVecAlpha(PackedUnitVec in)
{
  double result; 

  *(float *)&result = ?UnpackUnitVecAlpha@@YAMUPackedUnitVec@@@Z(in);
  return result;
}

/*
==============
Vec4UnpackNormalTransform
==============
*/

void __fastcall Vec4UnpackNormalTransform(const PackedNormalTransform in, vec4_t *out)
{
  ?Vec4UnpackNormalTransform@@YAXUPackedNormalTransform@@AEATvec4_t@@@Z(in, out);
}

/*
==============
Vec3UnpackR9G9B9E5SharedExp
==============
*/

void __fastcall Vec3UnpackR9G9B9E5SharedExp(const unsigned int in, vec3_t *out)
{
  ?Vec3UnpackR9G9B9E5SharedExp@@YAXIAEATvec3_t@@@Z(in, out);
}

/*
==============
Vec3UnpackR11G11B10F
==============
*/

void __fastcall Vec3UnpackR11G11B10F(const unsigned int rgb, vec3_t *vec)
{
  ?Vec3UnpackR11G11B10F@@YAXIAEATvec3_t@@@Z(rgb, vec);
}

/*
==============
Vec3PackUnitVec
==============
*/

PackedUnitVec __fastcall Vec3PackUnitVec(const vec3_t *unitVec)
{
  return ?Vec3PackUnitVec@@YA?AUPackedUnitVec@@AEBTvec3_t@@@Z(unitVec);
}

/*
==============
FloatPack11F
==============
*/

unsigned int __fastcall FloatPack11F(float v)
{
  return ?FloatPack11F@@YAIM@Z(v);
}

/*
==============
Vec3PackUnitVecWithAlpha
==============
*/

PackedUnitVec __fastcall Vec3PackUnitVecWithAlpha(const vec3_t *unitVec, float alpha)
{
  return ?Vec3PackUnitVecWithAlpha@@YA?AUPackedUnitVec@@AEBTvec3_t@@M@Z(unitVec, alpha);
}

/*
==============
FloatPack10F
==============
*/

__int64 __fastcall FloatPack10F(double v, double _XMM1_8)
{
  char v2; 
  int v4; 
  int v6; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  [rsp+arg_0], xmm0
  }
  if ( v2 )
    return 0i64;
  v4 = (v6 >> 23) - 112;
  if ( v4 > 30 )
    return 991i64;
  if ( v4 < 1 )
    return 0i64;
  else
    return (v6 >> 18) & 0x1F | (unsigned int)(32 * v4);
}

/*
==============
FloatPack10FHQ
==============
*/

__int64 __fastcall FloatPack10FHQ(double v)
{
  char v1; 
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 

  __asm { vcomiss xmm0, cs:__real@35800000 }
  if ( v1 )
    return 0i64;
  __asm { vcomiss xmm0, cs:__real@477a0000 }
  if ( !v1 )
    return 991i64;
  __asm { vmovss  [rsp+arg_0], xmm0 }
  v3 = v6 & 0x7FFFFF;
  v4 = v6 >> 23;
  if ( v6 >> 23 >= 0x71 )
    v5 = v3 | ((v4 - 112) << 23);
  else
    v5 = (v3 | 0x800000u) >> (113 - v4);
  return (v5 + 0x20000) >> 18;
}

/*
==============
FloatPack11F
==============
*/

__int64 __fastcall FloatPack11F(double v, double _XMM1_8)
{
  char v2; 
  int v4; 
  int v6; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  [rsp+arg_0], xmm0
  }
  if ( v2 )
    return 0i64;
  v4 = (v6 >> 23) - 112;
  if ( v4 > 30 )
    return 1983i64;
  if ( v4 < 1 )
    return 0i64;
  else
    return (v6 >> 17) & 0x3F | (unsigned int)(v4 << 6);
}

/*
==============
FloatPack11FHQ
==============
*/

__int64 __fastcall FloatPack11FHQ(double v)
{
  char v1; 
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 

  __asm { vcomiss xmm0, cs:__real@35000000 }
  if ( v1 )
    return 0i64;
  __asm { vcomiss xmm0, cs:__real@477d0000 }
  if ( !v1 )
    return 1983i64;
  __asm { vmovss  [rsp+arg_0], xmm0 }
  v3 = v6 & 0x7FFFFF;
  v4 = v6 >> 23;
  if ( v6 >> 23 >= 0x71 )
    v5 = v3 | ((v4 - 112) << 23);
  else
    v5 = (v3 | 0x800000u) >> (113 - v4);
  return (v5 + 0x10000) >> 17;
}

/*
==============
FloatUnpack10F
==============
*/
float FloatUnpack10F(const unsigned int packedInt)
{
  unsigned int v5; 

  if ( (packedInt & 0xFFFFFC00) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 607, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFFC00UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFFC00UL )") )
    __debugbreak();
  if ( packedInt >> 5 )
  {
    v5 = ((packedInt & 0x1F) << 18) | (((packedInt >> 5) + 112) << 23);
    __asm { vmovss  xmm0, [rsp+38h+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
FloatUnpack10FHQ
==============
*/
float FloatUnpack10FHQ(const unsigned int packedInt)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v8; 
  int v9; 

  if ( (packedInt & 0xFFFFFC00) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 441, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFFC00UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFFC00UL )") )
    __debugbreak();
  v2 = packedInt;
  v3 = packedInt & 0x1F;
  v4 = v2 >> 5;
  if ( v4 )
  {
    v9 = (v3 << 18) | ((v4 + 112) << 23);
    __asm { vmovss  xmm0, [rsp+38h+arg_0] }
  }
  else
  {
    v8 = v3 + 1098907648;
    __asm
    {
      vmovss  xmm0, [rsp+38h+arg_0]
      vsubss  xmm0, xmm0, cs:__real@41800000
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
FloatUnpack11F
==============
*/
float FloatUnpack11F(const unsigned int packedInt)
{
  unsigned int v5; 

  if ( (packedInt & 0xFFFFF800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 627, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFF800UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFF800UL )") )
    __debugbreak();
  if ( packedInt >> 6 )
  {
    v5 = ((packedInt & 0x3F) << 17) | (((packedInt >> 6) + 112) << 23);
    __asm { vmovss  xmm0, [rsp+38h+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
FloatUnpack11FHQ
==============
*/
float FloatUnpack11FHQ(const unsigned int packedInt)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v8; 
  int v9; 

  if ( (packedInt & 0xFFFFF800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 412, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFF800UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFF800UL )") )
    __debugbreak();
  v2 = packedInt;
  v3 = packedInt & 0x3F;
  v4 = v2 >> 6;
  if ( v4 )
  {
    v9 = (v3 << 17) | ((v4 + 112) << 23);
    __asm { vmovss  xmm0, [rsp+38h+arg_0] }
  }
  else
  {
    v8 = v3 + 1090519040;
    __asm
    {
      vmovss  xmm0, [rsp+38h+arg_0]
      vsubss  xmm0, xmm0, cs:__real@41000000
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
PackBounds
==============
*/
PackedBounds *PackBounds(PackedBounds *result, const Bounds *in)
{
  unsigned int v7; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, dword ptr [rdx], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+4], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+arg_0], xmm0
  }
  v7 = v17;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, dword ptr [rdx+8], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+0Ch], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+arg_0], xmm0
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, dword ptr [rdx+10h], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+14h], 10h
  }
  result->packed[0] = v7;
  result->packed[1] = v18;
  __asm
  {
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+arg_0], xmm0
  }
  result->packed[2] = v19;
  return result;
}

/*
==============
UnpackBounds
==============
*/

Bounds *__fastcall UnpackBounds(Bounds *result, const PackedBounds *in, double _XMM2_8)
{
  unsigned int v8; 
  unsigned int v10; 
  int v11; 
  unsigned int v13; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 

  _R8 = result;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( (unsigned __int16)in->packed[0] )
  {
    v17 = ((in->packed[0] & 0x8000) << 16) | (((((in->packed[0] & 0x3FFF) << 14) - (~((unsigned __int16)in->packed[0] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm2, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  v8 = HIWORD(in->packed[0]);
  if ( v8 )
  {
    v18 = ((v8 & 0xFFFF8000) << 16) | (((((v8 & 0x3FFF) << 14) - (~(v8 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm1, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  v10 = in->packed[1];
  v11 = (unsigned __int16)v10;
  __asm
  {
    vmovss  dword ptr [r8], xmm2
    vmovss  dword ptr [r8+4], xmm1
  }
  if ( (_WORD)v10 )
  {
    v19 = ((v10 & 0x8000) << 16) | (((((v10 & 0x3FFF) << 14) - (~((unsigned __int16)v10 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm2, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  v13 = HIWORD(v10);
  if ( v13 )
  {
    v20 = ((v13 & 0xFFFF8000) << 16) | (((((v13 & 0x3FFF) << 14) - (~(v13 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm1, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm
  {
    vmovss  dword ptr [r8+8], xmm2
    vmovss  dword ptr [r8+0Ch], xmm1
  }
  if ( v11 )
  {
    v21 = ((v11 & 0xFFFF8000) << 16) | (((((v11 & 0x3FFF) << 14) - (~(v11 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm1, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  if ( v13 )
  {
    v22 = ((v13 & 0xFFFF8000) << 16) | (((((v13 & 0x3FFF) << 14) - (~(v13 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+arg_0] }
  }
  __asm
  {
    vmovss  dword ptr [r8+10h], xmm1
    vmovss  dword ptr [r8+14h], xmm0
  }
  return result;
}

/*
==============
UnpackUnitVecAlpha
==============
*/
float UnpackUnitVecAlpha(PackedUnitVec in)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, cs:__real@3eaaaaab
  }
  return *(float *)&_XMM0;
}

/*
==============
Vec2PackLmapCoords
==============
*/

__int64 __fastcall Vec2PackLmapCoords(const vec2_t *in, double _XMM1_8, __int64 a3, double _XMM3_8)
{
  int v28; 
  __int64 result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]; val
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+4]
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm2, xmm7; max
    vmovaps [rsp+68h+var_38], xmm8
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps [rsp+68h+var_48], xmm9
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm9, cs:__real@477fff00
    vmovss  xmm8, cs:__real@3f000000
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm2, xmm1, xmm8
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm6; val
    vcvttss2si rdi, xmm3
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm2, xmm1, xmm8
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si rcx, xmm3; val
  }
  v28 = truncate_cast<unsigned short,unsigned int>(_RCX) << 16;
  __asm
  {
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm0, xmm0, xmm0; val
  }
  LODWORD(_RDI) = v28 | truncate_cast<unsigned short,unsigned int>(_RDI);
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vxorps  xmm0, xmm0, xmm0; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm2, xmm1, xmm8
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vmulss  xmm0, xmm6, xmm9
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm1, xmm0, xmm8
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si rcx, xmm2; val
    vcvttss2si rbx, xmm3
  }
  truncate_cast<unsigned short,unsigned int>(_RCX);
  truncate_cast<unsigned short,unsigned int>(_RBX);
  result = (unsigned int)_RDI;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
  return result;
}

/*
==============
Vec2PackTexCoords
==============
*/
__int64 Vec2PackTexCoords(const vec2_t *in)
{
  unsigned int v7; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, dword ptr [rcx], 0
    vinsertps xmm0, xmm0, dword ptr [rcx+4], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+arg_0], xmm0
  }
  return v7;
}

/*
==============
Vec2UnpackLmapCoords
==============
*/

vec2_t __fastcall Vec2UnpackLmapCoords(const PackedLmapCoords *in, double _XMM1_8, __int64 a3, double _XMM3_8)
{
  vec2_t result; 
  vec2_t v38; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovss  xmm9, cs:__real@37800080
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm9; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovaps xmm7, xmm0
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm9; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm8; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm3, xmm9; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vmulss  xmm0, xmm3, xmm9; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+78h+var_58], xmm7
    vmovss  dword ptr [rsp+78h+var_58+4], xmm6
  }
  result = v38;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
  return result;
}

/*
==============
Vec2UnpackTexCoords
==============
*/

void __fastcall Vec2UnpackTexCoords(const PackedTexCoords in, vec2_t *out)
{
  Float4UnpackFloat16_2(in.packed, out);
}

/*
==============
Vec3PackNormAxis
==============
*/
void Vec3PackNormAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *result)
{
  *result = *axis;
}

/*
==============
Vec3PackR11G11B10F
==============
*/
__int64 Vec3PackR11G11B10F(const vec3_t *vec)
{
  unsigned int v3; 
  unsigned int v5; 
  char v6; 
  unsigned int v7; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v14; 

  __asm { vmovss  xmm0, dword ptr [rcx]; v }
  _RBX = vec;
  v3 = FloatPack11FHQ(*(float *)&_XMM0);
  __asm { vmovss  xmm0, dword ptr [rbx+4]; v }
  v5 = v3;
  v7 = FloatPack11FHQ(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, cs:__real@35800000
  }
  if ( v6 )
  {
    v9 = 0;
  }
  else
  {
    __asm { vcomiss xmm0, cs:__real@477a0000 }
    if ( v6 )
    {
      __asm { vmovss  [rsp+28h+arg_0], xmm0 }
      v10 = 0;
      v11 = v14 & 0x7FFFFF;
      v12 = v14 >> 23;
      if ( v14 >> 23 >= 0x71 )
        v10 = v12 - 112;
      else
        v11 = (v11 | 0x800000) >> (113 - v12);
      v9 = ((v11 | (v10 << 23)) + 0x20000) >> 18;
    }
    else
    {
      v9 = 991;
    }
  }
  return v5 | ((v7 | (v9 << 11)) << 11);
}

/*
==============
Vec3PackR9G9B9E5SharedExp
==============
*/

__int64 __fastcall Vec3PackR9G9B9E5SharedExp(const vec3_t *vec, double _XMM1_8)
{
  char v18; 
  __int64 result; 
  int v22; 
  int v23; 
  int v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  int v28; 
  unsigned int v29; 
  int v30; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 

  __asm
  {
    vmovss  xmm2, cs:__real@477f8000; max
    vmovss  xmm0, dword ptr [rcx]; val
    vmovaps [rsp+48h+var_18], xmm7
  }
  _RBX = vec;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps [rsp+48h+var_28], xmm8
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@477f8000; max
    vmovaps xmm7, xmm0
    vmovss  xmm0, dword ptr [rbx+4]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@477f8000; max
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [rbx+8]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmaxss  xmm1, xmm8, xmm7
    vmaxss  xmm2, xmm1, xmm0
    vcomiss xmm2, cs:__real@33000000
  }
  if ( v18 )
  {
    result = 0i64;
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_18]
      vmovaps xmm8, [rsp+48h+var_28]
    }
  }
  else
  {
    __asm { vmovss  [rsp+48h+arg_0], xmm2 }
    v22 = (unsigned __int8)((unsigned int)(v35 + 0x4000) >> 23) - 126;
    __asm { vmovss  [rsp+48h+arg_0], xmm8 }
    if ( v22 < -15 )
      v22 = -15;
    v23 = v36 & 0x7FFFFF;
    v24 = (unsigned __int8)(v36 >> 23);
    __asm
    {
      vmovss  [rsp+48h+arg_0], xmm0
      vmovss  [rsp+48h+arg_8], xmm7
    }
    v25 = 0;
    v26 = v22 - (unsigned __int8)(v38 >> 23) + 126;
    if ( v26 < 31 )
      v27 = (((v38 & 0x7FFFFF | 0x800000u) >> v26) + 0x4000) >> 15;
    else
      v27 = 0;
    v28 = v22 - v24 + 126;
    if ( v28 < 31 )
      v29 = (((v23 | 0x800000u) >> v28) + 0x4000) >> 15;
    else
      v29 = 0;
    v30 = v22 - (unsigned __int8)(v37 >> 23) + 126;
    if ( v30 < 31 )
      v25 = (((v37 & 0x7FFFFF | 0x800000u) >> v30) + 0x4000) >> 15;
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_18]
      vmovaps xmm8, [rsp+48h+var_28]
    }
    return v27 | ((v22 + 15) << 27) | ((v29 | (v25 << 9)) << 9);
  }
  return result;
}

/*
==============
Vec3PackUnitVec
==============
*/

__int64 __fastcall Vec3PackUnitVec(const vec3_t *unitVec, __int64 a2, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf800000; min
    vmovss  xmm0, dword ptr [rcx]; val
    vmovaps [rsp+48h+var_18], xmm8
  }
  _RBX = unitVec;
  __asm { vmovaps [rsp+48h+var_28], xmm9 }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm9, xmm0
    vmovss  xmm0, dword ptr [rbx+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [rbx+8]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm5, cs:__real@43ffc000
    vmovss  xmm4, cs:__real@44000000
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm0, xmm8, xmm5
    vmovaps xmm8, [rsp+48h+var_18]
    vaddss  xmm1, xmm0, xmm4
    vmulss  xmm0, xmm9, xmm5
    vmovaps xmm9, [rsp+48h+var_28]
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si rcx, xmm2
    vcvttss2si rax, xmm3
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm1, xmm0, xmm4
    vroundss xmm2, xmm2, xmm1, 1
  }
  LODWORD(_RAX) = ((unsigned int)_RCX | (((unsigned int)_RAX | 0xFFFFFC00) << 10)) << 10;
  __asm { vcvttss2si rcx, xmm2 }
  return (unsigned int)_RCX | (unsigned int)_RAX;
}

/*
==============
Vec3PackUnitVecWithAlpha
==============
*/

__int64 __fastcall Vec3PackUnitVecWithAlpha(const vec3_t *unitVec, double alpha, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm0, dword ptr [rcx]; val
    vmovaps [rsp+58h+var_18], xmm8
  }
  _RBX = unitVec;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm9
    vmovaps xmm9, xmm1
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps [rsp+58h+var_38], xmm10
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm10, xmm0
    vmovss  xmm0, dword ptr [rbx+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [rbx+8]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm5, cs:__real@43ffc000
    vmovss  xmm4, cs:__real@44000000
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm9, cs:__real@40400000
    vmovaps xmm9, [rsp+58h+var_28]
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vroundss xmm0, xmm0, xmm2, 1
    vcvttss2si rax, xmm0
    vmulss  xmm0, xmm8, xmm5
    vmovaps xmm8, [rsp+58h+var_18]
    vaddss  xmm1, xmm0, xmm4
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si rcx, xmm2
    vmulss  xmm0, xmm10, xmm5
    vmovaps xmm10, [rsp+58h+var_38]
    vcvttss2si rdx, xmm3
  }
  LODWORD(_RAX) = _RCX | (((unsigned int)_RDX | ((_DWORD)_RAX << 10)) << 10);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm1, xmm0, xmm4
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si rcx, xmm2
  }
  return (unsigned int)_RCX | ((_DWORD)_RAX << 10);
}

/*
==============
Vec3UnpackR11G11B10F
==============
*/
void Vec3UnpackR11G11B10F(const unsigned int rgb, vec3_t *vec)
{
  unsigned int v4; 
  unsigned int v6; 
  int v7; 
  unsigned int v8; 
  int v12; 
  int v13; 

  v4 = rgb >> 22;
  _RSI = vec;
  *(double *)&_XMM0 = FloatUnpack11FHQ(rgb & 0x7FF);
  __asm { vmovss  dword ptr [rsi], xmm0 }
  *(double *)&_XMM0 = FloatUnpack11FHQ((rgb >> 11) & 0x7FF);
  v6 = v4;
  v7 = v4 & 0x1F;
  v8 = v6 >> 5;
  __asm { vmovss  dword ptr [rsi+4], xmm0 }
  if ( v8 )
  {
    v13 = (v7 << 18) | ((v8 + 112) << 23);
    __asm
    {
      vmovss  xmm0, [rsp+28h+arg_0]
      vmovss  dword ptr [rsi+8], xmm0
    }
  }
  else
  {
    v12 = v7 + 1098907648;
    __asm
    {
      vmovss  xmm0, [rsp+28h+arg_0]
      vsubss  xmm1, xmm0, cs:__real@41800000
      vmovss  dword ptr [rsi+8], xmm1
    }
  }
}

/*
==============
Vec3UnpackR9G9B9E5SharedExp
==============
*/
void Vec3UnpackR9G9B9E5SharedExp(const unsigned int in, vec3_t *out)
{
  _RDI = out;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vsubss  xmm1, xmm0, cs:__real@41c00000; Y
    vmovss  xmm0, cs:__real@40000000; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm2, xmm1, xmm0
    vmovaps xmm3, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  dword ptr [rdi], xmm2
    vmulss  xmm2, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdi+8], xmm1
    vmovss  dword ptr [rdi+4], xmm2
  }
}

/*
==============
Vec3UnpackUnitVec
==============
*/
void Vec3UnpackUnitVec(const PackedUnitVec in, vec3_t *out)
{
  unsigned int packed; 

  packed = in.packed;
  __asm
  {
    vbroadcastss xmm0, [rsp+18h+var_18]
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm2, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vmovss  dword ptr [rdx], xmm2
    vextractps dword ptr [rdx+4], xmm2, 1
    vextractps dword ptr [rdx+8], xmm2, 2
  }
}

/*
==============
Vec3UnpackUnitVecWithAlpha
==============
*/
void Vec3UnpackUnitVecWithAlpha(const PackedUnitVec in, vec3_t *out, float *alpha)
{
  __asm
  {
    vmovss  xmm5, cs:__real@40000000
    vmovss  xmm4, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3a802008
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rdx], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3a802008
    vmulss  xmm2, xmm1, xmm5
    vxorps  xmm0, xmm0, xmm0
    vsubss  xmm3, xmm2, xmm4
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3a802008
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdx+4], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3eaaaaab
    vsubss  xmm3, xmm2, xmm4
    vmovss  dword ptr [rdx+8], xmm3
    vmovss  dword ptr [r8], xmm1
  }
}

/*
==============
Vec4PackNormalTransform
==============
*/

__int64 __fastcall Vec4PackNormalTransform(const vec4_t *in, __int64 a2, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm5, cs:__real@42ff0000
    vmulss  xmm1, xmm5, dword ptr [rcx+8]
    vmovss  xmm4, cs:__real@43000000
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm5, dword ptr [rcx+0Ch]
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm5, dword ptr [r8+4]
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si rcx, xmm3
    vxorps  xmm3, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm5, dword ptr [r8]
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si rax, xmm0
  }
  LODWORD(_RAX) = ((_DWORD)_RCX << 8) | (unsigned __int8)_RAX;
  __asm { vcvttss2si rcx, xmm3 }
  LODWORD(_RAX) = (unsigned __int8)_RCX | ((_DWORD)_RAX << 8);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm4
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si rcx, xmm3
  }
  return (unsigned int)(unsigned __int8)_RCX | ((_DWORD)_RAX << 8);
}

/*
==============
Vec4PackUnisgnedUnitVecToUint2
==============
*/

base_vec2_t<unsigned int> __fastcall Vec4PackUnisgnedUnitVecToUint2(const vec4_t *unitVec, double _XMM1_8, __int64 a3, double _XMM3_8)
{
  int v28; 
  unsigned __int16 v29; 
  int v47; 
  base_vec2_t<unsigned int> result; 
  base_vec2_t<unsigned int> v54; 
  char v59; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rcx]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  _RSI = unitVec;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm9, cs:__real@477fff00
    vmovss  xmm8, cs:__real@3f000000
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm2, xmm1, xmm8
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vcvttss2si rdi, xmm0
    vmovss  xmm0, dword ptr [rsi+4]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm2, xmm1, xmm8
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si rcx, xmm3; val
  }
  v28 = truncate_cast<unsigned short,unsigned int>(_RCX) << 16;
  v29 = truncate_cast<unsigned short,unsigned int>(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  v54.v[0] = v28 | v29;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr [rsi+0Ch]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm2, xmm1, xmm8
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vmulss  xmm0, xmm6, xmm9
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm1, xmm0, xmm8
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si rcx, xmm2; val
    vcvttss2si rdi, xmm3
  }
  v47 = truncate_cast<unsigned short,unsigned int>(_RCX);
  v54.v[1] = v47 | (truncate_cast<unsigned short,unsigned int>(_RDI) << 16);
  result = v54;
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
Vec4PackUnitVecToUint2
==============
*/

base_vec2_t<unsigned int> __fastcall Vec4PackUnitVecToUint2(const vec4_t *unitVec, __int64 a2, __int64 a3, double _XMM3_8)
{
  int v31; 
  unsigned __int16 v32; 
  int v50; 
  base_vec2_t<unsigned int> result; 
  base_vec2_t<unsigned int> v58; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm7, cs:__real@bf800000
    vmovss  xmm0, dword ptr [rcx]; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm7; min
  }
  _RSI = unitVec;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm10, cs:__real@46ffff00
    vmovss  xmm9, cs:__real@47000000
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, xmm9
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vcvttss2si rdi, xmm0
    vmovss  xmm0, dword ptr [rsi+4]; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, xmm9
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si rcx, xmm3; val
  }
  v31 = truncate_cast<unsigned short,unsigned int>(_RCX) << 16;
  v32 = truncate_cast<unsigned short,unsigned int>(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm7; min
  }
  v58.v[0] = v31 | v32;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr [rsi+0Ch]; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, xmm9
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vmulss  xmm0, xmm6, xmm10
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm1, xmm0, xmm9
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si rcx, xmm2; val
    vcvttss2si rdi, xmm3
  }
  v50 = truncate_cast<unsigned short,unsigned int>(_RCX);
  v58.v[1] = v50 | (truncate_cast<unsigned short,unsigned int>(_RDI) << 16);
  result = v58;
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
Vec4UnpackNormalTransform
==============
*/
void Vec4UnpackNormalTransform(const PackedNormalTransform in, vec4_t *out)
{
  __asm
  {
    vmovss  xmm5, cs:__real@40000000
    vmovss  xmm4, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm6, cs:__real@3b808081
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rdx], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm3, xmm2, xmm4
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdx+4], xmm3
    vsubss  xmm3, xmm2, xmm4
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdx+8], xmm3
    vsubss  xmm3, xmm2, xmm4
    vmovss  dword ptr [rdx+0Ch], xmm3
  }
}

/*
==============
Vec4UnpackUnisgnedUnitVecFromUint2
==============
*/
void Vec4UnpackUnisgnedUnitVecFromUint2(const base_vec2_t<unsigned int> in, vec4_t *out)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
  }
  _RSI = out;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm7, cs:__real@37800080
    vmulss  xmm0, xmm0, xmm7; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm7; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+4], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm7; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm7; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovss  dword ptr [rsi+0Ch], xmm0
  }
}

/*
==============
Vec4UnpackUnitVecFromUint2
==============
*/
void Vec4UnpackUnitVecFromUint2(const base_vec2_t<unsigned int> in, vec4_t *out)
{
  char v49; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, cs:__real@bf800000
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RSI = out;
  __asm
  {
    vmovss  xmm7, cs:__real@40000000
    vxorps  xmm0, xmm0, xmm0
    vmovaps [rsp+68h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vcvtsi2ss xmm0, xmm0, rax
    vmovaps [rsp+68h+var_48], xmm9
    vmovss  xmm9, cs:__real@37800080
    vmulss  xmm1, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm0, xmm2, xmm8; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm0, xmm2, xmm8; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+4], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm9
    vmulss  xmm3, xmm1, xmm7
    vsubss  xmm0, xmm3, xmm8; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm3, xmm0, xmm9
    vmulss  xmm4, xmm3, xmm7
    vsubss  xmm0, xmm4, xmm8; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [rsi+0Ch], xmm0
  }
}

