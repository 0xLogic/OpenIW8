/*
==============
Grenade_GetTossPositionsFromHints
==============
*/

bool __fastcall Grenade_GetTossPositionsFromHints(const vec3_t *vFrom, const vec3_t *vTargetPos, vec3_t *vLand)
{
  return ?Grenade_GetTossPositionsFromHints@@YA_NAEBTvec3_t@@0AEAT1@@Z(vFrom, vTargetPos, vLand);
}

/*
==============
Grenade_CheckGrenadeHintToss
==============
*/

bool __fastcall Grenade_CheckGrenadeHintToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  return ?Grenade_CheckGrenadeHintToss@@YA_NPEAUai_common_t@@HAEBTvec3_t@@1AEAT2@@Z(pAI, grenadeEntNum, vFrom, vLand, vVelOut);
}

/*
==============
Grenade_CheckMinimumEnergyToss
==============
*/

bool __fastcall Grenade_CheckMinimumEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  return ?Grenade_CheckMinimumEnergyToss@@YA_NPEAUai_common_t@@HAEBTvec3_t@@1AEAT2@@Z(pAI, grenadeEntNum, vFrom, vLand, vVelOut);
}

/*
==============
Grenade_IsValidTrajectory
==============
*/

bool __fastcall Grenade_IsValidTrajectory(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vVelocity, const vec3_t *vGoal)
{
  return ?Grenade_IsValidTrajectory@@YA_NPEAUai_common_t@@HAEBTvec3_t@@11@Z(pAI, grenadeEntNum, vFrom, vVelocity, vGoal);
}

/*
==============
Grenade_CheckMaximumEnergyToss
==============
*/

bool __fastcall Grenade_CheckMaximumEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, int bLob, vec3_t *vVelOut)
{
  return ?Grenade_CheckMaximumEnergyToss@@YA_NPEAUai_common_t@@HAEBTvec3_t@@1HAEAT2@@Z(pAI, grenadeEntNum, vFrom, vLand, bLob, vVelOut);
}

/*
==============
Grenade_CheckInfiniteEnergyToss
==============
*/

bool __fastcall Grenade_CheckInfiniteEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  return ?Grenade_CheckInfiniteEnergyToss@@YA_NPEAUai_common_t@@HAEBTvec3_t@@1AEAT2@@Z(pAI, grenadeEntNum, vFrom, vLand, vVelOut);
}

/*
==============
Debug_DrawGrenadeTraceLine
==============
*/

void __fastcall Debug_DrawGrenadeTraceLine(const vec3_t *start, const vec3_t *end, float height, const vec4_t *color, int depthTest)
{
  ?Debug_DrawGrenadeTraceLine@@YAXAEBTvec3_t@@0MAEBTvec4_t@@H@Z(start, end, height, color, depthTest);
}

/*
==============
Grenade_GetTossPositions
==============
*/

void __fastcall Grenade_GetTossPositions(const vec3_t *vFrom, const vec3_t *vTargetPos, vec3_t *vLand, const Weapon *grenadeWPID)
{
  ?Grenade_GetTossPositions@@YAXAEBTvec3_t@@0AEAT1@AEBUWeapon@@@Z(vFrom, vTargetPos, vLand, grenadeWPID);
}

/*
==============
AI_Spawn_info_grenade_hint
==============
*/

void __fastcall AI_Spawn_info_grenade_hint(gentity_s *ent)
{
  ?AI_Spawn_info_grenade_hint@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
MagicGrenade_Internal
==============
*/

gentity_s *__fastcall MagicGrenade_Internal(gentity_s *pSelf, ai_common_t *pAI, const vec3_t *origin, const vec3_t *vTargetPos, const Weapon *grenadeWeapon, int grenadeTime, int shouldThrow, bool bSticky)
{
  return ?MagicGrenade_Internal@@YAPEAUgentity_s@@PEAU1@PEAUai_common_t@@AEBTvec3_t@@2AEBUWeapon@@HH_N@Z(pSelf, pAI, origin, vTargetPos, grenadeWeapon, grenadeTime, shouldThrow, bSticky);
}

/*
==============
Grenade_CheckDesperateToss
==============
*/

bool __fastcall Grenade_CheckDesperateToss(ai_common_t *pAI, const vec3_t *vFrom, vec3_t *vVelOut)
{
  return ?Grenade_CheckDesperateToss@@YA_NPEAUai_common_t@@AEBTvec3_t@@AEAT2@@Z(pAI, vFrom, vVelOut);
}

/*
==============
G_DrawGrenadeHints
==============
*/

void G_DrawGrenadeHints(void)
{
  ?G_DrawGrenadeHints@@YAXXZ();
}

/*
==============
AI_Spawn_info_grenade_hint
==============
*/
void AI_Spawn_info_grenade_hint(gentity_s *ent)
{
  unsigned int grenadeHintCount; 
  bool v3; 
  __int64 v4; 

  grenadeHintCount = level.grenadeHintCount;
  if ( level.grenadeHintCount >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D78678, 833i64, 512i64);
    grenadeHintCount = level.grenadeHintCount;
  }
  v3 = GUtils::ms_gUtils == NULL;
  v4 = grenadeHintCount;
  g_vGrenadeHint[v4].v[0] = ent->r.currentOrigin.v[0];
  g_vGrenadeHint[v4].v[1] = ent->r.currentOrigin.v[1];
  g_vGrenadeHint[v4].v[2] = ent->r.currentOrigin.v[2];
  level.grenadeHintCount = grenadeHintCount + 1;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, ent);
}

/*
==============
Debug_DrawGrenadeTraceLine
==============
*/

void __fastcall Debug_DrawGrenadeTraceLine(const vec3_t *start, const vec3_t *end, double height, const vec4_t *color, int depthTest)
{
  const dvar_t *v7; 
  char v13; 
  char v14; 
  vec3_t enda; 
  vec3_t starta; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  v7 = DVARINT_g_drawGrenadeHints;
  _RSI = end;
  _RDI = start;
  __asm { vmovaps xmm6, xmm2 }
  if ( !DVARINT_g_drawGrenadeHints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawGrenadeHints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer > 0 )
  {
    G_DebugLineWithDuration(_RDI, _RSI, color, depthTest, 100);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( !(v13 | v14) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+98h+start], xmm0
        vmovss  xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsp+98h+start+4], xmm1
        vmovss  xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+98h+end], xmm0
        vaddss  xmm0, xmm6, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+98h+end+4], xmm1
        vaddss  xmm1, xmm6, dword ptr [rsi+8]
        vmovss  dword ptr [rsp+98h+start+8], xmm0
        vmovss  dword ptr [rsp+98h+end+8], xmm1
      }
      G_DebugLineWithDuration(&starta, &enda, color, depthTest, 100);
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
G_DrawGrenadeHints
==============
*/
void G_DrawGrenadeHints()
{
  const dvar_t *v10; 
  int integer; 
  unsigned int grenadeHintCount; 
  unsigned int v15; 
  char v22; 
  char v23; 
  vec3_t end; 
  vec3_t start; 

  v10 = DVARINT_g_drawGrenadeHints;
  if ( !DVARINT_g_drawGrenadeHints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawGrenadeHints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  if ( integer > 0 )
  {
    _RDX = level.gentities;
    if ( level.gentities->client )
    {
      _RAX = level.clients;
      grenadeHintCount = level.grenadeHintCount;
      __asm { vmovaps [rsp+118h+var_88], xmm13 }
      v15 = 0;
      __asm
      {
        vmovaps [rsp+118h+var_98], xmm14
        vmovaps [rsp+118h+var_A8], xmm15
        vmovss  xmm0, dword ptr [rax+1E8h]
        vaddss  xmm15, xmm0, dword ptr [rax+38h]
        vmovss  xmm13, dword ptr [rax+30h]
        vmovss  xmm14, dword ptr [rax+34h]
      }
      if ( level.grenadeHintCount )
      {
        __asm
        {
          vmovaps [rsp+118h+var_58], xmm10
          vmovaps [rsp+118h+var_68], xmm11
          vmovss  xmm11, cs:__real@43400000
          vmovaps [rsp+118h+var_78], xmm12
          vmovss  xmm12, cs:__real@3f800000
          vmovaps [rsp+118h+var_18], xmm6
          vmovaps [rsp+118h+var_28], xmm7
        }
        v23 = ((unsigned __int64)(integer * (__int64)integer) >> 32 != 0) | v22;
        __asm
        {
          vxorps  xmm10, xmm10, xmm10
          vmovaps [rsp+118h+var_38], xmm8
          vmovaps [rsp+118h+var_48], xmm9
          vcvtsi2ss xmm10, xmm10, ecx
        }
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+130h]
            vmovss  xmm1, dword ptr [rdx+134h]
            vsubss  xmm3, xmm0, dword ptr [rsi+rcx*4]
            vsubss  xmm2, xmm1, dword ptr [rsi+rcx*4+4]
            vmovss  xmm0, dword ptr [rdx+138h]
            vsubss  xmm4, xmm0, dword ptr [rsi+rcx*4+8]
          }
          _RDI = &g_vGrenadeHint[v15];
          __asm
          {
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm10
          }
          if ( v23 )
          {
            __asm { vmovss  xmm1, cs:__real@41000000; radius }
            G_DebugCircle(&g_vGrenadeHint[v15], *(float *)&_XMM1, &colorRed, 1, 0, 0);
            __asm { vmovaps xmm1, xmm11; radius }
            G_DebugCircle(&g_vGrenadeHint[v15], *(float *)&_XMM1, &colorOrange, 1, 0, 0);
            __asm
            {
              vmovss  xmm9, dword ptr [rdi]
              vmovss  xmm8, dword ptr [rdi+4]
              vmovss  xmm7, dword ptr [rdi+8]
              vsubss  xmm5, xmm8, xmm14
              vmulss  xmm1, xmm5, xmm5
              vsubss  xmm3, xmm7, xmm15
              vsubss  xmm6, xmm9, xmm13
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm4, xmm2, xmm2
              vcmpless xmm0, xmm4, cs:__real@80000000
              vblendvps xmm0, xmm4, xmm12, xmm0
              vdivss  xmm2, xmm12, xmm0
              vmulss  xmm0, xmm5, xmm2
              vmulss  xmm4, xmm0, xmm11
              vmulss  xmm0, xmm6, xmm2
              vmulss  xmm3, xmm0, cs:__real@c3400000
              vaddss  xmm1, xmm4, xmm9
              vmovss  dword ptr [rsp+118h+start], xmm1
              vaddss  xmm1, xmm8, xmm3
              vmovss  dword ptr [rsp+118h+start+4], xmm1
              vsubss  xmm1, xmm8, xmm3
              vsubss  xmm0, xmm9, xmm4
              vmovss  dword ptr [rsp+118h+end+4], xmm1
              vmovss  dword ptr [rsp+118h+start+8], xmm7
              vmovss  dword ptr [rsp+118h+end], xmm0
              vmovss  dword ptr [rsp+118h+end+8], xmm7
            }
            G_DebugLine(&start, &end, &colorOrange, 1);
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+8]
              vmovss  xmm3, dword ptr [rdi]
              vmovss  xmm2, dword ptr [rdi+4]
              vaddss  xmm0, xmm11, xmm1
              vmovss  dword ptr [rsp+118h+start+8], xmm0
              vsubss  xmm0, xmm1, xmm11
              vmovss  dword ptr [rsp+118h+end+8], xmm0
              vmovss  dword ptr [rsp+118h+start], xmm3
              vmovss  dword ptr [rsp+118h+start+4], xmm2
              vmovss  dword ptr [rsp+118h+end], xmm3
              vmovss  dword ptr [rsp+118h+end+4], xmm2
            }
            G_DebugLine(&start, &end, &colorOrange, 1);
            grenadeHintCount = level.grenadeHintCount;
            _RDX = level.gentities;
          }
          v23 = ++v15 <= grenadeHintCount;
        }
        while ( v15 < grenadeHintCount );
        __asm
        {
          vmovaps xmm12, [rsp+118h+var_78]
          vmovaps xmm11, [rsp+118h+var_68]
          vmovaps xmm10, [rsp+118h+var_58]
          vmovaps xmm9, [rsp+118h+var_48]
          vmovaps xmm8, [rsp+118h+var_38]
          vmovaps xmm7, [rsp+118h+var_28]
          vmovaps xmm6, [rsp+118h+var_18]
        }
      }
      __asm
      {
        vmovaps xmm14, [rsp+118h+var_98]
        vmovaps xmm13, [rsp+118h+var_88]
        vmovaps xmm15, [rsp+118h+var_A8]
      }
    }
  }
}

/*
==============
Grenade_CheckDesperateToss
==============
*/
char Grenade_CheckDesperateToss(ai_common_t *pAI, const vec3_t *vFrom, vec3_t *vVelOut)
{
  char v9; 
  int v13; 

  _RDI = vFrom;
  Profile_Begin(483);
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 570, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  if ( !level.grenadeHintCount )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr cs:g_vRefPos, xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr cs:g_vRefPos+4, xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr cs:g_vRefPos+8, xmm0
  }
  qsort(g_vGrenadeHint, level.grenadeHintCount, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_desperate_hints);
  v13 = 0;
  if ( level.grenadeHintCount )
  {
    while ( !Grenade_CheckMaximumEnergyToss(pAI, 2047, _RDI, &g_vGrenadeHint[v13], 0, vVelOut) )
    {
      if ( ++v13 >= level.grenadeHintCount )
        goto LABEL_11;
    }
    Profile_EndInternal(NULL);
    return 1;
  }
  else
  {
LABEL_11:
    Profile_EndInternal(NULL);
    return 0;
  }
}

/*
==============
Grenade_CheckGrenadeHintToss
==============
*/
bool Grenade_CheckGrenadeHintToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  unsigned int grenadeHintCount; 
  __int64 v38; 
  bool v40; 
  bool v41; 
  bool v42; 
  bool result; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  vec3_t vGoal; 

  __asm { vmovaps [rsp+148h+var_68], xmm8 }
  _RBP = vVelOut;
  _RSI = vLand;
  _RDI = vFrom;
  Profile_Begin(482);
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm8, dword ptr [rbx+28h]
  }
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 409, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+148h+var_108], xmm0
  }
  if ( (v117 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+148h+var_108], xmm0
  }
  if ( (v118 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+148h+var_108], xmm0
  }
  if ( (v119 & 0x7F800000) == 2139095040 )
  {
LABEL_41:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+148h+var_108], xmm0
  }
  if ( (v120 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+148h+var_108], xmm0
  }
  if ( (v121 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+148h+var_108], xmm0
  }
  if ( (v122 & 0x7F800000) == 2139095040 )
  {
LABEL_42:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 412, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )") )
      __debugbreak();
  }
  grenadeHintCount = level.grenadeHintCount;
  __asm
  {
    vmovaps [rsp+148h+var_48], xmm6
    vmovaps [rsp+148h+var_58], xmm7
    vmovaps [rsp+148h+var_78], xmm9
    vmovaps [rsp+148h+var_88], xmm10
    vmovaps [rsp+148h+var_98], xmm11
    vmovaps [rsp+148h+var_A8], xmm12
    vmovaps [rsp+148h+var_B8], xmm13
    vmovaps [rsp+148h+var_C8], xmm14
    vmovaps [rsp+148h+var_D8], xmm15
  }
  if ( !level.grenadeHintCount )
  {
LABEL_37:
    Profile_EndInternal(NULL);
    result = 0;
    goto LABEL_38;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm6, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
  }
  v38 = 0i64;
  __asm
  {
    vmovss  [rsp+148h+var_100], xmm2
    vsqrtss xmm13, xmm2, xmm2
    vmovss  [rsp+148h+var_FC], xmm3
    vmovss  [rsp+148h+var_108], xmm6
    vmovss  [rsp+148h+var_104], xmm4
  }
  v40 = 0;
  v41 = level.grenadeHintCount == 0;
  v42 = level.grenadeHintCount == 0;
  _R13 = g_vGrenadeHint;
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm9, dword ptr [rdi]
      vmovss  xmm10, dword ptr [rdi+4]
    }
    _RCX = 3 * v38;
    __asm
    {
      vmovss  xmm0, dword ptr [r13+rcx*4+0]
      vmovss  xmm1, dword ptr [r13+rcx*4+4]
      vsubss  xmm5, xmm0, xmm9
      vmovss  xmm0, dword ptr [r13+rcx*4+8]
      vsubss  xmm11, xmm0, dword ptr [rdi+8]
      vsubss  xmm7, xmm1, xmm10
      vmulss  xmm2, xmm5, xmm3
      vmulss  xmm1, xmm7, xmm6
      vmulss  xmm0, xmm11, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm4, xmm3, xmm0
      vcomiss xmm4, xmm8
    }
    if ( !v40 )
      break;
    __asm { vmovss  xmm4, [rsp+148h+var_104] }
LABEL_33:
    v38 = (unsigned int)(v38 + 1);
    v40 = (unsigned int)v38 < grenadeHintCount;
    v41 = (_DWORD)v38 == grenadeHintCount;
    v42 = (unsigned int)v38 <= grenadeHintCount;
    if ( (unsigned int)v38 >= grenadeHintCount )
      goto LABEL_37;
    __asm { vmovss  xmm3, [rsp+148h+var_FC] }
  }
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm12, xmm1, xmm0
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm6, xmm12, xmm12
    vcomiss xmm6, xmm13
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm14, xmm1, xmm5
    vmulss  xmm15, xmm1, xmm7
  }
  if ( !v40 )
    goto LABEL_31;
  __asm { vucomiss xmm6, xmm8 }
  if ( v41 )
    goto LABEL_31;
  __asm
  {
    vmulss  xmm0, xmm14, xmm13
    vaddss  xmm3, xmm0, xmm9
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm15, xmm13
    vaddss  xmm2, xmm1, xmm10
    vmovss  xmm1, dword ptr [rsi]
    vsubss  xmm4, xmm1, xmm3
    vmovss  dword ptr [rsp+148h+vGoal+8], xmm0
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm1, xmm4, xmm4
    vmovss  xmm4, [rsp+148h+var_104]
    vmovss  dword ptr [rsp+148h+vGoal+4], xmm2
    vsubss  xmm2, xmm0, xmm2
    vmovss  dword ptr [rsp+148h+vGoal], xmm3
    vmulss  xmm3, xmm2, xmm2
    vaddss  xmm0, xmm3, xmm1
    vcomiss xmm0, cs:__real@47100000
  }
  if ( !v42 )
    goto LABEL_32;
  __asm
  {
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm11, xmm13
    vsubss  xmm7, xmm1, xmm0
    vcomiss xmm7, xmm8
  }
  if ( !v40 )
    goto LABEL_32;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@bf000000
    vmovss  xmm10, [rsp+148h+var_100]
    vmulss  xmm2, xmm10, xmm6
    vdivss  xmm7, xmm1, xmm7
    vmulss  xmm0, xmm12, xmm13
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm9, xmm1, xmm7
    vsqrtss xmm6, xmm9, xmm9
    vucomiss xmm6, xmm8
  }
  if ( v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 448, ASSERT_TYPE_ASSERT, "(fVelHorz != 0.0f)", (const char *)&queryFormat, "fVelHorz != 0.0f") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm12, [rsp+148h+var_104]
    vmulss  xmm1, xmm10, xmm11
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, xmm7
    vdivss  xmm7, xmm2, xmm6
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_maxGrenadeThrowSpeed, "ai_maxGrenadeThrowSpeed");
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm9
    vmulss  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  if ( !v40 && !v41 )
    goto LABEL_30;
  __asm
  {
    vmulss  xmm0, xmm14, xmm6
    vmulss  xmm1, xmm15, xmm6
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  dword ptr [rbp+4], xmm1
    vmovss  dword ptr [rbp+8], xmm7
  }
  if ( !Grenade_IsValidTrajectory(pAI, grenadeEntNum, _RDI, vVelOut, &vGoal) )
  {
LABEL_30:
    grenadeHintCount = level.grenadeHintCount;
LABEL_31:
    __asm { vmovss  xmm4, [rsp+148h+var_104] }
LABEL_32:
    __asm { vmovss  xmm6, [rsp+148h+var_108] }
    goto LABEL_33;
  }
  Profile_EndInternal(NULL);
  result = 1;
LABEL_38:
  __asm
  {
    vmovaps xmm15, [rsp+148h+var_D8]
    vmovaps xmm14, [rsp+148h+var_C8]
    vmovaps xmm13, [rsp+148h+var_B8]
    vmovaps xmm12, [rsp+148h+var_A8]
    vmovaps xmm11, [rsp+148h+var_98]
    vmovaps xmm10, [rsp+148h+var_88]
    vmovaps xmm9, [rsp+148h+var_78]
    vmovaps xmm7, [rsp+148h+var_58]
    vmovaps xmm6, [rsp+148h+var_48]
    vmovaps xmm8, [rsp+148h+var_68]
  }
  return result;
}

/*
==============
Grenade_CheckInfiniteEnergyToss
==============
*/
bool Grenade_CheckInfiniteEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  char v19; 
  bool v26; 
  bool v27; 
  const dvar_t *v39; 
  const dvar_t *v42; 
  char v48; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  _RBP = vVelOut;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  _RSI = vLand;
  __asm { vmovaps xmmword ptr [rax-68h], xmm7 }
  _RDI = vFrom;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps [rsp+0F8h+var_88], xmm9
    vmovaps [rsp+0F8h+var_98], xmm10
    vmovaps [rsp+0F8h+var_A8], xmm11
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm8, dword ptr [rbx+28h]
  }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 600, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v68 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v69 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v70 & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 602, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v71 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  v26 = (v73 & 0x7F800000u) <= 0x7F800000;
  if ( (v73 & 0x7F800000) == 2139095040 )
  {
LABEL_41:
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 603, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )");
    v26 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm9, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm10, xmm1, dword ptr [rdi+4]
    vsubss  xmm11, xmm0, dword ptr [rdi+8]
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm6, xmm2, xmm1
    vcomiss xmm6, xmm8
  }
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 607, ASSERT_TYPE_ASSERT, "(fTotalDistSqrd > 0)", (const char *)&queryFormat, "fTotalDistSqrd > 0") )
    __debugbreak();
  v39 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  __asm
  {
    vsqrtss xmm0, xmm6, xmm6
    vmulss  xmm6, xmm0, dword ptr [rbx+28h]
  }
  v42 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@40000000
    vmovss  xmm6, cs:__real@3f800000
    vsqrtss xmm1, xmm0, xmm0
    vdivss  xmm0, xmm6, dword ptr [rbx+28h]
    vmulss  xmm7, xmm1, xmm0
    vucomiss xmm7, xmm8
  }
  if ( v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 612, ASSERT_TYPE_ASSERT, "(fTotalTime != 0.0f)", (const char *)&queryFormat, "fTotalTime != 0.0f") )
    __debugbreak();
  __asm
  {
    vdivss  xmm6, xmm6, xmm7
    vmulss  xmm0, xmm6, xmm9
    vmulss  xmm1, xmm6, xmm10
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  dword ptr [rbp+4], xmm1
  }
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+0F8h+var_B8], xmm0
    vmulss  xmm3, xmm1, xmm7
    vmulss  xmm2, xmm6, xmm11
    vaddss  xmm4, xmm3, xmm2
    vmovss  dword ptr [rbp+8], xmm4
  }
  if ( (v74 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v75 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm { vmovss  [rsp+0F8h+var_B8], xmm4 }
  if ( (v76 & 0x7F800000) == 2139095040 )
  {
LABEL_42:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 618, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] )") )
      __debugbreak();
  }
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
  return Grenade_IsValidTrajectory(pAI, grenadeEntNum, _RDI, vVelOut, _RSI);
}

/*
==============
Grenade_CheckMaximumEnergyToss
==============
*/
bool Grenade_CheckMaximumEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, int bLob, vec3_t *vVelOut)
{
  bool v27; 
  bool v28; 
  const dvar_t *v43; 
  const dvar_t *v49; 
  const dvar_t *v54; 
  char v55; 
  bool result; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  char v101; 

  _RBX = DCONST_DVARFLT_bg_lowGravity;
  _RBP = vVelOut;
  __asm { vmovaps [rsp+118h+var_78], xmm8 }
  _RSI = vLand;
  __asm { vmovaps [rsp+118h+var_88], xmm9 }
  _RDI = vFrom;
  __asm
  {
    vmovaps [rsp+118h+var_98], xmm10
    vmovaps [rsp+118h+var_A8], xmm11
    vmovaps [rsp+118h+var_B8], xmm12
    vmovaps [rsp+118h+var_C8], xmm13
  }
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm10, dword ptr [rbx+28h]
  }
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 352, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( (v84 & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( (v85 & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 )
  {
LABEL_56:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 354, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( (v87 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( (v88 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+118h+var_D8], xmm0
  }
  v27 = (v89 & 0x7F800000u) < 0x7F800000;
  if ( (v89 & 0x7F800000) == 2139095040 )
  {
LABEL_57:
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 355, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )");
    v27 = 0;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm12, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm13, xmm1, dword ptr [rdi+4]
    vsubss  xmm11, xmm0, dword ptr [rdi+8]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm1, xmm13, xmm13
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm8, xmm2, xmm1
    vcomiss xmm8, xmm9
    vmovaps [rsp+118h+var_58], xmm6
    vmovaps [rsp+118h+var_68], xmm7
  }
  if ( v27 )
    goto LABEL_52;
  _RBX = DVARFLT_ai_maxGrenadeThrowSpeed;
  if ( !DVARFLT_ai_maxGrenadeThrowSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxGrenadeThrowSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v43 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  __asm { vmulss  xmm0, xmm11, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vsubss  xmm7, xmm1, xmm0
  }
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v49 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  __asm
  {
    vmulss  xmm0, xmm6, xmm8
    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    vmulss  xmm2, xmm7, xmm7
    vsubss  xmm6, xmm2, xmm1
    vcomiss xmm6, xmm10
  }
  if ( v27 )
  {
LABEL_52:
    result = 0;
  }
  else
  {
    v54 = DCONST_DVARFLT_bg_lowGravity;
    if ( bLob )
    {
      if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v54);
      __asm
      {
        vsqrtss xmm0, xmm6, xmm6
        vaddss  xmm1, xmm0, xmm7
      }
    }
    else
    {
      if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v54);
      __asm
      {
        vsqrtss xmm0, xmm6, xmm6
        vsubss  xmm1, xmm7, xmm0
      }
    }
    __asm
    {
      vmulss  xmm2, xmm1, cs:__real@40000000
      vdivss  xmm0, xmm9, dword ptr [rbx+28h]
      vsqrtss xmm3, xmm2, xmm2
      vmulss  xmm7, xmm3, xmm0
      vucomiss xmm7, xmm10
    }
    if ( v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 373, ASSERT_TYPE_ASSERT, "(fTotalTime != 0.0f)", (const char *)&queryFormat, "fTotalTime != 0.0f") )
      __debugbreak();
    __asm
    {
      vdivss  xmm6, xmm9, xmm7
      vmulss  xmm0, xmm12, xmm6
      vmulss  xmm1, xmm13, xmm6
      vmovss  dword ptr [rbp+0], xmm0
      vmovss  dword ptr [rbp+4], xmm1
    }
    _RBX = DCONST_DVARFLT_bg_lowGravity;
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  xmm0, dword ptr [rbp+0]
      vmovss  [rsp+118h+var_D8], xmm0
      vmulss  xmm3, xmm1, xmm7
      vmulss  xmm2, xmm11, xmm6
      vaddss  xmm4, xmm3, xmm2
      vmovss  dword ptr [rbp+8], xmm4
    }
    if ( (v90 & 0x7F800000) == 2139095040 )
      goto LABEL_58;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vmovss  [rsp+118h+var_D8], xmm0
    }
    if ( (v91 & 0x7F800000) == 2139095040 )
      goto LABEL_58;
    __asm { vmovss  [rsp+118h+var_D8], xmm4 }
    if ( (v92 & 0x7F800000) == 2139095040 )
    {
LABEL_58:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 379, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] )") )
        __debugbreak();
    }
    result = Grenade_IsValidTrajectory(pAI, grenadeEntNum, _RDI, vVelOut, _RSI);
  }
  __asm { vmovaps xmm7, [rsp+118h+var_68] }
  _R11 = &v101;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm6, [rsp+118h+var_58]
    vmovaps xmm13, [rsp+118h+var_C8]
  }
  return result;
}

/*
==============
Grenade_CheckMinimumEnergyToss
==============
*/
bool Grenade_CheckMinimumEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  char v19; 
  bool v26; 
  bool v27; 
  const dvar_t *v40; 
  char v46; 
  bool result; 
  const dvar_t *v48; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  _RDI = vVelOut;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  _RBP = vLand;
  __asm { vmovaps xmmword ptr [rax-68h], xmm7 }
  _RSI = vFrom;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps [rsp+0F8h+var_88], xmm9
    vmovaps [rsp+0F8h+var_98], xmm10
    vmovaps [rsp+0F8h+var_A8], xmm11
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm8, dword ptr [rbx+28h]
  }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 312, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v71 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v73 & 0x7F800000) == 2139095040 )
  {
LABEL_46:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 314, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v74 & 0x7F800000) == 2139095040 )
    goto LABEL_47;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  if ( (v75 & 0x7F800000) == 2139095040 )
    goto LABEL_47;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+0F8h+var_B8], xmm0
  }
  v26 = (v76 & 0x7F800000u) <= 0x7F800000;
  if ( (v76 & 0x7F800000) == 2139095040 )
  {
LABEL_47:
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 315, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )");
    v26 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm10, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm11, xmm1, dword ptr [rsi+4]
    vsubss  xmm9, xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
    vcomiss xmm7, xmm8
  }
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 319, ASSERT_TYPE_ASSERT, "(fTotalDist > 0)", (const char *)&queryFormat, "fTotalDist > 0") )
    __debugbreak();
  v40 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  __asm
  {
    vaddss  xmm0, xmm9, xmm7
    vmulss  xmm6, xmm0, dword ptr [rbx+28h]
  }
  _RBX = DVARFLT_ai_maxGrenadeThrowSpeed;
  if ( !DVARFLT_ai_maxGrenadeThrowSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxGrenadeThrowSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
  }
  if ( v19 | v46 )
  {
    v48 = DCONST_DVARFLT_bg_lowGravity;
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    __asm
    {
      vmulss  xmm0, xmm7, cs:__real@40000000
      vdivss  xmm1, xmm0, dword ptr [rbx+28h]
      vsqrtss xmm7, xmm1, xmm1
      vucomiss xmm7, xmm8
    }
    if ( v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 327, ASSERT_TYPE_ASSERT, "(fTotalTime != 0.0f)", (const char *)&queryFormat, "fTotalTime != 0.0f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm6, xmm0, xmm7
      vmulss  xmm1, xmm10, xmm6
      vmulss  xmm0, xmm11, xmm6
      vmovss  dword ptr [rdi], xmm1
      vmovss  dword ptr [rdi+4], xmm0
    }
    _RBX = DCONST_DVARFLT_bg_lowGravity;
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  xmm0, dword ptr [rdi]
      vmovss  [rsp+0F8h+var_B8], xmm0
      vmulss  xmm3, xmm1, xmm7
      vmulss  xmm2, xmm9, xmm6
      vaddss  xmm4, xmm3, xmm2
      vmovss  dword ptr [rdi+8], xmm4
    }
    if ( (v77 & 0x7F800000) == 2139095040 )
      goto LABEL_48;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  [rsp+0F8h+var_B8], xmm0
    }
    if ( (v78 & 0x7F800000) == 2139095040 )
      goto LABEL_48;
    __asm { vmovss  [rsp+0F8h+var_B8], xmm4 }
    if ( (v79 & 0x7F800000) == 2139095040 )
    {
LABEL_48:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 333, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] )") )
        __debugbreak();
    }
    result = Grenade_IsValidTrajectory(pAI, grenadeEntNum, _RSI, vVelOut, _RBP);
  }
  else
  {
    result = 0;
  }
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
  return result;
}

/*
==============
Grenade_GetTossPositions
==============
*/
void Grenade_GetTossPositions(const vec3_t *vFrom, const vec3_t *vTargetPos, vec3_t *vLand, const Weapon *grenadeWPID)
{
  __int64 v9; 
  WeaponDef *v14; 
  bool detailTrace; 
  char v23; 
  unsigned int v24; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  LODWORD(v9) = grenadeWPID->weaponIdx;
  _R14 = vLand;
  _RDI = vTargetPos;
  _RBP = vFrom;
  if ( (unsigned int)v9 > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", grenadeWPID->weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v9 = (unsigned __int16)v9;
  if ( !bg_weaponDefs[(unsigned __int16)v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v14 = bg_weaponDefs[v9];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 50, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  detailTrace = BG_WeaponRadiusDamageDetailTrace(grenadeWPID, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  xmm3, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm6, cs:__real@3f800000
    vaddss  xmm0, xmm6, xmm1
    vmovss  dword ptr [rsp+148h+start+8], xmm0
    vsubss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rsp+148h+end+8], xmm0
    vmovss  dword ptr [rsp+148h+start], xmm3
    vmovss  dword ptr [rsp+148h+start+4], xmm2
    vmovss  dword ptr [rsp+148h+end], xmm3
    vmovss  dword ptr [rsp+148h+end+4], xmm2
  }
  G_Missile_Trace(NULL, &results, &start, &end, &bounds_origin, 2047, 2047, 2065, detailTrace);
  __asm
  {
    vmovss  xmm0, [rsp+148h+results.fraction]
    vucomiss xmm0, xmm6
  }
  if ( v23 )
    v24 = 0;
  else
    v24 = (results.surfaceFlags >> 19) & 0x3F;
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+4]
    vmovss  xmm8, dword ptr [rdi+8]
    vmovss  xmm7, dword ptr [rbp+8]
  }
  _RCX = v24;
  _RAX = v14->parallelBounce;
  __asm { vmovss  xmm3, dword ptr [rax+rcx*4] }
  _RAX = v14->perpendicularBounce;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rcx*4]
    vsubss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm1, cs:__real@3f70902e
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rbp+0]
    vaddss  xmm3, xmm2, xmm3
    vsubss  xmm9, xmm6, xmm3
    vmovss  xmm6, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, dword ptr [rbp+0]
    vsubss  xmm0, xmm6, xmm4
    vmulss  xmm1, xmm0, xmm9
    vmovss  dword ptr [r14], xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+4]
    vsubss  xmm0, xmm8, xmm7
    vmulss  xmm1, xmm0, xmm9
    vmovss  dword ptr [r14+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+8]
    vmovss  dword ptr [r14+8], xmm2
  }
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
Grenade_GetTossPositionsFromHints
==============
*/
char Grenade_GetTossPositionsFromHints(const vec3_t *vFrom, const vec3_t *vTargetPos, vec3_t *vLand)
{
  unsigned int grenadeHintCount; 
  __int64 v27; 
  int v28; 
  bool v29; 
  bool v30; 
  unsigned int v32; 
  int v33; 
  bool v147; 
  bool v148; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = vTargetPos;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
  }
  Profile_Begin(481);
  _RDI = DVARFLT_ai_debugGrenadeHintArc;
  if ( !DVARFLT_ai_debugGrenadeHintArc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGrenadeHintArc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, cs:__real@3c0efa35
    vaddss  xmm0, xmm1, cs:__real@40490fdb; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  grenadeHintCount = level.grenadeHintCount;
  __asm
  {
    vmovss  [rsp+0F8h+var_B4], xmm0
    vmovaps xmm14, xmm0
  }
  if ( !level.grenadeHintCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 484, ASSERT_TYPE_ASSERT, "(level.grenadeHintCount > 0)", (const char *)&queryFormat, "level.grenadeHintCount > 0") )
      __debugbreak();
    grenadeHintCount = level.grenadeHintCount;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@7f7fffff
    vmovss  xmm10, cs:__real@41200000
    vmovss  xmm11, cs:__real@80000000
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm15, cs:__real@43400000
    vmovaps [rsp+0F8h+var_18], xmm6
  }
  v27 = 0i64;
  __asm { vmovaps [rsp+0F8h+var_38], xmm8 }
  v28 = -1;
  __asm
  {
    vmovaps [rsp+0F8h+var_78], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
  }
  v29 = grenadeHintCount < 4;
  v30 = grenadeHintCount <= 4;
  if ( grenadeHintCount >= 4 )
  {
    __asm { vmovss  xmm12, dword ptr [rbx+8] }
    v32 = grenadeHintCount - 3;
    v33 = 2;
    _RAX = &g_vGrenadeHint[1].v[1];
    do
    {
      __asm
      {
        vaddss  xmm1, xmm10, dword ptr [rax-8]
        vcomiss xmm1, xmm12
      }
      if ( !v29 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rax-10h]
          vmovss  xmm3, dword ptr [rax-0Ch]
          vsubss  xmm8, xmm2, dword ptr [rbx]
          vsubss  xmm13, xmm3, dword ptr [rbx+4]
          vmulss  xmm1, xmm13, xmm13
          vmulss  xmm0, xmm8, xmm8
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm6, xmm1, xmm1
          vcomiss xmm6, xmm15
          vcmpless xmm0, xmm6, xmm11
          vblendvps xmm0, xmm6, xmm9, xmm0
          vmovss  [rsp+0F8h+var_B8], xmm0
        }
        if ( v30 )
        {
          __asm
          {
            vsubss  xmm5, xmm2, dword ptr [rsi]
            vsubss  xmm3, xmm3, dword ptr [rsi+4]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm5, xmm5
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
            vdivss  xmm2, xmm9, [rsp+0F8h+var_B8]
            vmulss  xmm1, xmm13, xmm2
            vdivss  xmm4, xmm9, xmm0
            vmulss  xmm0, xmm3, xmm4
            vmulss  xmm3, xmm1, xmm0
            vmulss  xmm2, xmm8, xmm2
            vmulss  xmm1, xmm5, xmm4
            vmulss  xmm0, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm14
          }
          if ( v30 )
          {
            __asm { vcomiss xmm6, xmm7 }
            if ( v29 )
            {
              v28 = v27;
              __asm { vmovaps xmm7, xmm6 }
            }
          }
        }
      }
      __asm
      {
        vaddss  xmm1, xmm10, dword ptr [rax+4]
        vcomiss xmm1, xmm12
      }
      if ( !v29 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rax-4]
          vmovss  xmm3, dword ptr [rax]
          vsubss  xmm13, xmm2, dword ptr [rbx]
          vsubss  xmm14, xmm3, dword ptr [rbx+4]
          vmulss  xmm1, xmm14, xmm14
          vmulss  xmm0, xmm13, xmm13
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm8, xmm1, xmm1
          vcomiss xmm8, xmm15
          vcmpless xmm0, xmm8, xmm11
          vblendvps xmm0, xmm8, xmm9, xmm0
          vmovss  [rsp+0F8h+var_B8], xmm0
        }
        if ( v30 )
        {
          __asm
          {
            vsubss  xmm6, xmm2, dword ptr [rsi]
            vsubss  xmm3, xmm3, dword ptr [rsi+4]
            vdivss  xmm4, xmm9, [rsp+0F8h+var_B8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
            vdivss  xmm5, xmm9, xmm0
            vmulss  xmm1, xmm5, xmm3
            vmulss  xmm0, xmm4, xmm14
            vmulss  xmm3, xmm1, xmm0
            vmulss  xmm2, xmm6, xmm5
            vmulss  xmm1, xmm13, xmm4
            vmulss  xmm0, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, [rsp+0F8h+var_B4]
          }
          if ( v30 )
          {
            __asm { vcomiss xmm8, xmm7 }
            if ( v29 )
            {
              v28 = v33 - 1;
              __asm { vmovaps xmm7, xmm8 }
            }
          }
        }
      }
      __asm
      {
        vaddss  xmm1, xmm10, dword ptr [rax+10h]
        vcomiss xmm1, xmm12
      }
      if ( !v29 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rax+8]
          vmovss  xmm3, dword ptr [rax+0Ch]
          vsubss  xmm13, xmm2, dword ptr [rbx]
          vsubss  xmm14, xmm3, dword ptr [rbx+4]
          vmulss  xmm1, xmm14, xmm14
          vmulss  xmm0, xmm13, xmm13
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm8, xmm1, xmm1
          vcomiss xmm8, xmm15
          vcmpless xmm0, xmm8, xmm11
          vblendvps xmm0, xmm8, xmm9, xmm0
          vmovss  [rsp+0F8h+var_B8], xmm0
        }
        if ( v30 )
        {
          __asm
          {
            vsubss  xmm6, xmm2, dword ptr [rsi]
            vsubss  xmm3, xmm3, dword ptr [rsi+4]
            vdivss  xmm4, xmm9, [rsp+0F8h+var_B8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
            vdivss  xmm5, xmm9, xmm0
            vmulss  xmm1, xmm3, xmm5
            vmulss  xmm0, xmm14, xmm4
            vmulss  xmm3, xmm1, xmm0
            vmulss  xmm2, xmm6, xmm5
            vmulss  xmm1, xmm13, xmm4
            vmulss  xmm0, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, [rsp+0F8h+var_B4]
          }
          if ( v30 )
          {
            __asm { vcomiss xmm8, xmm7 }
            if ( v29 )
            {
              v28 = v33;
              __asm { vmovaps xmm7, xmm8 }
            }
          }
        }
      }
      __asm
      {
        vaddss  xmm1, xmm10, dword ptr [rax+1Ch]
        vcomiss xmm1, xmm12
      }
      if ( v29 )
        goto LABEL_30;
      __asm
      {
        vmovss  xmm2, dword ptr [rax+14h]
        vmovss  xmm3, dword ptr [rax+18h]
        vsubss  xmm13, xmm2, dword ptr [rbx]
        vsubss  xmm14, xmm3, dword ptr [rbx+4]
        vmulss  xmm1, xmm14, xmm14
        vmulss  xmm0, xmm13, xmm13
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm8, xmm1, xmm1
        vcomiss xmm8, xmm15
        vcmpless xmm0, xmm8, xmm11
        vblendvps xmm0, xmm8, xmm9, xmm0
        vmovss  [rsp+0F8h+var_B8], xmm0
      }
      if ( !v30 )
      {
LABEL_30:
        __asm { vmovss  xmm14, [rsp+0F8h+var_B4] }
      }
      else
      {
        __asm
        {
          vsubss  xmm6, xmm2, dword ptr [rsi]
          vsubss  xmm3, xmm3, dword ptr [rsi+4]
          vdivss  xmm4, xmm9, [rsp+0F8h+var_B8]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, xmm11
          vblendvps xmm0, xmm2, xmm9, xmm0
          vdivss  xmm5, xmm9, xmm0
          vmulss  xmm0, xmm14, xmm4
          vmovss  xmm14, [rsp+0F8h+var_B4]
          vmulss  xmm1, xmm3, xmm5
          vmulss  xmm3, xmm1, xmm0
          vmulss  xmm2, xmm6, xmm5
          vmulss  xmm1, xmm13, xmm4
          vmulss  xmm0, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm14
        }
        if ( v30 )
        {
          __asm { vcomiss xmm8, xmm7 }
          if ( v29 )
          {
            v28 = v33 + 1;
            __asm { vmovaps xmm7, xmm8 }
          }
        }
      }
      _RAX += 12;
      v27 = (unsigned int)(v27 + 4);
      v33 += 4;
      v29 = (unsigned int)v27 < v32;
      v30 = (unsigned int)v27 <= v32;
    }
    while ( (unsigned int)v27 < v32 );
  }
  v147 = (unsigned int)v27 < grenadeHintCount;
  v148 = (unsigned int)v27 <= grenadeHintCount;
  if ( (unsigned int)v27 < grenadeHintCount )
  {
    __asm { vmovss  xmm14, dword ptr [rbx+8] }
    _RAX = &g_vGrenadeHint[v27].v[2];
    do
    {
      __asm
      {
        vaddss  xmm1, xmm10, dword ptr [rax]
        vcomiss xmm1, xmm14
      }
      if ( !v147 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rax-8]
          vmovss  xmm3, dword ptr [rax-4]
          vsubss  xmm12, xmm2, dword ptr [rbx]
          vsubss  xmm13, xmm3, dword ptr [rbx+4]
          vmulss  xmm1, xmm13, xmm13
          vmulss  xmm0, xmm12, xmm12
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm8, xmm1, xmm1
          vcomiss xmm8, xmm15
          vcmpless xmm0, xmm8, xmm11
          vblendvps xmm0, xmm8, xmm9, xmm0
          vmovss  [rsp+0F8h+var_B8], xmm0
        }
        if ( v148 )
        {
          __asm
          {
            vsubss  xmm6, xmm2, dword ptr [rsi]
            vsubss  xmm3, xmm3, dword ptr [rsi+4]
            vdivss  xmm4, xmm9, [rsp+0F8h+var_B8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
            vdivss  xmm5, xmm9, xmm0
            vmulss  xmm1, xmm3, xmm5
            vmulss  xmm0, xmm13, xmm4
            vmulss  xmm3, xmm1, xmm0
            vmulss  xmm2, xmm6, xmm5
            vmulss  xmm1, xmm12, xmm4
            vmulss  xmm0, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, [rsp+0F8h+var_B4]
          }
          if ( v148 )
          {
            __asm { vcomiss xmm8, xmm7 }
            if ( v147 )
            {
              v28 = v27;
              __asm { vmovaps xmm7, xmm8 }
            }
          }
        }
      }
      _RAX += 3;
      LODWORD(v27) = v27 + 1;
      v147 = (unsigned int)v27 < grenadeHintCount;
      v148 = (unsigned int)v27 <= grenadeHintCount;
    }
    while ( (unsigned int)v27 < grenadeHintCount );
  }
  __asm
  {
    vmovaps xmm15, [rsp+0F8h+var_A8]
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm13, [rsp+0F8h+var_88]
    vmovaps xmm12, [rsp+0F8h+var_78]
    vmovaps xmm11, [rsp+0F8h+var_68]
    vmovaps xmm10, [rsp+0F8h+var_58]
    vmovaps xmm9, [rsp+0F8h+var_48]
    vmovaps xmm8, [rsp+0F8h+var_38]
    vmovaps xmm7, [rsp+0F8h+var_28]
    vmovaps xmm6, [rsp+0F8h+var_18]
  }
  if ( v28 == -1 )
  {
    Profile_EndInternal(NULL);
    return 0;
  }
  else
  {
    vLand->v[0] = g_vGrenadeHint[v28].v[0];
    vLand->v[1] = g_vGrenadeHint[v28].v[1];
    vLand->v[2] = g_vGrenadeHint[v28].v[2];
    Profile_EndInternal(NULL);
    return 1;
  }
}

/*
==============
Grenade_IsValidTrajectory
==============
*/
bool Grenade_IsValidTrajectory(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vVelocity, const vec3_t *vGoal)
{
  bool v30; 
  bool v31; 
  const dvar_t *v34; 
  const dvar_t *v37; 
  bool v46; 
  bool v47; 
  bool v50; 
  int v51; 
  bool v59; 
  bool v60; 
  const dvar_t *v61; 
  bool v66; 
  int number; 
  int v101; 
  int v111; 
  bool v112; 
  int v144; 
  unsigned int ThreadId; 
  unsigned int v146; 
  unsigned __int16 EntityHitId; 
  sentient_s *sentient; 
  sentient_s *v172; 
  bool v173; 
  unsigned int v177; 
  unsigned __int64 eTeam; 
  __int64 skipEntity1; 
  __int64 contentMask; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  int v185; 
  int v186; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  int v191; 
  int v192; 
  int v193; 
  int v194; 
  int v195; 
  int v196; 
  int v197; 
  vec3_t start; 
  vec3_t v199; 
  Bounds bounds; 
  vec3_t end; 
  bitarray<224> result; 
  trace_t results; 

  __asm
  {
    vmovaps [rsp+1F0h+var_80], xmm9
    vmovaps [rsp+1F0h+var_D0], xmm15
  }
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  _RDI = vGoal;
  _RSI = vVelocity;
  _R14 = vFrom;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [rbx+28h]
  }
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 125, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v181 & 0x7F800000) == 2139095040 )
    goto LABEL_96;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v182 & 0x7F800000) == 2139095040 )
    goto LABEL_96;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v183 & 0x7F800000) == 2139095040 )
  {
LABEL_96:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 146, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v184 & 0x7F800000) == 2139095040 )
    goto LABEL_97;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v185 & 0x7F800000) == 2139095040 )
    goto LABEL_97;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v186 & 0x7F800000) == 2139095040 )
  {
LABEL_97:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 147, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelocity )[0] ) && !IS_NAN( ( vVelocity )[1] ) && !IS_NAN( ( vVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelocity )[0] ) && !IS_NAN( ( vVelocity )[1] ) && !IS_NAN( ( vVelocity )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v187 & 0x7F800000) == 2139095040 )
    goto LABEL_98;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  if ( (v188 & 0x7F800000) == 2139095040 )
    goto LABEL_98;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+1F0h+var_1B0], xmm0
  }
  v30 = (v189 & 0x7F800000u) < 0x7F800000;
  if ( (v189 & 0x7F800000) == 2139095040 )
  {
LABEL_98:
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 148, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vGoal )[0] ) && !IS_NAN( ( vGoal )[1] ) && !IS_NAN( ( vGoal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vGoal )[0] ) && !IS_NAN( ( vGoal )[1] ) && !IS_NAN( ( vGoal )[2] )");
    v30 = 0;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm9, dword ptr [rsi+8]
    vmovss  xmm15, cs:__real@3f800000
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
  }
  v34 = DCONST_DVARFLT_bg_lowGravity;
  __asm
  {
    vmovaps [rsp+1F0h+var_50], xmm6
    vmovaps [rsp+1F0h+var_60], xmm7
    vmovaps [rsp+1F0h+var_70], xmm8
    vmovaps [rsp+1F0h+var_90], xmm10
    vmovaps [rsp+1F0h+var_A0], xmm11
    vmovaps [rsp+1F0h+var_B0], xmm12
    vmovaps [rsp+1F0h+var_C0], xmm14
    vmovss  dword ptr [rsp+1F0h+bounds.halfSize+4], xmm15
    vmovss  dword ptr [rsp+1F0h+bounds.halfSize+8], xmm15
    vmovups xmmword ptr [rsp+1F0h+bounds.midPoint], xmm0
  }
  if ( v30 )
  {
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vdivss  xmm7, xmm0, dword ptr [rbx+28h]
    }
    v37 = DCONST_DVARFLT_bg_lowGravity;
    __asm
    {
      vmovss  xmm8, cs:__real@3f000000
      vmulss  xmm12, xmm7, xmm8
    }
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm1, xmm0, dword ptr [rdi+8]
      vmulss  xmm2, xmm1, cs:__real@40000000
      vdivss  xmm3, xmm2, dword ptr [rbx+28h]
      vmovss  [rsp+1F0h+var_1B0], xmm7
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm6, xmm3, xmm0
    }
    if ( (v190 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 172, ASSERT_TYPE_SANITY, "( !IS_NAN( tApex ) )", (const char *)&queryFormat, "!IS_NAN( tApex )") )
      __debugbreak();
    __asm { vmovss  [rsp+1F0h+var_1B0], xmm12 }
    if ( (v191 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 173, ASSERT_TYPE_SANITY, "( !IS_NAN( tMidNear ) )", (const char *)&queryFormat, "!IS_NAN( tMidNear )") )
      __debugbreak();
    __asm { vmovss  [rsp+1F0h+var_1B0], xmm6 }
    v46 = (v192 & 0x7F800000u) <= 0x7F800000;
    if ( (v192 & 0x7F800000) == 2139095040 )
    {
      v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 174, ASSERT_TYPE_SANITY, "( !IS_NAN( tDiscriminant ) )", (const char *)&queryFormat, "!IS_NAN( tDiscriminant )");
      v46 = !v47;
      if ( v47 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, xmm9 }
    if ( v46 )
      goto LABEL_65;
    __asm
    {
      vsqrtss xmm0, xmm6, xmm6
      vmulss  xmm6, xmm0, xmm8
      vmovss  [rsp+1F0h+var_1B0], xmm6
    }
    v50 = (v193 & 0x7F800000u) <= 0x7F800000;
    if ( (v193 & 0x7F800000) != 2139095040 )
      goto LABEL_55;
    v51 = 180;
  }
  else
  {
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm12, xmm12, xmm12
    }
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm1, xmm0, dword ptr [rdi+8]
      vmulss  xmm2, xmm1, cs:__real@40000000
      vmovss  xmm4, dword ptr [rsi+8]
      vmulss  xmm3, xmm2, dword ptr [rbx+28h]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm6, xmm3, xmm0
      vmovss  [rsp+1F0h+var_1B0], xmm6
    }
    v59 = (v194 & 0x7F800000u) <= 0x7F800000;
    if ( (v194 & 0x7F800000) == 2139095040 )
    {
      v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( tDiscriminant ) )", (const char *)&queryFormat, "!IS_NAN( tDiscriminant )");
      v59 = !v60;
      if ( v60 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, xmm9 }
    if ( v59 )
      goto LABEL_65;
    v61 = DCONST_DVARFLT_bg_lowGravity;
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    __asm
    {
      vmovss  xmm8, cs:__real@3f000000
      vsqrtss xmm0, xmm6, xmm6
      vaddss  xmm1, xmm0, dword ptr [rsi+8]
      vmulss  xmm1, xmm1, xmm8
      vdivss  xmm6, xmm1, dword ptr [rbx+28h]
      vmovss  [rsp+1F0h+var_1B0], xmm6
    }
    v50 = (v195 & 0x7F800000u) <= 0x7F800000;
    if ( (v195 & 0x7F800000) != 2139095040 )
      goto LABEL_55;
    v51 = 194;
  }
  v66 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", v51, ASSERT_TYPE_SANITY, "( !IS_NAN( tHalfFarSegment ) )", (const char *)&queryFormat, "!IS_NAN( tHalfFarSegment )");
  v50 = !v66;
  if ( v66 )
    __debugbreak();
LABEL_55:
  __asm
  {
    vmovss  xmm10, dword ptr [r14]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm4, cs:__real@3dcccccd
    vaddss  xmm14, xmm6, xmm7
    vaddss  xmm5, xmm14, xmm6
    vmulss  xmm0, xmm5, dword ptr [rsi]
    vaddss  xmm1, xmm0, xmm10
    vsubss  xmm2, xmm1, dword ptr [rdi]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm4
  }
  if ( v50 )
  {
    __asm
    {
      vmovss  xmm11, dword ptr [r14+4]
      vmulss  xmm0, xmm5, dword ptr [rsi+4]
      vaddss  xmm1, xmm0, xmm11
      vsubss  xmm2, xmm1, dword ptr [rdi+4]
      vandps  xmm2, xmm2, xmm3
      vcomiss xmm2, xmm4
    }
    if ( v50 )
    {
      number = 2047;
      if ( pAI )
        number = pAI->ent->s.number;
      __asm { vcomiss xmm7, xmm9 }
      if ( pAI )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3e000000
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm9, xmm2, xmm12
          vmovss  [rsp+1F0h+var_1B0], xmm9
        }
        if ( (v196 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 213, ASSERT_TYPE_SANITY, "( !IS_NAN( fMaxErrorNear ) )", (const char *)&queryFormat, "!IS_NAN( fMaxErrorNear )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm10, cs:__real@bf800000
          vaddss  xmm2, xmm9, xmm15
          vmulss  xmm0, xmm2, xmm8
          vsubss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rsp+1F0h+bounds.midPoint+8], xmm1
          vsubss  xmm2, xmm2, xmm10
          vmulss  xmm0, xmm2, xmm8
          vmaxss  xmm1, xmm0, dword ptr [rsp+1F0h+bounds.halfSize]
          vmulss  xmm0, xmm12, dword ptr [rsi]
          vmovss  dword ptr [rsp+1F0h+bounds.halfSize+8], xmm1
          vaddss  xmm1, xmm0, dword ptr [r14]
          vmulss  xmm0, xmm12, dword ptr [rsi+4]
          vmovss  dword ptr [rbp+0F0h+end], xmm1
          vaddss  xmm1, xmm0, dword ptr [r14+4]
          vmovss  dword ptr [rbp+0F0h+end+4], xmm1
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3fc00000
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm3, xmm2, xmm12
          vaddss  xmm0, xmm3, dword ptr [r14+8]
          vmovss  dword ptr [rbp+0F0h+end+8], xmm0
          vmovaps xmm2, xmm9; height
        }
        v101 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, _R14, &end, &bounds, number, grenadeEntNum, 41972113);
        Debug_DrawGrenadeTraceLine(_R14, &end, *(float *)&_XMM2, &colorCyan, 1);
        if ( v101 )
          goto LABEL_65;
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rsi]
          vaddss  xmm1, xmm0, dword ptr [r14]
          vmulss  xmm0, xmm7, dword ptr [rsi+4]
          vmovss  dword ptr [rsp+1F0h+start], xmm1
          vaddss  xmm1, xmm0, dword ptr [r14+4]
          vmovss  dword ptr [rsp+1F0h+start+4], xmm1
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
        __asm
        {
          vmulss  xmm1, xmm0, xmm8
          vmulss  xmm3, xmm1, xmm7
          vmulss  xmm4, xmm3, xmm7
          vaddss  xmm0, xmm4, dword ptr [r14+8]
          vmovss  dword ptr [rsp+1F0h+start+8], xmm0
          vmovaps xmm2, xmm9; height
        }
        v111 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &end, &start, &bounds, number, grenadeEntNum, 41972113);
        Debug_DrawGrenadeTraceLine(&end, &start, *(float *)&_XMM2, &colorCyan, 1);
        if ( v111 )
          goto LABEL_65;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+8]
          vmovss  dword ptr [rsp+1F0h+start], xmm10
          vmovss  xmm10, cs:__real@bf800000
          vmovss  dword ptr [rsp+1F0h+start+8], xmm0
          vmovss  dword ptr [rsp+1F0h+start+4], xmm11
        }
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3e000000
        vmulss  xmm2, xmm1, xmm6
        vmulss  xmm6, xmm2, xmm6
        vmovss  [rsp+1F0h+var_1B0], xmm6
      }
      if ( (v197 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 248, ASSERT_TYPE_SANITY, "( !IS_NAN( fMaxErrorFar ) )", (const char *)&queryFormat, "!IS_NAN( fMaxErrorFar )") )
        __debugbreak();
      __asm
      {
        vaddss  xmm2, xmm6, xmm15
        vmulss  xmm0, xmm2, xmm8
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [rsp+1F0h+bounds.midPoint+8], xmm1
        vmulss  xmm1, xmm14, dword ptr [rsi]
        vsubss  xmm2, xmm2, xmm10
        vmulss  xmm0, xmm2, xmm8
        vmovss  dword ptr [rsp+1F0h+bounds.halfSize+8], xmm0
        vaddss  xmm0, xmm1, dword ptr [r14]
        vmulss  xmm1, xmm14, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+1F0h+var_198], xmm0
        vaddss  xmm0, xmm1, dword ptr [r14+4]
        vmovss  dword ptr [rsp+1F0h+var_198+4], xmm0
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+8]
        vmulss  xmm1, xmm0, xmm8
        vmulss  xmm3, xmm1, xmm14
        vsubss  xmm0, xmm2, xmm3
        vmulss  xmm1, xmm0, xmm14
        vaddss  xmm3, xmm1, dword ptr [r14+8]
        vmovss  xmm0, dword ptr [rsp+1F0h+bounds.halfSize]
        vmaxss  xmm1, xmm0, dword ptr [rsp+1F0h+bounds.halfSize+8]
        vmovss  dword ptr [rsp+1F0h+bounds.halfSize+8], xmm1
        vmovss  dword ptr [rsp+1F0h+var_198+8], xmm3
        vmovaps xmm2, xmm6; height
      }
      v144 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &v199, &bounds, number, grenadeEntNum, 41972113);
      Debug_DrawGrenadeTraceLine(&start, &v199, *(float *)&_XMM2, &colorCyan, 1);
      if ( !v144 )
      {
        ThreadId = Physics_GetThreadId();
        Physics_DisableShapeCache(ThreadId, 1);
        G_Main_TraceCapsule(&results, &v199, vGoal, &bounds, number, 41972113);
        v146 = Physics_GetThreadId();
        Physics_DisableShapeCache(v146, 0);
        __asm { vmovaps xmm2, xmm6; height }
        Debug_DrawGrenadeTraceLine(&v199, vGoal, *(float *)&_XMM2, &colorCyan, 1);
        __asm
        {
          vmovss  xmm0, [rbp+0F0h+results.fraction]
          vcomiss xmm0, xmm15
        }
        if ( v30 )
        {
          EntityHitId = Trace_GetEntityHitId(&results);
          if ( EntityHitId == 2046 )
          {
            __asm
            {
              vmovss  xmm4, [rbp+0F0h+results.fraction]
              vmovss  xmm2, dword ptr [rdi]
              vsubss  xmm0, xmm2, dword ptr [rsp+1F0h+var_198]
              vmovss  xmm3, dword ptr [rdi+4]
              vmovss  xmm7, dword ptr [rdi+8]
              vmulss  xmm0, xmm0, xmm4
              vaddss  xmm1, xmm0, dword ptr [rsp+1F0h+var_198]
              vsubss  xmm0, xmm3, dword ptr [rsp+1F0h+var_198+4]
              vsubss  xmm6, xmm1, xmm2
              vmulss  xmm1, xmm0, xmm4
              vaddss  xmm2, xmm1, dword ptr [rsp+1F0h+var_198+4]
              vsubss  xmm0, xmm7, dword ptr [rsp+1F0h+var_198+8]
              vmulss  xmm1, xmm0, xmm4
              vsubss  xmm5, xmm2, xmm3
              vaddss  xmm2, xmm1, dword ptr [rsp+1F0h+var_198+8]
              vsubss  xmm4, xmm2, xmm7
              vmulss  xmm3, xmm5, xmm5
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
              vaddss  xmm5, xmm2, xmm1
              vcomiss xmm5, cs:__real@41800000
              vcomiss xmm5, cs:__real@44610000
            }
            goto LABEL_65;
          }
          sentient = level.gentities[EntityHitId].sentient;
          if ( !sentient || !pAI )
            goto LABEL_65;
          v172 = pAI->sentient;
          if ( !v172 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
            __debugbreak();
          if ( level.teammode == TEAMMODE_FFA )
          {
            v173 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
              _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
            else
              _RAX = Com_TeamsMP_GetAllTeamFlags();
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovsd  xmm1, qword ptr [rax+10h]
            }
            v177 = _RAX->array[6] & 0xFFEFFFFF;
            __asm
            {
              vmovups xmmword ptr [rbp+0F0h+result.array], xmm0
              vmovsd  qword ptr [rbp+0F0h+result.array+10h], xmm1
            }
            if ( v173 )
              result.array[0] &= ~0x8000000u;
            result.array[6] = v177 & 0xFF9FFFFF;
          }
          else
          {
            Com_Teams_GetEnemyTeamFlags(&result, v172->eTeam);
          }
          eTeam = (unsigned int)sentient->eTeam;
          if ( (unsigned int)eTeam >= 0xE0 )
          {
            LODWORD(contentMask) = 224;
            LODWORD(skipEntity1) = sentient->eTeam;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", skipEntity1, contentMask) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) == 0 )
            goto LABEL_65;
        }
        v112 = 1;
        goto LABEL_66;
      }
    }
  }
LABEL_65:
  v112 = 0;
LABEL_66:
  __asm
  {
    vmovaps xmm14, [rsp+1F0h+var_C0]
    vmovaps xmm12, [rsp+1F0h+var_B0]
    vmovaps xmm11, [rsp+1F0h+var_A0]
    vmovaps xmm10, [rsp+1F0h+var_90]
    vmovaps xmm8, [rsp+1F0h+var_70]
    vmovaps xmm7, [rsp+1F0h+var_60]
    vmovaps xmm6, [rsp+1F0h+var_50]
    vmovaps xmm9, [rsp+1F0h+var_80]
    vmovaps xmm15, [rsp+1F0h+var_D0]
  }
  return v112;
}

/*
==============
MagicGrenade_Internal
==============
*/
gentity_s *MagicGrenade_Internal(gentity_s *pSelf, ai_common_t *pAI, const vec3_t *origin, const vec3_t *vTargetPos, const Weapon *grenadeWeapon, int grenadeTime, int shouldThrow, bool bSticky)
{
  vec3_t vLand; 
  vec3_t dir; 

  if ( shouldThrow )
  {
    if ( bSticky )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r9]
        vmovss  xmm1, dword ptr [r9+4]
        vmovss  dword ptr [rsp+0A8h+vLand], xmm0
        vmovss  xmm0, dword ptr [r9+8]
        vmovss  dword ptr [rsp+0A8h+vLand+8], xmm0
        vmovss  dword ptr [rsp+0A8h+vLand+4], xmm1
      }
    }
    else
    {
      Grenade_GetTossPositions(origin, vTargetPos, &vLand, grenadeWeapon);
    }
    if ( !Grenade_CheckMinimumEnergyToss(pAI, 2047, origin, &vLand, &dir) && !Grenade_CheckMaximumEnergyToss(pAI, 2047, origin, &vLand, 0, &dir) && !Grenade_CheckMaximumEnergyToss(pAI, 2047, origin, &vLand, 1, &dir) && !Grenade_CheckGrenadeHintToss(pAI, 2047, origin, &vLand, &dir) )
    {
      Com_DPrintf(23, "MagicGrenade: Unable to throw grenade to target (probably too far or blocked)\n");
      return 0i64;
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0A8h+dir], xmm0
      vmovss  dword ptr [rsp+0A8h+dir+4], xmm0
      vmovss  dword ptr [rsp+0A8h+dir+8], xmm0
    }
  }
  return G_Missile_FireGrenade(pSelf, origin, &dir, grenadeWeapon, 0, WEAPON_HAND_DEFAULT, 1, grenadeTime, 1, level.time);
}

/*
==============
compare_desperate_hints
==============
*/
__int64 compare_desperate_hints(const void *pe0, const void *pe1)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm4, xmm0, dword ptr cs:g_vRefPos
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr cs:g_vRefPos+4
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm3, xmm0, dword ptr cs:g_vRefPos+8
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vmulss  xmm1, xmm3, xmm3
    vsubss  xmm3, xmm0, dword ptr cs:g_vRefPos
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm4, xmm0, dword ptr cs:g_vRefPos+8
    vmovaps [rsp+18h+var_18], xmm8
    vaddss  xmm8, xmm2, xmm1
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm2, xmm1, dword ptr cs:g_vRefPos+4
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm5, xmm3, xmm0
    vcomiss xmm8, xmm5
    vcomiss xmm8, xmm5
    vmovaps xmm8, [rsp+18h+var_18]
  }
  return 0i64;
}

