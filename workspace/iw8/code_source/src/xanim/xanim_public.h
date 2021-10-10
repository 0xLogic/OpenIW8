/*
==============
LocalConvertQuatToSkelMat
==============
*/

void __fastcall LocalConvertQuatToSkelMat(const DObjAnimMat *mat, DObjSkelMat *skelMat)
{
  ?LocalConvertQuatToSkelMat@@YAXPEBUDObjAnimMat@@PEAUDObjSkelMat@@@Z(mat, skelMat);
}

/*
==============
DObjStickerSlotGreaterThan
==============
*/

bool __fastcall DObjStickerSlotGreaterThan(const DObjStickerSlot *left, const DObjStickerSlot *right)
{
  return ?DObjStickerSlotGreaterThan@@YA_NAEBUDObjStickerSlot@@0@Z(left, right);
}

/*
==============
LocalConvertQuatToInverseSkelMat
==============
*/

void __fastcall LocalConvertQuatToInverseSkelMat(const DObjAnimMat *mat, DObjSkelMat *skelMat)
{
  ?LocalConvertQuatToInverseSkelMat@@YAXPEBUDObjAnimMat@@PEAUDObjSkelMat@@@Z(mat, skelMat);
}

/*
==============
LocalMatrixTransformVectorQuatTrans
==============
*/

void __fastcall LocalMatrixTransformVectorQuatTrans(const vec3_t *in, const DObjAnimMat *mat, vec3_t *out)
{
  ?LocalMatrixTransformVectorQuatTrans@@YAXAEBTvec3_t@@PEBUDObjAnimMat@@AEAT1@@Z(in, mat, out);
}

/*
==============
LocalConvertQuatToMat
==============
*/

void __fastcall LocalConvertQuatToMat(const DObjAnimMat *mat, tmat33_t<vec3_t> *axis)
{
  ?LocalConvertQuatToMat@@YAXPEBUDObjAnimMat@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(mat, axis);
}

/*
==============
LocalConvertQuatToMat
==============
*/
void LocalConvertQuatToMat(const DObjAnimMat *mat, tmat33_t<vec3_t> *axis)
{
  float v4; 
  float transWeight; 
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

  v15 = mat->quat.v[0];
  if ( (LODWORD(mat->quat.v[0]) & 0x7F800000) == 2139095040 || (v15 = mat->quat.v[1], (LODWORD(v15) & 0x7F800000) == 2139095040) || (v15 = mat->quat.v[2], (LODWORD(v15) & 0x7F800000) == 2139095040) || (v15 = mat->quat.v[3], (LODWORD(v15) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )", v15) )
      __debugbreak();
  }
  if ( (LODWORD(mat->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  v4 = mat->quat.v[2];
  transWeight = mat->transWeight;
  v6 = transWeight * mat->quat.v[0];
  v7 = mat->quat.v[1];
  v8 = v6 * mat->quat.v[0];
  v9 = transWeight * v7;
  v10 = transWeight * v4;
  v11 = mat->quat.v[3];
  v12 = v9 * v7;
  v13 = v9 * v4;
  v14 = v9 * v11;
  axis->m[0].v[0] = 1.0 - (float)((float)(v10 * v4) + v12);
  axis->m[0].v[1] = (float)(v10 * v11) + (float)(v6 * v7);
  axis->m[0].v[2] = (float)(v6 * v4) - v14;
  axis->m[1].v[0] = (float)(v6 * v7) - (float)(v10 * v11);
  axis->m[1].v[1] = 1.0 - (float)((float)(v10 * v4) + v8);
  axis->m[1].v[2] = v13 + (float)(v6 * v11);
  axis->m[2].v[0] = v14 + (float)(v6 * v4);
  axis->m[2].v[1] = v13 - (float)(v6 * v11);
  axis->m[2].v[2] = 1.0 - (float)(v12 + v8);
}

/*
==============
LocalMatrixTransformVectorQuatTrans
==============
*/
void LocalMatrixTransformVectorQuatTrans(const vec3_t *in, const DObjAnimMat *mat, vec3_t *out)
{
  float transWeight; 
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

  v16 = mat->quat.v[0];
  if ( (LODWORD(mat->quat.v[0]) & 0x7F800000) == 2139095040 || (v16 = mat->quat.v[1], (LODWORD(v16) & 0x7F800000) == 2139095040) || (v16 = mat->quat.v[2], (LODWORD(v16) & 0x7F800000) == 2139095040) || (v16 = mat->quat.v[3], (LODWORD(v16) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )", v16) )
      __debugbreak();
  }
  if ( (LODWORD(mat->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  transWeight = mat->transWeight;
  v7 = transWeight * mat->quat.v[0];
  v8 = v7 * mat->quat.v[0];
  v9 = mat->quat.v[1];
  v10 = mat->quat.v[2];
  v11 = v9 * transWeight;
  v12 = v10 * transWeight;
  v13 = mat->quat.v[3];
  v14 = v12 * v10;
  v15 = v12 * v13;
  out->v[0] = (float)((float)((float)((float)(1.0 - (float)(v14 + (float)(v11 * v9))) * in->v[0]) + (float)((float)((float)(v7 * v9) - v15) * in->v[1])) + (float)((float)((float)(v11 * v13) + (float)(v7 * v10)) * in->v[2])) + mat->trans.v[0];
  out->v[1] = (float)((float)((float)((float)(1.0 - (float)(v14 + v8)) * in->v[1]) + (float)((float)(v15 + (float)(v7 * v9)) * in->v[0])) + (float)((float)((float)(v11 * v10) - (float)(v7 * v13)) * in->v[2])) + mat->trans.v[1];
  out->v[2] = (float)((float)((float)((float)((float)(v11 * v10) + (float)(v7 * v13)) * in->v[1]) + (float)((float)((float)(v7 * v10) - (float)(v11 * v13)) * in->v[0])) + (float)((float)(1.0 - (float)((float)(v11 * v9) + v8)) * in->v[2])) + mat->trans.v[2];
}

/*
==============
DObjStickerSlotGreaterThan
==============
*/
bool DObjStickerSlotGreaterThan(const DObjStickerSlot *left, const DObjStickerSlot *right)
{
  return memcmp_0(left, right, 0x10ui64) > 0;
}

/*
==============
LocalConvertQuatToInverseSkelMat
==============
*/
void LocalConvertQuatToInverseSkelMat(const DObjAnimMat *mat, DObjSkelMat *skelMat)
{
  float v4; 
  float transWeight; 
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

  v15 = mat->quat.v[0];
  if ( (LODWORD(mat->quat.v[0]) & 0x7F800000) == 2139095040 || (v15 = mat->quat.v[1], (LODWORD(v15) & 0x7F800000) == 2139095040) || (v15 = mat->quat.v[2], (LODWORD(v15) & 0x7F800000) == 2139095040) || (v15 = mat->quat.v[3], (LODWORD(v15) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1326, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )", v15) )
      __debugbreak();
  }
  if ( (LODWORD(mat->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1327, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  v4 = mat->quat.v[2];
  transWeight = mat->transWeight;
  v6 = transWeight * mat->quat.v[0];
  v7 = v6 * mat->quat.v[0];
  v8 = mat->quat.v[1];
  v9 = v8 * transWeight;
  v10 = v4 * transWeight;
  v11 = mat->quat.v[3];
  v12 = v8 * v9;
  v13 = v4 * v9;
  v14 = v11 * v9;
  skelMat->axis.m[0].v[0] = 1.0 - (float)((float)(v4 * v10) + v12);
  skelMat->axis.m[0].v[1] = (float)(v6 * v8) - (float)(v11 * v10);
  skelMat->axis.m[0].v[2] = v14 + (float)(v6 * v4);
  skelMat->axis.m[0].v[3] = 0.0;
  skelMat->axis.m[1].v[0] = (float)(v11 * v10) + (float)(v6 * v8);
  skelMat->axis.m[1].v[1] = 1.0 - (float)((float)(v4 * v10) + v7);
  skelMat->axis.m[1].v[2] = v13 - (float)(v6 * v11);
  skelMat->axis.m[1].v[3] = 0.0;
  skelMat->axis.m[2].v[0] = (float)(v6 * v4) - v14;
  skelMat->axis.m[2].v[1] = v13 + (float)(v6 * v11);
  skelMat->axis.m[2].v[2] = 1.0 - (float)(v12 + v7);
  skelMat->axis.m[2].v[3] = 0.0;
  skelMat->origin.v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(mat->trans.v[0] * skelMat->axis.m[0].v[0]) + (float)(skelMat->axis.m[1].v[0] * mat->trans.v[1])) + (float)(skelMat->axis.m[2].v[0] * mat->trans.v[2])) ^ _xmm);
  skelMat->origin.v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(skelMat->axis.m[1].v[1] * mat->trans.v[1]) + (float)(mat->trans.v[0] * skelMat->axis.m[0].v[1])) + (float)(mat->trans.v[2] * skelMat->axis.m[2].v[1])) ^ _xmm);
  skelMat->origin.v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(mat->trans.v[0] * skelMat->axis.m[0].v[2]) + (float)(skelMat->axis.m[1].v[2] * mat->trans.v[1])) + (float)(mat->trans.v[2] * skelMat->axis.m[2].v[2])) ^ _xmm);
  skelMat->origin.v[3] = 1.0;
}

/*
==============
LocalConvertQuatToSkelMat
==============
*/
void LocalConvertQuatToSkelMat(const DObjAnimMat *mat, DObjSkelMat *skelMat)
{
  float v4; 
  float transWeight; 
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

  v15 = mat->quat.v[0];
  if ( (LODWORD(mat->quat.v[0]) & 0x7F800000) == 2139095040 || (v15 = mat->quat.v[1], (LODWORD(v15) & 0x7F800000) == 2139095040) || (v15 = mat->quat.v[2], (LODWORD(v15) & 0x7F800000) == 2139095040) || (v15 = mat->quat.v[3], (LODWORD(v15) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1219, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )", v15) )
      __debugbreak();
  }
  if ( (LODWORD(mat->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1220, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  v4 = mat->quat.v[2];
  transWeight = mat->transWeight;
  v6 = transWeight * mat->quat.v[0];
  v7 = mat->quat.v[1];
  v8 = v6 * mat->quat.v[0];
  v9 = v7 * transWeight;
  v10 = v4 * transWeight;
  v11 = mat->quat.v[3];
  v12 = v9 * v7;
  v13 = v9 * v4;
  v14 = v9 * v11;
  skelMat->axis.m[0].v[0] = 1.0 - (float)((float)(v10 * v4) + v12);
  skelMat->axis.m[0].v[1] = (float)(v10 * v11) + (float)(v6 * v7);
  skelMat->axis.m[0].v[2] = (float)(v6 * v4) - v14;
  skelMat->axis.m[0].v[3] = 0.0;
  skelMat->axis.m[1].v[0] = (float)(v6 * v7) - (float)(v10 * v11);
  skelMat->axis.m[1].v[1] = 1.0 - (float)((float)(v10 * v4) + v8);
  skelMat->axis.m[1].v[2] = v13 + (float)(v6 * v11);
  skelMat->axis.m[1].v[3] = 0.0;
  skelMat->axis.m[2].v[0] = v14 + (float)(v6 * v4);
  skelMat->axis.m[2].v[1] = v13 - (float)(v6 * v11);
  skelMat->axis.m[2].v[2] = 1.0 - (float)(v12 + v8);
  skelMat->axis.m[2].v[3] = 0.0;
  skelMat->origin.v[0] = mat->trans.v[0];
  skelMat->origin.v[1] = mat->trans.v[1];
  skelMat->origin.v[2] = mat->trans.v[2];
  skelMat->origin.v[3] = 1.0;
}

