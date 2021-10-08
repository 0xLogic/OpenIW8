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
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = axis;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RBX = mat;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v54 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v55 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+4]
    vmulss  xmm12, xmm2, dword ptr [rbx]
    vmulss  xmm4, xmm0, xmm3
    vmulss  xmm6, xmm0, xmm5
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm10, xmm2, xmm0
  }
  _R11 = &v59;
  __asm
  {
    vmulss  xmm7, xmm2, xmm3
    vmulss  xmm11, xmm4, xmm3
    vmulss  xmm9, xmm2, xmm5
    vmulss  xmm2, xmm6, xmm0
    vmulss  xmm8, xmm4, xmm5
    vmulss  xmm4, xmm4, xmm0
    vmulss  xmm3, xmm6, xmm5
    vmovss  xmm5, cs:__real@3f800000
    vmovaps xmm6, xmmword ptr [r11-10h]
    vaddss  xmm1, xmm2, xmm7
    vaddss  xmm0, xmm3, xmm11
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rdi], xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vsubss  xmm0, xmm9, xmm4
    vmovss  dword ptr [rdi+8], xmm0
    vsubss  xmm1, xmm7, xmm2
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vaddss  xmm1, xmm8, xmm10
    vaddss  xmm0, xmm3, xmm12
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rdi+10h], xmm0
    vmovss  dword ptr [rdi+14h], xmm1
    vaddss  xmm0, xmm4, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rdi+18h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmovss  dword ptr [rdi+20h], xmm0
  }
}

/*
==============
LocalMatrixTransformVectorQuatTrans
==============
*/
void LocalMatrixTransformVectorQuatTrans(const vec3_t *in, const DObjAnimMat *mat, vec3_t *out)
{
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RSI = out;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RBX = mat;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  [rsp+0D8h+var_A8], xmm0
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps [rsp+0D8h+var_98], xmm14
  }
  if ( (v77 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v78 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v79 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v80 & 0x7F800000) == 2139095040 )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v81 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vmulss  xmm14, xmm2, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx+8]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm4, xmm3, xmm0
    vmulss  xmm7, xmm2, xmm3
    vmulss  xmm6, xmm5, xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm11, xmm2, xmm0
    vmulss  xmm10, xmm4, xmm0
    vmulss  xmm13, xmm4, xmm3
    vmulss  xmm12, xmm2, xmm5
  }
  _R11 = &v84;
  __asm
  {
    vmulss  xmm8, xmm4, xmm5
    vmulss  xmm5, xmm6, xmm5
    vmulss  xmm6, xmm6, xmm0
    vsubss  xmm1, xmm7, xmm6
    vmulss  xmm2, xmm1, dword ptr [rdi+4]
    vaddss  xmm0, xmm5, xmm13
    vsubss  xmm0, xmm9, xmm0
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm10, xmm12
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbx+10h]
    vmovss  dword ptr [rsi], xmm3
    vaddss  xmm1, xmm6, xmm7
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vaddss  xmm0, xmm5, xmm14
    vsubss  xmm0, xmm9, xmm0
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vaddss  xmm4, xmm3, xmm2
    vsubss  xmm0, xmm8, xmm11
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbx+14h]
    vmovss  dword ptr [rsi+4], xmm3
    vaddss  xmm0, xmm8, xmm11
    vmulss  xmm4, xmm0, dword ptr [rdi+4]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vsubss  xmm1, xmm12, xmm10
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vaddss  xmm0, xmm13, xmm14
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0D8h+var_98]
    vsubss  xmm0, xmm9, xmm0
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbx+18h]
    vmovss  dword ptr [rsi+8], xmm3
  }
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
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  char v87; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = skelMat;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RBX = mat;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v82 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v83 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v84 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v85 & 0x7F800000) == 2139095040 )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1326, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1327, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vmulss  xmm12, xmm2, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+4]
    vmulss  xmm4, xmm3, xmm0
    vmulss  xmm6, xmm5, xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm10, xmm2, xmm0
    vmulss  xmm7, xmm2, xmm3
    vmulss  xmm11, xmm3, xmm4
    vmulss  xmm9, xmm2, xmm5
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm8, xmm5, xmm4
    vmulss  xmm4, xmm0, xmm4
    vsubss  xmm1, xmm7, xmm2
    vmulss  xmm3, xmm5, xmm6
    vmovss  xmm5, cs:__real@3f800000
    vaddss  xmm0, xmm3, xmm11
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rdi], xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vaddss  xmm1, xmm3, xmm12
    vaddss  xmm0, xmm4, xmm9
    vmovss  dword ptr [rdi+8], xmm0
    vaddss  xmm0, xmm2, xmm7
  }
  _R11 = &v87;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  _RDI->axis.m[0].v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rdi+10h], xmm0
    vsubss  xmm0, xmm5, xmm1
    vmovss  dword ptr [rdi+14h], xmm0
    vsubss  xmm0, xmm9, xmm4
    vmovaps xmm9, xmmword ptr [r11-40h]
    vsubss  xmm1, xmm8, xmm10
    vmovss  dword ptr [rdi+18h], xmm1
  }
  _RDI->axis.m[1].v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rdi+20h], xmm0
    vaddss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rdi+24h], xmm1
    vaddss  xmm0, xmm11, xmm12
    vsubss  xmm0, xmm5, xmm0
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+28h], xmm0
  }
  _RDI->axis.m[2].v[3] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  xmm1, dword ptr [rdi+10h]
    vmulss  xmm2, xmm1, dword ptr [rbx+14h]
    vmulss  xmm1, xmm0, dword ptr [rbx+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vxorps  xmm0, xmm2, xmm5
    vmovss  dword ptr [rdi+30h], xmm0
    vmovss  xmm0, dword ptr [rbx+10h]
    vmulss  xmm2, xmm0, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rdi+14h]
    vmulss  xmm3, xmm1, dword ptr [rbx+14h]
    vmovss  xmm1, dword ptr [rbx+18h]
    vmulss  xmm0, xmm1, dword ptr [rdi+24h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vxorps  xmm3, xmm2, xmm5
    vmovss  dword ptr [rdi+34h], xmm3
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rdi+18h]
    vmulss  xmm2, xmm1, dword ptr [rbx+14h]
    vmulss  xmm4, xmm0, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rbx+18h]
    vmulss  xmm1, xmm0, dword ptr [rdi+28h]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vxorps  xmm3, xmm2, xmm5
    vmovss  dword ptr [rdi+38h], xmm3
  }
  _RDI->origin.v[3] = 1.0;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
LocalConvertQuatToSkelMat
==============
*/
void LocalConvertQuatToSkelMat(const DObjAnimMat *mat, DObjSkelMat *skelMat)
{
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = skelMat;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RBX = mat;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v54 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v55 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1219, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1220, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+4]
    vmulss  xmm12, xmm2, dword ptr [rbx]
    vmulss  xmm4, xmm3, xmm0
    vmulss  xmm6, xmm5, xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm10, xmm2, xmm0
  }
  _R11 = &v59;
  __asm
  {
    vmulss  xmm7, xmm2, xmm3
    vmulss  xmm11, xmm4, xmm3
    vmulss  xmm9, xmm2, xmm5
    vmulss  xmm2, xmm6, xmm0
    vmulss  xmm8, xmm4, xmm5
    vmulss  xmm4, xmm4, xmm0
    vmulss  xmm3, xmm6, xmm5
    vmovss  xmm5, cs:__real@3f800000
    vmovaps xmm6, xmmword ptr [r11-10h]
    vaddss  xmm1, xmm2, xmm7
    vaddss  xmm0, xmm3, xmm11
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rdi], xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vsubss  xmm0, xmm9, xmm4
    vmovss  dword ptr [rdi+8], xmm0
  }
  _RDI->axis.m[0].v[3] = 0.0;
  __asm
  {
    vsubss  xmm0, xmm7, xmm2
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rdi+10h], xmm0
    vaddss  xmm1, xmm3, xmm12
    vsubss  xmm0, xmm5, xmm1
    vmovss  dword ptr [rdi+14h], xmm0
    vaddss  xmm1, xmm8, xmm10
    vmovss  dword ptr [rdi+18h], xmm1
  }
  _RDI->axis.m[1].v[3] = 0.0;
  __asm
  {
    vaddss  xmm0, xmm4, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rdi+20h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+24h], xmm1
    vsubss  xmm0, xmm5, xmm0
    vmovss  dword ptr [rdi+28h], xmm0
  }
  _RDI->axis.m[2].v[3] = 0.0;
  _RDI->origin.v[0] = _RBX->trans.v[0];
  _RDI->origin.v[1] = _RBX->trans.v[1];
  _RDI->origin.v[2] = _RBX->trans.v[2];
  _RDI->origin.v[3] = 1.0;
}

