/*
==============
BG_PlayerCorpseMP_CalculateCorpseZone
==============
*/

PlayerCorpseMPViewZone __fastcall BG_PlayerCorpseMP_CalculateCorpseZone(const vec3_t *viewOrigin, const vec3_t *viewDir, const vec3_t *corpseOrigin, float *outDistSq)
{
  return ?BG_PlayerCorpseMP_CalculateCorpseZone@@YA?AW4PlayerCorpseMPViewZone@@AEBTvec3_t@@00PEAM@Z(viewOrigin, viewDir, corpseOrigin, outDistSq);
}

/*
==============
BG_PlayerCorpseMP_CalculateCorpseZone
==============
*/
PlayerCorpseMPViewZone BG_PlayerCorpseMP_CalculateCorpseZone(const vec3_t *viewOrigin, const vec3_t *viewDir, const vec3_t *corpseOrigin, float *outDistSq)
{
  const dvar_t *v13; 
  char v22; 
  bool v23; 
  bool v26; 
  bool v27; 
  PlayerCorpseMPViewZone result; 
  __int128 v48; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  v13 = DCONST_DVARFLT_bg_corpseZone1Radius;
  _RBP = outDistSq;
  __asm { vmovaps xmmword ptr [rax-58h], xmm9 }
  _RDI = corpseOrigin;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0B8h+var_88], xmm12
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v13, "bg_corpseZone1Radius");
  __asm { vmulss  xmm10, xmm0, xmm0 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_corpseZone2Radius, "bg_corpseZone2Radius");
  __asm
  {
    vmovaps xmm11, xmm0
    vmulss  xmm7, xmm0, xmm0
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_corpseZone2AngleDeg, "bg_corpseZone2AngleDeg");
  __asm
  {
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vmovaps xmm8, xmm0 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_corpseZone3Radius, "bg_corpseZone3Radius");
  __asm
  {
    vmulss  xmm9, xmm0, xmm0
    vcomiss xmm10, xmm9
    vmovaps xmm12, xmm0
  }
  if ( !(v22 | v23) )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_corpse_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(corpseZone1RadiusSq <= corpseZone3RadiusSq)", (const char *)&queryFormat, "corpseZone1RadiusSq <= corpseZone3RadiusSq", v48);
    v22 = 0;
    v23 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm { vcomiss xmm9, xmm7 }
  if ( !(v22 | v23) )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_corpse_mp.cpp", 40, ASSERT_TYPE_ASSERT, "(corpseZone3RadiusSq <= corpseZone2RadiusSq)", (const char *)&queryFormat, "corpseZone3RadiusSq <= corpseZone2RadiusSq");
    v22 = 0;
    if ( v27 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, cs:__real@42700000 }
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_corpse_mp.cpp", 41, ASSERT_TYPE_ASSERT, "(corpseZone2AngleDeg < corpseZone3AngleDeg)", (const char *)&queryFormat, "corpseZone2AngleDeg < corpseZone3AngleDeg") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm5, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm1, dword ptr [rsi+4]
    vsubss  xmm6, xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
  }
  if ( _RBP )
    __asm { vmovss  dword ptr [rbp+0], xmm3 }
  __asm { vcomiss xmm3, xmm7 }
  if ( _RBP )
  {
    result = PLAYER_CORPSE_ZONE_5;
  }
  else
  {
    __asm { vcomiss xmm3, xmm10 }
    result = PLAYER_CORPSE_ZONE_1;
  }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
}

