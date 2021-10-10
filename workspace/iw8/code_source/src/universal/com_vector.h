/*
==============
Short4LerpAsVec4
==============
*/

void __fastcall Short4LerpAsVec4(const __int16 *from, const __int16 *to, const float frac, vec4_t *out)
{
  ?Short4LerpAsVec4@@YAXQEBF0MAEATvec4_t@@@Z(from, to, frac, out);
}

/*
==============
Vec2CubicBezierSplitHalf
==============
*/

void __fastcall Vec2CubicBezierSplitHalf(const CubicBezierVec2 *input, CubicBezierVec2 *a, CubicBezierVec2 *b)
{
  ?Vec2CubicBezierSplitHalf@@YAXAEBUCubicBezierVec2@@AEAU1@1@Z(input, a, b);
}

/*
==============
Vec3ZeroEpsilon
==============
*/

int __fastcall Vec3ZeroEpsilon(const vec3_t *a)
{
  return ?Vec3ZeroEpsilon@@YAHAEBTvec3_t@@@Z(a);
}

/*
==============
Vec3LimitLength
==============
*/

double __fastcall Vec3LimitLength(vec3_t *v, float maxLength)
{
  double result; 

  *(float *)&result = ?Vec3LimitLength@@YAMAEATvec3_t@@M@Z(v, maxLength);
  return result;
}

/*
==============
Vec3ZeroEpsilon
==============
*/
_BOOL8 Vec3ZeroEpsilon(const vec3_t *a)
{
  float v1[4]; 

  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  return VecNCompareCustomEpsilon(a->v, v1, 0.001, 3);
}

/*
==============
Vec3LimitLength
==============
*/
float Vec3LimitLength(vec3_t *v, float maxLength)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float result; 

  if ( maxLength < 0.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", maxLength, *(double *)&_XMM0) )
      __debugbreak();
  }
  v5 = v->v[1];
  v6 = v->v[0];
  v7 = v->v[2];
  v8 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( v8 <= (float)(maxLength * maxLength) )
    return 0.0;
  v9 = fsqrt(v8);
  v->v[0] = v6 * (float)(maxLength / v9);
  v->v[2] = v7 * (float)(maxLength / v9);
  result = v9;
  v->v[1] = v5 * (float)(maxLength / v9);
  return result;
}

/*
==============
Short4LerpAsVec4
==============
*/
void Short4LerpAsVec4(const __int16 *from, const __int16 *to, const float frac, vec4_t *out)
{
  out->v[0] = (float)((float)(*to - *from) * frac) + (float)*from;
  out->v[1] = (float)((float)(to[1] - from[1]) * frac) + (float)from[1];
  out->v[2] = (float)((float)(to[2] - from[2]) * frac) + (float)from[2];
  out->v[3] = (float)((float)(to[3] - from[3]) * frac) + (float)from[3];
}

/*
==============
Vec2CubicBezierSplitHalf
==============
*/
void Vec2CubicBezierSplitHalf(const CubicBezierVec2 *input, CubicBezierVec2 *a, CubicBezierVec2 *b)
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
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  v3 = input->p[2].v[0];
  v4 = v3 + input->p[3].v[0];
  v5 = v3 + input->p[1].v[0];
  v6 = input->p[1].v[1];
  v7 = input->p[2].v[1];
  v8 = v7 + input->p[3].v[1];
  v9 = v6 + input->p[0].v[1];
  v10 = input->p[0].v[0] + input->p[1].v[0];
  a->p[0].v[0] = input->p[0].v[0];
  a->p[0].v[1] = input->p[0].v[1];
  v11 = (float)(v10 + v5) * 0.25;
  a->p[1].v[0] = v10 * 0.5;
  v12 = (float)(v9 + (float)(v6 + v7)) * 0.25;
  a->p[1].v[1] = v9 * 0.5;
  a->p[2].v[0] = v11;
  a->p[2].v[1] = v12;
  v13 = (float)(v5 + v4) * 0.25;
  v14 = v4 * 0.5;
  v15 = (float)((float)(v6 + v7) + v8) * 0.25;
  v16 = (float)(v11 + v13) * 0.5;
  a->p[3].v[0] = v16;
  v17 = (float)(v15 + v12) * 0.5;
  a->p[3].v[1] = v17;
  b->p[0].v[0] = v16;
  b->p[0].v[1] = v17;
  b->p[1].v[0] = v13;
  b->p[1].v[1] = v15;
  b->p[2].v[0] = v14;
  b->p[2].v[1] = v8 * 0.5;
  b->p[3] = input->p[3];
}

