/*
==============
QuatDec3nToUnitQuat
==============
*/

void __fastcall QuatDec3nToUnitQuat(const PackedQuatDec3n quatPacked, vec4_t *outQuat, float *binormalSign)
{
  ?QuatDec3nToUnitQuat@@YAXTPackedQuatDec3n@@AEATvec4_t@@AEAM@Z(quatPacked, outQuat, binormalSign);
}

/*
==============
AxisToPackedQuat
==============
*/

void __fastcall AxisToPackedQuat(const tmat33_t<vec3_t> *axis, vec3_t *outQuatPacked)
{
  ?AxisToPackedQuat@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(axis, outQuatPacked);
}

/*
==============
UnitQuatToNormal
==============
*/

void __fastcall UnitQuatToNormal(const vec4_t *quat, vec3_t *normal)
{
  ?UnitQuatToNormal@@YAXAEBTvec4_t@@AEATvec3_t@@@Z(quat, normal);
}

/*
==============
PackedQuatToUnitQuat
==============
*/

void __fastcall PackedQuatToUnitQuat(const vec3_t *quatPacked, vec4_t *outQuat)
{
  ?PackedQuatToUnitQuat@@YAXAEBTvec3_t@@AEATvec4_t@@@Z(quatPacked, outQuat);
}

/*
==============
UnitQuatToQuatDec3n
==============
*/

PackedQuatDec3n __fastcall UnitQuatToQuatDec3n(const vec4_t *quat, float binormalSign)
{
  return ?UnitQuatToQuatDec3n@@YA?ATPackedQuatDec3n@@AEBTvec4_t@@M@Z(quat, binormalSign);
}

/*
==============
AxisToPackedQuat
==============
*/
void AxisToPackedQuat(const tmat33_t<vec3_t> *axis, vec3_t *outQuatPacked)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
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
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  vec4_t out; 

  v2 = axis->m[0].v[1];
  v3 = axis->m[0].v[0];
  v4 = axis->m[0].v[2];
  v5 = (float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 112, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", v3, v2, v4, fsqrt(v5)) )
    __debugbreak();
  v8 = axis->m[1].v[0];
  v9 = axis->m[1].v[2];
  v10 = (float)((float)(v8 * v8) + (float)(axis->m[1].v[1] * axis->m[1].v[1])) + (float)(v9 * v9);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 113, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", v8, axis->m[1].v[1], v9, fsqrt(v10)) )
    __debugbreak();
  v11 = axis->m[2].v[0];
  v12 = axis->m[2].v[2];
  v13 = (float)((float)(v11 * v11) + (float)(axis->m[2].v[1] * axis->m[2].v[1])) + (float)(v12 * v12);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 114, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v11, axis->m[2].v[1], v12, fsqrt(v13)) )
    __debugbreak();
  v14 = axis->m[0].v[1];
  v15 = axis->m[1].v[0];
  v16 = axis->m[0].v[2];
  v17 = (float)((float)(v14 * axis->m[1].v[1]) + (float)(axis->m[0].v[0] * v15)) + (float)(v16 * axis->m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 115, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v14, v16, v15, axis->m[1].v[1], axis->m[1].v[2], v17) )
    __debugbreak();
  v18 = axis->m[0].v[1];
  v19 = axis->m[2].v[0];
  v20 = axis->m[0].v[2];
  v21 = (float)((float)(v18 * axis->m[2].v[1]) + (float)(v19 * axis->m[0].v[0])) + (float)(v20 * axis->m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 116, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v18, v20, v19, axis->m[2].v[1], axis->m[2].v[2], v21) )
    __debugbreak();
  AxisToQuat(axis, &out);
  v22 = out.v[0];
  v23 = out.v[1];
  v24 = out.v[2];
  v25 = out.v[3];
  v26 = (float)((float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v24 * v24)) + (float)(v25 * v25);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - 1.0) & _xmm) >= 0.0020000001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 120, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", out.v[0], out.v[1], out.v[2], out.v[3], fsqrt(v26)) )
      __debugbreak();
    v22 = out.v[0];
    v23 = out.v[1];
    v24 = out.v[2];
    v25 = out.v[3];
  }
  v27 = (float)((float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v24 * v24)) + (float)(v25 * v25);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - 1.0) & _xmm) >= 0.0020000001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 58, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v22, v23, v24, v25, fsqrt(v27)) )
      __debugbreak();
    v22 = out.v[0];
    v23 = out.v[1];
    v24 = out.v[2];
    v25 = out.v[3];
  }
  outQuatPacked->v[0] = v22;
  outQuatPacked->v[1] = v23;
  outQuatPacked->v[2] = v24;
  if ( v25 < 0.0 )
    outQuatPacked->v[0] = v22 + 4.0;
}

/*
==============
PackedQuatToUnitQuat
==============
*/
void PackedQuatToUnitQuat(const vec3_t *quatPacked, vec4_t *outQuat)
{
  float v2; 
  float v4; 
  bool v5; 
  float v6; 
  float v7; 
  __int128 v9; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 

  v2 = quatPacked->v[0];
  outQuat->v[0] = quatPacked->v[0];
  v4 = quatPacked->v[1];
  v5 = v2 >= 2.0;
  outQuat->v[1] = v4;
  v6 = quatPacked->v[2];
  outQuat->v[2] = v6;
  v7 = v2;
  if ( v2 >= 2.0 )
  {
    v2 = v2 - 4.0;
    outQuat->v[0] = v2;
    v7 = v2;
  }
  v9 = LODWORD(FLOAT_1_0);
  *(float *)&v9 = 1.0 - (float)((float)((float)(v4 * v4) + (float)(v2 * v2)) + (float)(v6 * v6));
  _XMM0 = v9;
  __asm { vmaxss  xmm0, xmm0, xmm10 }
  v12 = fsqrt(*(float *)&_XMM0);
  v11 = v12;
  outQuat->v[3] = v12;
  if ( v5 )
  {
    LODWORD(v11) = LODWORD(v12) ^ _xmm;
    outQuat->v[3] = COERCE_FLOAT(LODWORD(v12) ^ _xmm);
  }
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(v7 * v7) + (float)(v4 * v4)) + (float)(v6 * v6)) + (float)(v11 * v11)) - 1.0) & _xmm;
  if ( v13 >= 0.0080000004 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 101, ASSERT_TYPE_ASSERT, "(isCloseToNormal)", "%s\n\tPackedQuatToUnitQuat: !isCloseToNormal -- %f >= %f -- (%f, %f, %f, %f)", "isCloseToNormal", v13, DOUBLE_0_00800000037997961, v7, v4, v6, v11) )
    __debugbreak();
  v14 = outQuat->v[1];
  v15 = outQuat->v[0];
  v16 = outQuat->v[2];
  v17 = outQuat->v[3];
  v18 = fsqrt((float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16)) + (float)(v17 * v17));
  if ( v18 != 0.0 )
  {
    outQuat->v[0] = v15 * (float)(1.0 / v18);
    outQuat->v[1] = v14 * (float)(1.0 / v18);
    outQuat->v[2] = v16 * (float)(1.0 / v18);
    outQuat->v[3] = v17 * (float)(1.0 / v18);
  }
}

/*
==============
UnitQuatToNormal
==============
*/
void UnitQuatToNormal(const vec4_t *quat, vec3_t *normal)
{
  float v2; 
  float v3; 
  float v5; 
  float v7; 
  float v8; 

  v2 = quat->v[1];
  v3 = quat->v[0];
  v5 = quat->v[2];
  v7 = quat->v[3];
  v8 = (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v3, v2, v5, v7, fsqrt(v8)) )
    __debugbreak();
  normal->v[0] = (float)((float)(quat->v[0] * quat->v[2]) + (float)(quat->v[3] * quat->v[1])) * 2.0;
  normal->v[1] = (float)((float)(quat->v[2] * quat->v[1]) - (float)(quat->v[3] * quat->v[0])) * 2.0;
  normal->v[2] = 1.0 - (float)((float)((float)(quat->v[0] * quat->v[0]) + (float)(quat->v[1] * quat->v[1])) * 2.0);
}

/*
==============
UnitQuatToQuatDec3n
==============
*/
__int64 UnitQuatToQuatDec3n(const vec4_t *quat, float binormalSign)
{
  int v3; 
  int v4; 
  unsigned int v8; 
  unsigned int v9; 
  float v12; 
  float v13; 
  float v14; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v27[4]; 

  _XMM0 = LODWORD(quat->v[3]) & (unsigned __int128)(unsigned int)_xmm;
  v3 = LODWORD(quat->v[2]) & _xmm;
  v4 = LODWORD(quat->v[0]) & _xmm;
  _XMM3 = LODWORD(quat->v[1]) & (unsigned __int128)(unsigned int)_xmm;
  __asm { vmaxss  xmm1, xmm0, xmm2 }
  v27[3] = LODWORD(quat->v[3]) & _xmm;
  v8 = 1;
  v9 = 0;
  __asm
  {
    vmaxss  xmm0, xmm3, xmm5
    vmaxss  xmm6, xmm1, xmm0
  }
  v27[0] = v4;
  v27[1] = _XMM3;
  v27[2] = v3;
  do
  {
    if ( *(float *)&_XMM6 == *(float *)&v27[v8] )
      v9 = v8;
    ++v8;
  }
  while ( v8 < 4 );
  if ( !v9 )
  {
    v12 = quat->v[1];
LABEL_7:
    v13 = quat->v[2];
LABEL_8:
    v14 = quat->v[3];
    goto LABEL_12;
  }
  v12 = quat->v[0];
  if ( v9 == 1 )
    goto LABEL_7;
  v13 = quat->v[1];
  if ( v9 == 2 )
    goto LABEL_8;
  v14 = quat->v[2];
LABEL_12:
  _XMM1 = LODWORD(FLOAT_1_4142135);
  _XMM0 = LODWORD(quat->v[v9]);
  __asm
  {
    vcmpltss xmm3, xmm0, xmm5
    vblendvps xmm4, xmm1, xmm2, xmm3
  }
  v19 = (int)(float)((float)((float)(v12 * *(float *)&_XMM4) + 1.0) * 511.5);
  if ( v19 > 1023 )
    v19 = 1023;
  v20 = (int)(float)((float)((float)(v13 * *(float *)&_XMM4) + 1.0) * 511.5);
  if ( v20 > 1023 )
    v20 = 1023;
  v21 = (int)(float)((float)((float)(v14 * *(float *)&_XMM4) + 1.0) * 255.5);
  if ( v21 > 511 )
    v21 = 511;
  if ( v21 < 0 )
    LOWORD(v21) = 0;
  v22 = v21 & 0x1FF;
  v23 = 512;
  if ( binormalSign > 0.0 )
    v23 = 0;
  v24 = ((v9 << 10) | v22 | v23) << 10;
  if ( v20 < 0 )
    LOWORD(v20) = 0;
  v25 = (v20 & 0x3FF | v24) << 10;
  if ( v19 < 0 )
    LOWORD(v19) = 0;
  return v19 & 0x3FF | (unsigned int)v25;
}

/*
==============
QuatDec3nToUnitQuat
==============
*/
void QuatDec3nToUnitQuat(const PackedQuatDec3n quatPacked, vec4_t *outQuat, float *binormalSign)
{
  float v3; 
  float v4; 
  unsigned int v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  v3 = (float)(quatPacked.packed & 0x3FF);
  v4 = (float)(v3 * 0.001382418) - 0.70710677;
  v5 = quatPacked.packed >> 30;
  v6 = (float)((quatPacked.packed >> 10) & 0x3FF);
  v7 = (float)(v6 * 0.001382418) - 0.70710677;
  v8 = (float)((quatPacked.packed >> 20) & 0x1FF);
  v9 = (float)(v8 * 0.0027675412) - 0.70710677;
  v10 = (float)((float)(v7 * v7) + (float)(v4 * v4)) + (float)(v9 * v9);
  if ( v10 <= 1.0 )
    v11 = fsqrt(1.0 - v10);
  else
    v11 = 0.0;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v12 = (float)(v8 * 0.0027675412) - 0.70710677;
      v9 = v7;
      v7 = v11;
    }
    else if ( v5 == 2 )
    {
      v12 = (float)(v8 * 0.0027675412) - 0.70710677;
      v9 = v11;
    }
    else
    {
      v12 = v11;
    }
    v11 = v4;
  }
  else
  {
    v12 = (float)(v8 * 0.0027675412) - 0.70710677;
    v9 = v7;
    v7 = v4;
  }
  outQuat->v[0] = v11;
  outQuat->v[1] = v7;
  outQuat->v[2] = v9;
  outQuat->v[3] = v12;
  _XMM0 = quatPacked.packed & 0x20000000;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_N1_0);
  __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
  *binormalSign = *(float *)&_XMM0;
}

