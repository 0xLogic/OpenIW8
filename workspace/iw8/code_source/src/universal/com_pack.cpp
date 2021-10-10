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
__int64 FloatPack10F(float v)
{
  int v1; 

  if ( v < 0.0 )
    return 0i64;
  v1 = (SLODWORD(v) >> 23) - 112;
  if ( v1 > 30 )
    return 991i64;
  if ( v1 < 1 )
    return 0i64;
  else
    return (SLODWORD(v) >> 18) & 0x1F | (unsigned int)(32 * v1);
}

/*
==============
FloatPack10FHQ
==============
*/
__int64 FloatPack10FHQ(float v)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( v < 0.00000095367432 )
    return 0i64;
  if ( v >= 64000.0 )
    return 991i64;
  v2 = LODWORD(v) & 0x7FFFFF;
  v3 = LODWORD(v) >> 23;
  if ( LODWORD(v) >> 23 >= 0x71 )
    v4 = v2 | ((v3 - 112) << 23);
  else
    v4 = (v2 | 0x800000u) >> (113 - v3);
  return (v4 + 0x20000) >> 18;
}

/*
==============
FloatPack11F
==============
*/
__int64 FloatPack11F(float v)
{
  int v1; 

  if ( v < 0.0 )
    return 0i64;
  v1 = (SLODWORD(v) >> 23) - 112;
  if ( v1 > 30 )
    return 1983i64;
  if ( v1 < 1 )
    return 0i64;
  else
    return (SLODWORD(v) >> 17) & 0x3F | (unsigned int)(v1 << 6);
}

/*
==============
FloatPack11FHQ
==============
*/
__int64 FloatPack11FHQ(float v)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( v < 0.00000047683716 )
    return 0i64;
  if ( v >= 64768.0 )
    return 1983i64;
  v2 = LODWORD(v) & 0x7FFFFF;
  v3 = LODWORD(v) >> 23;
  if ( LODWORD(v) >> 23 >= 0x71 )
    v4 = v2 | ((v3 - 112) << 23);
  else
    v4 = (v2 | 0x800000u) >> (113 - v3);
  return (v4 + 0x10000) >> 17;
}

/*
==============
FloatUnpack10F
==============
*/
float FloatUnpack10F(const unsigned int packedInt)
{
  float result; 

  if ( (packedInt & 0xFFFFFC00) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 607, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFFC00UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFFC00UL )") )
    __debugbreak();
  if ( !(packedInt >> 5) )
    return 0.0;
  LODWORD(result) = ((packedInt & 0x1F) << 18) | (((packedInt >> 5) + 112) << 23);
  return result;
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
  float result; 

  if ( (packedInt & 0xFFFFFC00) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 441, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFFC00UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFFC00UL )") )
    __debugbreak();
  v2 = packedInt;
  v3 = packedInt & 0x1F;
  v4 = v2 >> 5;
  if ( !v4 )
    return COERCE_FLOAT(v3 + 1098907648) - 16.0;
  LODWORD(result) = (v3 << 18) | ((v4 + 112) << 23);
  return result;
}

/*
==============
FloatUnpack11F
==============
*/
float FloatUnpack11F(const unsigned int packedInt)
{
  float result; 

  if ( (packedInt & 0xFFFFF800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 627, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFF800UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFF800UL )") )
    __debugbreak();
  if ( !(packedInt >> 6) )
    return 0.0;
  LODWORD(result) = ((packedInt & 0x3F) << 17) | (((packedInt >> 6) + 112) << 23);
  return result;
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
  float result; 

  if ( (packedInt & 0xFFFFF800) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_pack.cpp", 412, ASSERT_TYPE_ASSERT, "(!( packedInt & 0xFFFFF800UL ))", (const char *)&queryFormat, "!( packedInt & 0xFFFFF800UL )") )
    __debugbreak();
  v2 = packedInt;
  v3 = packedInt & 0x3F;
  v4 = v2 >> 6;
  if ( !v4 )
    return COERCE_FLOAT(v3 + 1090519040) - 8.0;
  LODWORD(result) = (v3 << 17) | ((v4 + 112) << 23);
  return result;
}

/*
==============
PackBounds
==============
*/
PackedBounds *PackBounds(PackedBounds *result, const Bounds *in)
{
  unsigned int v6; 
  unsigned int v16; 

  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdx], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+4], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v6 = _XMM0;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdx+8], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+0Ch], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v16 = _XMM0;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdx+10h], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+14h], 10h
  }
  result->packed[0] = v6;
  result->packed[1] = v16;
  __asm { vcvtps2ph xmm0, xmm0, 0 }
  result->packed[2] = _XMM0;
  return result;
}

/*
==============
UnpackBounds
==============
*/
Bounds *UnpackBounds(Bounds *result, const PackedBounds *in)
{
  float v2; 
  float v3; 
  unsigned int v4; 
  float v5; 
  unsigned int v6; 
  int v7; 
  float v8; 
  unsigned int v9; 
  float v10; 
  float v11; 

  v2 = 0.0;
  if ( (unsigned __int16)in->packed[0] )
    LODWORD(v3) = ((in->packed[0] & 0x8000) << 16) | (((((in->packed[0] & 0x3FFF) << 14) - (~((unsigned __int16)in->packed[0] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v3 = 0.0;
  v4 = HIWORD(in->packed[0]);
  if ( v4 )
    LODWORD(v5) = ((v4 & 0xFFFF8000) << 16) | (((((v4 & 0x3FFF) << 14) - (~(v4 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v5 = 0.0;
  v6 = in->packed[1];
  v7 = (unsigned __int16)v6;
  result->midPoint.v[0] = v3;
  result->midPoint.v[1] = v5;
  if ( (_WORD)v6 )
    LODWORD(v8) = ((v6 & 0x8000) << 16) | (((((v6 & 0x3FFF) << 14) - (~((unsigned __int16)v6 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v8 = 0.0;
  v9 = HIWORD(v6);
  if ( v9 )
    LODWORD(v10) = ((v9 & 0xFFFF8000) << 16) | (((((v9 & 0x3FFF) << 14) - (~(v9 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v10 = 0.0;
  result->midPoint.v[2] = v8;
  result->halfSize.v[0] = v10;
  if ( v7 )
    LODWORD(v11) = ((v7 & 0xFFFF8000) << 16) | (((((v7 & 0x3FFF) << 14) - (~(v7 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v11 = 0.0;
  if ( v9 )
    LODWORD(v2) = ((v9 & 0xFFFF8000) << 16) | (((((v9 & 0x3FFF) << 14) - (~(v9 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  result->halfSize.v[1] = v11;
  result->halfSize.v[2] = v2;
  return result;
}

/*
==============
UnpackUnitVecAlpha
==============
*/
float UnpackUnitVecAlpha(PackedUnitVec in)
{
  float v1; 

  v1 = (float)(in.packed >> 30);
  return v1 * 0.33333334;
}

/*
==============
Vec2PackLmapCoords
==============
*/
__int64 Vec2PackLmapCoords(const vec2_t *in)
{
  float v1; 
  unsigned int v4; 
  int v7; 
  unsigned int v8; 

  v1 = in->v[1];
  I_fclamp(in->v[0], 0.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  v4 = (int)*(float *)&_XMM3;
  I_fclamp(v1, 0.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  v7 = truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM3) << 16;
  v8 = v7 | truncate_cast<unsigned short,unsigned int>(v4);
  I_fclamp(0.0, 0.0, 1.0);
  I_fclamp(0.0, 0.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM2);
  truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM3);
  return v8;
}

/*
==============
Vec2PackTexCoords
==============
*/
__int64 Vec2PackTexCoords(const vec2_t *in)
{
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rcx], 0
    vinsertps xmm0, xmm0, dword ptr [rcx+4], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  return (unsigned int)_XMM0;
}

/*
==============
Vec2UnpackLmapCoords
==============
*/
vec2_t Vec2UnpackLmapCoords(const PackedLmapCoords *in)
{
  unsigned int packed; 
  float v2; 
  double v3; 
  float v4; 
  float v5; 
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  __int64 v11; 
  unsigned int v12; 

  packed = in->packed;
  v2 = (float)(unsigned __int16)in->packed;
  v3 = I_fclamp(v2 * 0.000015259022, 0.0, 1.0);
  v4 = *(float *)&v3;
  v5 = (float)HIWORD(packed);
  v6 = I_fclamp(v5 * 0.000015259022, 0.0, 1.0);
  v7 = (float)(unsigned __int16)v12;
  v8 = *(float *)&v6;
  I_fclamp(v7 * 0.000015259022, 0.0, 1.0);
  v9 = (float)HIWORD(v12);
  I_fclamp(v9 * 0.000015259022, 0.0, 1.0);
  *(float *)&v11 = v4;
  *((float *)&v11 + 1) = v8;
  return (vec2_t)v11;
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
  unsigned int v2; 
  unsigned int v3; 
  float v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  int v8; 

  v2 = FloatPack11FHQ(vec->v[0]);
  v3 = FloatPack11FHQ(vec->v[1]);
  v4 = vec->v[2];
  if ( v4 >= 0.00000095367432 )
  {
    if ( v4 < 64000.0 )
    {
      v6 = 0;
      v7 = LODWORD(v4) & 0x7FFFFF;
      v8 = LODWORD(v4) >> 23;
      if ( LODWORD(v4) >> 23 >= 0x71 )
        v6 = v8 - 112;
      else
        v7 = (v7 | 0x800000) >> (113 - v8);
      v5 = ((v7 | (v6 << 23)) + 0x20000) >> 18;
    }
    else
    {
      v5 = 991;
    }
  }
  else
  {
    v5 = 0;
  }
  return v2 | ((v3 | (v5 << 11)) << 11);
}

/*
==============
Vec3PackR9G9B9E5SharedExp
==============
*/
__int64 Vec3PackR9G9B9E5SharedExp(const vec3_t *vec)
{
  double v2; 
  int v3; 
  __int128 v4; 
  double v6; 
  int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  int v16; 

  v2 = I_fclamp(vec->v[0], 0.0, 65408.0);
  v3 = LODWORD(v2);
  v4 = LODWORD(vec->v[1]);
  *(double *)&v4 = I_fclamp(*(float *)&v4, 0.0, 65408.0);
  _XMM8 = v4;
  v6 = I_fclamp(vec->v[2], 0.0, 65408.0);
  __asm
  {
    vmaxss  xmm1, xmm8, xmm7
    vmaxss  xmm2, xmm1, xmm0
  }
  if ( *(float *)&_XMM2 < 0.000000029802322 )
    return 0i64;
  v10 = (unsigned __int8)((unsigned int)(_XMM2 + 0x4000) >> 23) - 126;
  if ( v10 < -15 )
    v10 = -15;
  v11 = 0;
  v12 = v10 - (unsigned __int8)(v3 >> 23) + 126;
  if ( v12 < 31 )
    v13 = (((v3 & 0x7FFFFF | 0x800000u) >> v12) + 0x4000) >> 15;
  else
    v13 = 0;
  v14 = v10 - (unsigned __int8)((int)_XMM8 >> 23) + 126;
  if ( v14 < 31 )
    v15 = (((unsigned __int128)(_XMM8 & 0x7FFFFF | 0x800000) >> v14) + 0x4000) >> 15;
  else
    v15 = 0;
  v16 = v10 - (unsigned __int8)(SLODWORD(v6) >> 23) + 126;
  if ( v16 < 31 )
    v11 = (((LODWORD(v6) & 0x7FFFFF | 0x800000u) >> v16) + 0x4000) >> 15;
  return v13 | ((v10 + 15) << 27) | ((v15 | (v11 << 9)) << 9);
}

/*
==============
Vec3PackUnitVec
==============
*/
__int64 Vec3PackUnitVec(const vec3_t *unitVec)
{
  unsigned int v6; 

  I_fclamp(unitVec->v[0], -1.0, 1.0);
  I_fclamp(unitVec->v[1], -1.0, 1.0);
  I_fclamp(unitVec->v[2], -1.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v6 = (int)*(float *)&_XMM2 | (((int)*(float *)&_XMM3 | 0xFFFFFC00) << 10);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  return (int)*(float *)&_XMM2 | (v6 << 10);
}

/*
==============
Vec3PackUnitVecWithAlpha
==============
*/
__int64 Vec3PackUnitVecWithAlpha(const vec3_t *unitVec, float alpha)
{
  int v9; 

  I_fclamp(unitVec->v[0], -1.0, 1.0);
  I_fclamp(unitVec->v[1], -1.0, 1.0);
  I_fclamp(unitVec->v[2], -1.0, 1.0);
  _XMM0 = 0i64;
  _XMM3 = 0i64;
  __asm
  {
    vroundss xmm3, xmm3, xmm2, 1
    vroundss xmm0, xmm0, xmm2, 1
  }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v9 = (int)*(float *)&_XMM2 | (((int)*(float *)&_XMM3 | ((int)*(float *)&_XMM0 << 10)) << 10);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  return (int)*(float *)&_XMM2 | (unsigned int)(v9 << 10);
}

/*
==============
Vec3UnpackR11G11B10F
==============
*/
void Vec3UnpackR11G11B10F(const unsigned int rgb, vec3_t *vec)
{
  unsigned int v3; 
  double v5; 
  double v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 

  v3 = rgb >> 22;
  v5 = FloatUnpack11FHQ(rgb & 0x7FF);
  vec->v[0] = *(float *)&v5;
  v6 = FloatUnpack11FHQ((rgb >> 11) & 0x7FF);
  v7 = v3;
  v8 = v3 & 0x1F;
  v9 = v7 >> 5;
  vec->v[1] = *(float *)&v6;
  if ( v9 )
    vec->v[2] = COERCE_FLOAT((v8 << 18) | ((v9 + 112) << 23));
  else
    vec->v[2] = COERCE_FLOAT(v8 + 1098907648) - 16.0;
}

/*
==============
Vec3UnpackR9G9B9E5SharedExp
==============
*/
void Vec3UnpackR9G9B9E5SharedExp(const unsigned int in, vec3_t *out)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  v4 = (float)(in >> 27);
  v5 = (float)(in & 0x1FF);
  v6 = powf_0(2.0, v4 - 24.0);
  v7 = (float)((in >> 9) & 0x1FF);
  out->v[0] = v5 * v6;
  v8 = v7 * v6;
  v9 = (float)((in >> 18) & 0x1FF);
  out->v[2] = v9 * v6;
  out->v[1] = v8;
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
  __asm { vbroadcastss xmm0, [rsp+18h+var_18] }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(_XMM0 & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  out->v[0] = _XMM2.m128_f32[0];
  __asm
  {
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
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 

  v3 = (float)(in.packed & 0x3FF);
  out->v[0] = (float)((float)(v3 * 0.00097751711) * 2.0) - 1.0;
  v4 = (float)((in.packed >> 10) & 0x3FF);
  v5 = (float)((in.packed >> 20) & 0x3FF);
  v6 = (float)(v5 * 0.00097751711) * 2.0;
  out->v[1] = (float)((float)(v4 * 0.00097751711) * 2.0) - 1.0;
  v7 = (float)(in.packed >> 30);
  out->v[2] = v6 - 1.0;
  *alpha = v7 * 0.33333334;
}

/*
==============
Vec4PackNormalTransform
==============
*/
__int64 Vec4PackNormalTransform(const vec4_t *in)
{
  int v5; 
  int v8; 

  _XMM3 = 0i64;
  _XMM0 = 0i64;
  __asm
  {
    vroundss xmm0, xmm0, xmm2, 1
    vroundss xmm3, xmm3, xmm2, 1
  }
  v5 = (int)*(float *)&_XMM3;
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  v8 = (unsigned __int8)(int)*(float *)&_XMM3 | (((v5 << 8) | (unsigned __int8)(int)*(float *)&_XMM0) << 8);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  return (unsigned __int8)(int)*(float *)&_XMM3 | (unsigned int)(v8 << 8);
}

/*
==============
Vec4PackUnisgnedUnitVecToUint2
==============
*/
base_vec2_t<unsigned int> Vec4PackUnisgnedUnitVecToUint2(const vec4_t *unitVec)
{
  unsigned int v4; 
  int v7; 
  int v12; 
  __int64 v14; 

  I_fclamp(unitVec->v[0], 0.0, 1.0);
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm2, 1 }
  v4 = (int)*(float *)&_XMM0;
  I_fclamp(unitVec->v[1], 0.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  v7 = truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM3) << 16;
  LODWORD(v14) = v7 | truncate_cast<unsigned short,unsigned int>(v4);
  I_fclamp(unitVec->v[2], 0.0, 1.0);
  I_fclamp(unitVec->v[3], 0.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v12 = truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM2);
  HIDWORD(v14) = v12 | (truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM3) << 16);
  return (base_vec2_t<unsigned int>)v14;
}

/*
==============
Vec4PackUnitVecToUint2
==============
*/
base_vec2_t<unsigned int> Vec4PackUnitVecToUint2(const vec4_t *unitVec)
{
  unsigned int v4; 
  int v7; 
  int v12; 
  __int64 v14; 

  I_fclamp(unitVec->v[0], -1.0, 1.0);
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm2, 1 }
  v4 = (int)*(float *)&_XMM0;
  I_fclamp(unitVec->v[1], -1.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  v7 = truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM3) << 16;
  LODWORD(v14) = v7 | truncate_cast<unsigned short,unsigned int>(v4);
  I_fclamp(unitVec->v[2], -1.0, 1.0);
  I_fclamp(unitVec->v[3], -1.0, 1.0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v12 = truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM2);
  HIDWORD(v14) = v12 | (truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM3) << 16);
  return (base_vec2_t<unsigned int>)v14;
}

/*
==============
Vec4UnpackNormalTransform
==============
*/
void Vec4UnpackNormalTransform(const PackedNormalTransform in, vec4_t *out)
{
  float packed_low; 
  float v3; 
  float v4; 
  float v5; 
  float packed_high; 

  packed_low = (float)LOBYTE(in.packed);
  out->v[0] = (float)((float)(packed_low * 0.0039215689) * 2.0) - 1.0;
  v3 = (float)BYTE1(in.packed);
  v4 = (float)((float)(v3 * 0.0039215689) * 2.0) - 1.0;
  v5 = (float)BYTE2(in.packed);
  out->v[1] = v4;
  packed_high = (float)HIBYTE(in.packed);
  out->v[2] = (float)((float)(v5 * 0.0039215689) * 2.0) - 1.0;
  out->v[3] = (float)((float)(packed_high * 0.0039215689) * 2.0) - 1.0;
}

/*
==============
Vec4UnpackUnisgnedUnitVecFromUint2
==============
*/
void Vec4UnpackUnisgnedUnitVecFromUint2(const base_vec2_t<unsigned int> in, vec4_t *out)
{
  float v3; 
  unsigned int v4; 
  unsigned int v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 

  v3 = (float)LOWORD(in.v[0]);
  v4 = in.v[0];
  v5 = in.v[1];
  v6 = I_fclamp(v3 * 0.000015259022, 0.0, 1.0);
  out->v[0] = *(float *)&v6;
  v7 = (float)HIWORD(v4);
  v8 = I_fclamp(v7 * 0.000015259022, 0.0, 1.0);
  out->v[1] = *(float *)&v8;
  v9 = (float)(unsigned __int16)v5;
  v10 = I_fclamp(v9 * 0.000015259022, 0.0, 1.0);
  out->v[2] = *(float *)&v10;
  v11 = (float)HIWORD(v5);
  v12 = I_fclamp(v11 * 0.000015259022, 0.0, 1.0);
  out->v[3] = *(float *)&v12;
}

/*
==============
Vec4UnpackUnitVecFromUint2
==============
*/
void Vec4UnpackUnitVecFromUint2(const base_vec2_t<unsigned int> in, vec4_t *out)
{
  unsigned int v3; 
  float v4; 
  unsigned int v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 

  v3 = in.v[0];
  v4 = (float)LOWORD(in.v[0]);
  v5 = in.v[1];
  v6 = I_fclamp((float)((float)(v4 * 0.000015259022) * 2.0) - 1.0, -1.0, 1.0);
  out->v[0] = *(float *)&v6;
  v7 = (float)HIWORD(v3);
  v8 = I_fclamp((float)((float)(v7 * 0.000015259022) * 2.0) - 1.0, -1.0, 1.0);
  out->v[1] = *(float *)&v8;
  v9 = (float)(unsigned __int16)v5;
  v10 = I_fclamp((float)((float)(v9 * 0.000015259022) * 2.0) - 1.0, -1.0, 1.0);
  out->v[2] = *(float *)&v10;
  v11 = (float)HIWORD(v5);
  v12 = I_fclamp((float)((float)(v11 * 0.000015259022) * 2.0) - 1.0, -1.0, 1.0);
  out->v[3] = *(float *)&v12;
}

