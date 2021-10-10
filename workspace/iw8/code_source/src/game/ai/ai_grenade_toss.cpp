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
void Debug_DrawGrenadeTraceLine(const vec3_t *start, const vec3_t *end, float height, const vec4_t *color, int depthTest)
{
  const dvar_t *v5; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t enda; 
  vec3_t starta; 

  v5 = DVARINT_g_drawGrenadeHints;
  if ( !DVARINT_g_drawGrenadeHints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawGrenadeHints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer > 0 )
  {
    G_DebugLineWithDuration(start, end, color, depthTest, 100);
    if ( height > 0.0 )
    {
      v9 = start->v[1];
      starta.v[0] = start->v[0];
      v10 = end->v[0];
      starta.v[1] = v9;
      v11 = end->v[1];
      enda.v[0] = v10;
      v12 = height + start->v[2];
      enda.v[1] = v11;
      v13 = height + end->v[2];
      starta.v[2] = v12;
      enda.v[2] = v13;
      G_DebugLineWithDuration(&starta, &enda, color, depthTest, 100);
    }
  }
}

/*
==============
G_DrawGrenadeHints
==============
*/
void G_DrawGrenadeHints(void)
{
  const dvar_t *v0; 
  int integer; 
  gentity_s *gentities; 
  unsigned int grenadeHintCount; 
  unsigned int v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t *v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  vec3_t end; 
  vec3_t start; 

  v0 = DVARINT_g_drawGrenadeHints;
  if ( !DVARINT_g_drawGrenadeHints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawGrenadeHints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  if ( integer > 0 )
  {
    gentities = level.gentities;
    if ( level.gentities->client )
    {
      grenadeHintCount = level.grenadeHintCount;
      v4 = 0;
      v5 = level.clients->ps.viewHeightCurrent + level.clients->ps.origin.v[2];
      v6 = level.clients->ps.origin.v[0];
      v7 = level.clients->ps.origin.v[1];
      if ( level.grenadeHintCount )
      {
        v8 = (float)(integer * integer);
        do
        {
          v9 = gentities->r.currentOrigin.v[0] - g_vGrenadeHint[v4].v[0];
          v10 = gentities->r.currentOrigin.v[1] - g_vGrenadeHint[v4].v[1];
          v11 = gentities->r.currentOrigin.v[2] - g_vGrenadeHint[v4].v[2];
          v12 = &g_vGrenadeHint[v4];
          if ( (float)((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11)) <= v8 )
          {
            G_DebugCircle(&g_vGrenadeHint[v4], 8.0, &colorRed, 1, 0, 0);
            G_DebugCircle(&g_vGrenadeHint[v4], 192.0, &colorOrange, 1, 0, 0);
            v13 = v12->v[0];
            v14 = LODWORD(v12->v[1]);
            v15 = v12->v[2];
            v16 = v14;
            v17 = v12->v[0] - v6;
            *(float *)&v16 = fsqrt((float)((float)((float)(*(float *)&v14 - v7) * (float)(*(float *)&v14 - v7)) + (float)(v17 * v17)) + (float)((float)(v15 - v5) * (float)(v15 - v5)));
            _XMM4 = v16;
            __asm
            {
              vcmpless xmm0, xmm4, cs:__real@80000000
              vblendvps xmm0, xmm4, xmm12, xmm0
            }
            *(float *)&_XMM4 = (float)((float)(*(float *)&v14 - v7) * (float)(1.0 / *(float *)&_XMM0)) * 192.0;
            v21 = (float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * -192.0;
            start.v[0] = *(float *)&_XMM4 + v12->v[0];
            start.v[1] = *(float *)&v14 + v21;
            end.v[1] = *(float *)&v14 - v21;
            start.v[2] = v15;
            end.v[0] = v13 - *(float *)&_XMM4;
            end.v[2] = v15;
            G_DebugLine(&start, &end, &colorOrange, 1);
            v22 = v12->v[2];
            v23 = v12->v[0];
            v24 = v12->v[1];
            start.v[2] = v22 + 192.0;
            end.v[2] = v22 - 192.0;
            start.v[0] = v23;
            start.v[1] = v24;
            end.v[0] = v23;
            end.v[1] = v24;
            G_DebugLine(&start, &end, &colorOrange, 1);
            grenadeHintCount = level.grenadeHintCount;
            gentities = level.gentities;
          }
          ++v4;
        }
        while ( v4 < grenadeHintCount );
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
  const dvar_t *v6; 
  int v7; 

  Profile_Begin(483);
  v6 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 570, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  if ( level.grenadeHintCount && (g_vRefPos = *vFrom, qsort(g_vGrenadeHint, level.grenadeHintCount, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_desperate_hints), v7 = 0, level.grenadeHintCount) )
  {
    while ( !Grenade_CheckMaximumEnergyToss(pAI, 2047, vFrom, &g_vGrenadeHint[v7], 0, vVelOut) )
    {
      if ( ++v7 >= level.grenadeHintCount )
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
char Grenade_CheckGrenadeHintToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  const dvar_t *v9; 
  unsigned int grenadeHintCount; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  double Float_Internal_DebugName; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  double v36; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  vec3_t vGoal; 

  Profile_Begin(482);
  v9 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 409, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  if ( ((LODWORD(vFrom->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
    __debugbreak();
  if ( ((LODWORD(vLand->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 412, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )") )
    __debugbreak();
  grenadeHintCount = level.grenadeHintCount;
  if ( level.grenadeHintCount )
  {
    v11 = vLand->v[0] - vFrom->v[0];
    v12 = vLand->v[1] - vFrom->v[1];
    v13 = vLand->v[2] - vFrom->v[2];
    v14 = 0i64;
    v40 = (float)(v12 * v12) + (float)(v11 * v11);
    v15 = fsqrt(v40);
    v41 = v11;
    v38 = v12;
    v39 = v13;
    while ( 1 )
    {
      v16 = vFrom->v[0];
      v17 = vFrom->v[1];
      v18 = g_vGrenadeHint[v14].v[0] - vFrom->v[0];
      v19 = g_vGrenadeHint[v14].v[2] - vFrom->v[2];
      v21 = LODWORD(g_vGrenadeHint[v14].v[1]);
      *(float *)&v21 = g_vGrenadeHint[v14].v[1] - v17;
      v20 = *(float *)&v21;
      if ( (float)((float)((float)(v18 * v11) + (float)(*(float *)&v21 * v12)) + (float)(v19 * v13)) >= 0.0 )
        break;
      v13 = v39;
LABEL_32:
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= grenadeHintCount )
        goto LABEL_36;
      v11 = v41;
    }
    v22 = (float)(*(float *)&v21 * *(float *)&v21) + (float)(v18 * v18);
    *(float *)&v21 = fsqrt(v22);
    _XMM6 = v21;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
    }
    v26 = (float)(1.0 / *(float *)&_XMM0) * v18;
    v27 = (float)(1.0 / *(float *)&_XMM0) * v20;
    if ( *(float *)&v21 < v15 && *(float *)&v21 != 0.0 )
    {
      v28 = vLand->v[0] - (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v18) * v15) + v16);
      vGoal.v[2] = vLand->v[2];
      v29 = vLand->v[1];
      v13 = v39;
      vGoal.v[1] = (float)(v27 * v15) + v17;
      vGoal.v[0] = (float)(v26 * v15) + v16;
      if ( (float)((float)((float)(v29 - vGoal.v[1]) * (float)(v29 - vGoal.v[1])) + (float)(v28 * v28)) > 36864.0 )
        goto LABEL_31;
      v30 = (float)(v39 * *(float *)&_XMM6) - (float)(v19 * v15);
      if ( v30 >= 0.0 )
        goto LABEL_31;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
      v32 = (float)(*(float *)&Float_Internal_DebugName * -0.5) / v30;
      v33 = (float)((float)(v40 * *(float *)&_XMM6) - (float)(v22 * v15)) * v32;
      v34 = fsqrt(v33);
      if ( v34 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 448, ASSERT_TYPE_ASSERT, "(fVelHorz != 0.0f)", (const char *)&queryFormat, "fVelHorz != 0.0f") )
        __debugbreak();
      v35 = (float)((float)((float)(v40 * v19) - (float)(v22 * v39)) * v32) / v34;
      v36 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_maxGrenadeThrowSpeed, "ai_maxGrenadeThrowSpeed");
      if ( (float)((float)(v35 * v35) + v33) <= (float)(*(float *)&v36 * *(float *)&v36) )
      {
        vVelOut->v[0] = v26 * v34;
        vVelOut->v[1] = v27 * v34;
        vVelOut->v[2] = v35;
        if ( Grenade_IsValidTrajectory(pAI, grenadeEntNum, vFrom, vVelOut, &vGoal) )
        {
          Profile_EndInternal(NULL);
          return 1;
        }
      }
      grenadeHintCount = level.grenadeHintCount;
    }
    v13 = v39;
LABEL_31:
    v12 = v38;
    goto LABEL_32;
  }
LABEL_36:
  Profile_EndInternal(NULL);
  return 0;
}

/*
==============
Grenade_CheckInfiniteEnergyToss
==============
*/
bool Grenade_CheckInfiniteEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  const dvar_t *v5; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  int v19; 
  float v20; 

  v5 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 600, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  if ( ((LODWORD(vFrom->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 602, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
    __debugbreak();
  if ( ((LODWORD(vLand->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 603, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )") )
    __debugbreak();
  v10 = vLand->v[0] - vFrom->v[0];
  v11 = vLand->v[1] - vFrom->v[1];
  v12 = vLand->v[2] - vFrom->v[2];
  v13 = (float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12);
  if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 607, ASSERT_TYPE_ASSERT, "(fTotalDistSqrd > 0)", (const char *)&queryFormat, "fTotalDistSqrd > 0") )
    __debugbreak();
  v14 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = fsqrt(v13) * v14->current.value;
  v16 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = fsqrt(v15 * 2.0) * (float)(1.0 / v16->current.value);
  if ( v17 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 612, ASSERT_TYPE_ASSERT, "(fTotalTime != 0.0f)", (const char *)&queryFormat, "fTotalTime != 0.0f") )
    __debugbreak();
  vVelOut->v[0] = (float)(1.0 / v17) * v10;
  vVelOut->v[1] = (float)(1.0 / v17) * v11;
  v18 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = LODWORD(vVelOut->v[0]) & 0x7F800000;
  v20 = (float)((float)(v18->current.value * 0.5) * v17) + (float)((float)(1.0 / v17) * v12);
  vVelOut->v[2] = v20;
  if ( (v19 == 2139095040 || (LODWORD(vVelOut->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v20) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 618, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] )") )
    __debugbreak();
  return Grenade_IsValidTrajectory(pAI, grenadeEntNum, vFrom, vVelOut, vLand);
}

/*
==============
Grenade_CheckMaximumEnergyToss
==============
*/
bool Grenade_CheckMaximumEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, int bLob, vec3_t *vVelOut)
{
  const dvar_t *v6; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  float value; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  int v30; 
  float v31; 

  v6 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 352, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  if ( ((LODWORD(vFrom->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 354, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
    __debugbreak();
  if ( ((LODWORD(vLand->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 355, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )") )
    __debugbreak();
  v11 = vLand->v[0] - vFrom->v[0];
  v12 = vLand->v[1] - vFrom->v[1];
  v14 = vLand->v[2] - vFrom->v[2];
  v13 = v14;
  v15 = (float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13);
  if ( v15 < 1.0 )
    return 0;
  v16 = DVARFLT_ai_maxGrenadeThrowSpeed;
  if ( !DVARFLT_ai_maxGrenadeThrowSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxGrenadeThrowSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  value = v16->current.value;
  v18 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = v14 * v18->current.value;
  v20 = DCONST_DVARFLT_bg_lowGravity;
  v22 = (float)(value * value) - v19;
  v21 = v22;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v23 = v20->current.value;
  v24 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = (float)(v22 * v22) - (float)((float)(v23 * v15) * v24->current.value);
  if ( v25 < 0.0 )
    return 0;
  v26 = DCONST_DVARFLT_bg_lowGravity;
  if ( bLob )
  {
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = fsqrt(v25) + v21;
  }
  else
  {
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = v21 - fsqrt(v25);
  }
  v28 = fsqrt(v27 * 2.0) * (float)(1.0 / v26->current.value);
  if ( v28 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 373, ASSERT_TYPE_ASSERT, "(fTotalTime != 0.0f)", (const char *)&queryFormat, "fTotalTime != 0.0f") )
    __debugbreak();
  vVelOut->v[0] = v11 * (float)(1.0 / v28);
  vVelOut->v[1] = v12 * (float)(1.0 / v28);
  v29 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v30 = LODWORD(vVelOut->v[0]) & 0x7F800000;
  v31 = (float)((float)(v29->current.value * 0.5) * v28) + (float)(v13 * (float)(1.0 / v28));
  vVelOut->v[2] = v31;
  if ( (v30 == 2139095040 || (LODWORD(vVelOut->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v31) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 379, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] )") )
    __debugbreak();
  return Grenade_IsValidTrajectory(pAI, grenadeEntNum, vFrom, vVelOut, vLand);
}

/*
==============
Grenade_CheckMinimumEnergyToss
==============
*/
bool Grenade_CheckMinimumEnergyToss(ai_common_t *pAI, int grenadeEntNum, const vec3_t *vFrom, const vec3_t *vLand, vec3_t *vVelOut)
{
  const dvar_t *v5; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  int v21; 
  float v22; 

  v5 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 312, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  if ( ((LODWORD(vFrom->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 314, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
    __debugbreak();
  if ( ((LODWORD(vLand->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vLand->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 315, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vLand )[0] ) && !IS_NAN( ( vLand )[1] ) && !IS_NAN( ( vLand )[2] )") )
    __debugbreak();
  v10 = vLand->v[0] - vFrom->v[0];
  v11 = vLand->v[1] - vFrom->v[1];
  v12 = vLand->v[2] - vFrom->v[2];
  v13 = fsqrt((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12));
  if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 319, ASSERT_TYPE_ASSERT, "(fTotalDist > 0)", (const char *)&queryFormat, "fTotalDist > 0") )
    __debugbreak();
  v14 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = (float)(v12 + v13) * v14->current.value;
  v16 = DVARFLT_ai_maxGrenadeThrowSpeed;
  if ( !DVARFLT_ai_maxGrenadeThrowSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxGrenadeThrowSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v15 > (float)(v16->current.value * v16->current.value) )
    return 0;
  v18 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = fsqrt((float)(v13 * 2.0) / v18->current.value);
  if ( v19 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 327, ASSERT_TYPE_ASSERT, "(fTotalTime != 0.0f)", (const char *)&queryFormat, "fTotalTime != 0.0f") )
    __debugbreak();
  vVelOut->v[0] = v10 * (float)(1.0 / v19);
  vVelOut->v[1] = v11 * (float)(1.0 / v19);
  v20 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = LODWORD(vVelOut->v[0]) & 0x7F800000;
  v22 = (float)((float)(v20->current.value * 0.5) * v19) + (float)(v12 * (float)(1.0 / v19));
  vVelOut->v[2] = v22;
  if ( (v21 == 2139095040 || (LODWORD(vVelOut->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v22) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 333, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelOut )[0] ) && !IS_NAN( ( vVelOut )[1] ) && !IS_NAN( ( vVelOut )[2] )") )
    __debugbreak();
  return Grenade_IsValidTrajectory(pAI, grenadeEntNum, vFrom, vVelOut, vLand);
}

/*
==============
Grenade_GetTossPositions
==============
*/
void Grenade_GetTossPositions(const vec3_t *vFrom, const vec3_t *vTargetPos, vec3_t *vLand, const Weapon *grenadeWPID)
{
  __int64 v4; 
  WeaponDef *v9; 
  bool detailTrace; 
  float v11; 
  float v12; 
  float v13; 
  unsigned int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 

  LODWORD(v4) = grenadeWPID->weaponIdx;
  if ( (unsigned int)v4 > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", grenadeWPID->weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v4 = (unsigned __int16)v4;
  if ( !bg_weaponDefs[(unsigned __int16)v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v9 = bg_weaponDefs[v4];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 50, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  detailTrace = BG_WeaponRadiusDamageDetailTrace(grenadeWPID, 0);
  v11 = vTargetPos->v[2];
  v12 = vTargetPos->v[0];
  v13 = vTargetPos->v[1];
  start.v[2] = v11 + 1.0;
  end.v[2] = v11 - 1.0;
  start.v[0] = v12;
  start.v[1] = v13;
  end.v[0] = v12;
  end.v[1] = v13;
  G_Missile_Trace(NULL, &results, &start, &end, &bounds_origin, 2047, 2047, 2065, detailTrace);
  if ( results.fraction == 1.0 )
    v14 = 0;
  else
    v14 = (results.surfaceFlags >> 19) & 0x3F;
  v15 = vTargetPos->v[2];
  v16 = vFrom->v[2];
  v17 = v9->parallelBounce[v14];
  v18 = 1.0 - (float)((float)((float)(v9->perpendicularBounce[v14] - v17) * 0.93970001) + v17);
  v19 = (float)(vTargetPos->v[1] - vFrom->v[1]) * v18;
  vLand->v[0] = (float)((float)(vTargetPos->v[0] - vFrom->v[0]) * v18) + vFrom->v[0];
  vLand->v[1] = v19 + vFrom->v[1];
  vLand->v[2] = (float)((float)(v15 - v16) * v18) + vFrom->v[2];
}

/*
==============
Grenade_GetTossPositionsFromHints
==============
*/
char Grenade_GetTossPositionsFromHints(const vec3_t *vFrom, const vec3_t *vTargetPos, vec3_t *vLand)
{
  const dvar_t *v6; 
  float v7; 
  unsigned int grenadeHintCount; 
  float v9; 
  float v10; 
  __int64 v11; 
  int v12; 
  float v13; 
  int v14; 
  float *v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v30; 
  __int128 v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  float v38; 
  float v39; 
  __int128 v40; 
  float v44; 
  __int128 v45; 
  float v46; 
  float v47; 
  __int128 v48; 
  float v52; 
  float v53; 
  __int128 v54; 
  float v58; 
  __int128 v59; 
  float v60; 
  float v61; 
  __int128 v62; 
  float v66; 
  float v67; 
  __int128 v68; 
  float v72; 
  float *v73; 
  float v74; 
  __int128 v75; 
  float v76; 
  float v77; 
  __int128 v78; 
  float v82; 
  float v83; 
  __int128 v84; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 

  Profile_Begin(481);
  v6 = DVARFLT_ai_debugGrenadeHintArc;
  if ( !DVARFLT_ai_debugGrenadeHintArc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGrenadeHintArc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = cosf_0((float)(v6->current.value * 0.0087266462) + 3.1415927);
  grenadeHintCount = level.grenadeHintCount;
  v94 = v7;
  v9 = v7;
  if ( !level.grenadeHintCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 484, ASSERT_TYPE_ASSERT, "(level.grenadeHintCount > 0)", (const char *)&queryFormat, "level.grenadeHintCount > 0") )
      __debugbreak();
    grenadeHintCount = level.grenadeHintCount;
  }
  v10 = FLOAT_3_4028235e38;
  v11 = 0i64;
  v12 = -1;
  if ( grenadeHintCount >= 4 )
  {
    v13 = vTargetPos->v[2];
    v14 = 2;
    v15 = &g_vGrenadeHint[1].v[1];
    do
    {
      if ( (float)(*(v15 - 2) + 10.0) >= v13 )
      {
        v16 = *(v15 - 4);
        v17 = *((unsigned int *)v15 - 3);
        v18 = v16 - vTargetPos->v[0];
        v20 = v17;
        v19 = *(float *)&v17 - vTargetPos->v[1];
        *(float *)&v20 = fsqrt((float)(v19 * v19) + (float)(v18 * v18));
        _XMM6 = v20;
        __asm
        {
          vcmpless xmm0, xmm6, xmm11
          vblendvps xmm0, xmm6, xmm9, xmm0
        }
        v89 = *(float *)&_XMM0;
        if ( *(float *)&v20 <= 192.0 )
        {
          v24 = v16 - vFrom->v[0];
          v26 = *((unsigned int *)v15 - 3);
          v25 = *(float *)&v17 - vFrom->v[1];
          *(float *)&v26 = fsqrt((float)(v25 * v25) + (float)(v24 * v24));
          _XMM2 = v26;
          __asm
          {
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
          }
          if ( (float)((float)((float)(v19 * (float)(1.0 / v89)) * (float)(v25 * (float)(1.0 / *(float *)&_XMM0))) + (float)((float)(v18 * (float)(1.0 / v89)) * (float)(v24 * (float)(1.0 / *(float *)&_XMM0)))) <= v9 && *(float *)&_XMM6 < v10 )
          {
            v12 = v11;
            v10 = *(float *)&_XMM6;
          }
        }
      }
      if ( (float)(v15[1] + 10.0) >= v13 )
      {
        v30 = *(v15 - 1);
        v31 = *(unsigned int *)v15;
        v32 = v30 - vTargetPos->v[0];
        v34 = v31;
        v33 = *(float *)&v31 - vTargetPos->v[1];
        *(float *)&v34 = fsqrt((float)(v33 * v33) + (float)(v32 * v32));
        _XMM8 = v34;
        __asm
        {
          vcmpless xmm0, xmm8, xmm11
          vblendvps xmm0, xmm8, xmm9, xmm0
        }
        v90 = *(float *)&_XMM0;
        if ( *(float *)&v34 <= 192.0 )
        {
          v38 = v30 - vFrom->v[0];
          v40 = *(unsigned int *)v15;
          v39 = *(float *)&v31 - vFrom->v[1];
          *(float *)&v40 = fsqrt((float)(v39 * v39) + (float)(v38 * v38));
          _XMM2 = v40;
          __asm
          {
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
          }
          if ( (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v39) * (float)((float)(1.0 / v90) * v33)) + (float)((float)(v38 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v32 * (float)(1.0 / v90)))) <= v94 && *(float *)&_XMM8 < v10 )
          {
            v12 = v14 - 1;
            v10 = *(float *)&_XMM8;
          }
        }
      }
      if ( (float)(v15[4] + 10.0) >= v13 )
      {
        v44 = v15[2];
        v45 = *((unsigned int *)v15 + 3);
        v46 = v44 - vTargetPos->v[0];
        v48 = v45;
        v47 = *(float *)&v45 - vTargetPos->v[1];
        *(float *)&v48 = fsqrt((float)(v47 * v47) + (float)(v46 * v46));
        _XMM8 = v48;
        __asm
        {
          vcmpless xmm0, xmm8, xmm11
          vblendvps xmm0, xmm8, xmm9, xmm0
        }
        v91 = *(float *)&_XMM0;
        if ( *(float *)&v48 <= 192.0 )
        {
          v52 = v44 - vFrom->v[0];
          v54 = *((unsigned int *)v15 + 3);
          v53 = *(float *)&v45 - vFrom->v[1];
          *(float *)&v54 = fsqrt((float)(v53 * v53) + (float)(v52 * v52));
          _XMM2 = v54;
          __asm
          {
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
          }
          if ( (float)((float)((float)(v53 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v47 * (float)(1.0 / v91))) + (float)((float)(v52 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v46 * (float)(1.0 / v91)))) <= v94 && *(float *)&_XMM8 < v10 )
          {
            v12 = v14;
            v10 = *(float *)&_XMM8;
          }
        }
      }
      if ( (float)(v15[7] + 10.0) < v13 )
        goto LABEL_30;
      v58 = v15[5];
      v59 = *((unsigned int *)v15 + 6);
      v60 = v58 - vTargetPos->v[0];
      v62 = v59;
      v61 = *(float *)&v59 - vTargetPos->v[1];
      *(float *)&v62 = fsqrt((float)(v61 * v61) + (float)(v60 * v60));
      _XMM8 = v62;
      __asm
      {
        vcmpless xmm0, xmm8, xmm11
        vblendvps xmm0, xmm8, xmm9, xmm0
      }
      v92 = *(float *)&_XMM0;
      if ( *(float *)&v62 > 192.0 )
      {
LABEL_30:
        v9 = v94;
      }
      else
      {
        v66 = v58 - vFrom->v[0];
        v68 = *((unsigned int *)v15 + 6);
        v67 = *(float *)&v59 - vFrom->v[1];
        *(float *)&v68 = fsqrt((float)(v67 * v67) + (float)(v66 * v66));
        _XMM2 = v68;
        __asm
        {
          vcmpless xmm0, xmm2, xmm11
          vblendvps xmm0, xmm2, xmm9, xmm0
        }
        v72 = 1.0 / *(float *)&_XMM0;
        *(float *)&_XMM0 = v61 * (float)(1.0 / v92);
        v9 = v94;
        if ( (float)((float)((float)(v67 * v72) * *(float *)&_XMM0) + (float)((float)(v66 * v72) * (float)(v60 * (float)(1.0 / v92)))) <= v94 && *(float *)&_XMM8 < v10 )
        {
          v12 = v14 + 1;
          v10 = *(float *)&_XMM8;
        }
      }
      v15 += 12;
      v11 = (unsigned int)(v11 + 4);
      v14 += 4;
    }
    while ( (unsigned int)v11 < grenadeHintCount - 3 );
  }
  if ( (unsigned int)v11 < grenadeHintCount )
  {
    v73 = &g_vGrenadeHint[v11].v[2];
    do
    {
      if ( (float)(*v73 + 10.0) >= vTargetPos->v[2] )
      {
        v74 = *(v73 - 2);
        v75 = *((unsigned int *)v73 - 1);
        v76 = v74 - vTargetPos->v[0];
        v78 = v75;
        v77 = *(float *)&v75 - vTargetPos->v[1];
        *(float *)&v78 = fsqrt((float)(v77 * v77) + (float)(v76 * v76));
        _XMM8 = v78;
        __asm
        {
          vcmpless xmm0, xmm8, xmm11
          vblendvps xmm0, xmm8, xmm9, xmm0
        }
        v93 = *(float *)&_XMM0;
        if ( *(float *)&v78 <= 192.0 )
        {
          v82 = v74 - vFrom->v[0];
          v84 = *((unsigned int *)v73 - 1);
          v83 = *(float *)&v75 - vFrom->v[1];
          *(float *)&v84 = fsqrt((float)(v83 * v83) + (float)(v82 * v82));
          _XMM2 = v84;
          __asm
          {
            vcmpless xmm0, xmm2, xmm11
            vblendvps xmm0, xmm2, xmm9, xmm0
          }
          if ( (float)((float)((float)(v83 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v77 * (float)(1.0 / v93))) + (float)((float)(v82 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v76 * (float)(1.0 / v93)))) <= v94 && *(float *)&_XMM8 < v10 )
          {
            v12 = v11;
            v10 = *(float *)&_XMM8;
          }
        }
      }
      v73 += 3;
      LODWORD(v11) = v11 + 1;
    }
    while ( (unsigned int)v11 < grenadeHintCount );
  }
  if ( v12 == -1 )
  {
    Profile_EndInternal(NULL);
    return 0;
  }
  else
  {
    vLand->v[0] = g_vGrenadeHint[v12].v[0];
    vLand->v[1] = g_vGrenadeHint[v12].v[1];
    vLand->v[2] = g_vGrenadeHint[v12].v[2];
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
  const dvar_t *v5; 
  bool v10; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  int v18; 
  __int128 v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  int number; 
  float v26; 
  __int128 v27; 
  float v28; 
  float v31; 
  int v32; 
  float v33; 
  double Float_Internal_DebugName; 
  int v35; 
  float v37; 
  double v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  double v43; 
  float v44; 
  int v47; 
  unsigned int ThreadId; 
  unsigned int v49; 
  unsigned __int16 EntityHitId; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  sentient_s *sentient; 
  sentient_s *v56; 
  bool v57; 
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v59; 
  double v60; 
  unsigned int v61; 
  unsigned __int64 eTeam; 
  __int64 skipEntity1; 
  __int64 contentMask; 
  vec3_t start; 
  vec3_t v66; 
  Bounds bounds; 
  vec3_t end; 
  bitarray<224> result; 
  trace_t results; 

  v5 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 125, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_lowGravity, \"bg_lowGravity\" ) > 0)", (const char *)&queryFormat, "Dconst_GetFloat( bg_lowGravity ) > 0") )
    __debugbreak();
  if ( ((LODWORD(vFrom->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vFrom->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 146, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vFrom )[0] ) && !IS_NAN( ( vFrom )[1] ) && !IS_NAN( ( vFrom )[2] )") )
    __debugbreak();
  if ( ((LODWORD(vVelocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vVelocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vVelocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 147, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vVelocity )[0] ) && !IS_NAN( ( vVelocity )[1] ) && !IS_NAN( ( vVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vVelocity )[0] ) && !IS_NAN( ( vVelocity )[1] ) && !IS_NAN( ( vVelocity )[2] )") )
    __debugbreak();
  if ( ((LODWORD(vGoal->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vGoal->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vGoal->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 148, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vGoal )[0] ) && !IS_NAN( ( vGoal )[1] ) && !IS_NAN( ( vGoal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vGoal )[0] ) && !IS_NAN( ( vGoal )[1] ) && !IS_NAN( ( vGoal )[2] )") )
    __debugbreak();
  v10 = vVelocity->v[2] > 0.0;
  v11 = DCONST_DVARFLT_bg_lowGravity;
  bounds.halfSize.v[1] = FLOAT_1_0;
  bounds.halfSize.v[2] = FLOAT_1_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  if ( v10 )
  {
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = vVelocity->v[2] / v11->current.value;
    v13 = DCONST_DVARFLT_bg_lowGravity;
    v14 = FLOAT_0_5;
    v15 = v12 * 0.5;
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v16 = LODWORD(vFrom->v[2]);
    *(float *)&v16 = (float)((float)((float)(vFrom->v[2] - vGoal->v[2]) * 2.0) / v13->current.value) + (float)(v12 * v12);
    if ( (LODWORD(v12) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 172, ASSERT_TYPE_SANITY, "( !IS_NAN( tApex ) )", (const char *)&queryFormat, "!IS_NAN( tApex )") )
      __debugbreak();
    if ( (LODWORD(v15) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 173, ASSERT_TYPE_SANITY, "( !IS_NAN( tMidNear ) )", (const char *)&queryFormat, "!IS_NAN( tMidNear )") )
      __debugbreak();
    if ( (v16 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 174, ASSERT_TYPE_SANITY, "( !IS_NAN( tDiscriminant ) )", (const char *)&queryFormat, "!IS_NAN( tDiscriminant )") )
      __debugbreak();
    if ( *(float *)&v16 <= 0.0 )
      return 0;
    *(float *)&v16 = fsqrt(*(float *)&v16) * 0.5;
    v17 = v16;
    if ( (v16 & 0x7F800000) != 2139095040 )
      goto LABEL_55;
    v18 = 180;
  }
  else
  {
    v12 = 0.0;
    v15 = 0.0;
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v19 = LODWORD(vFrom->v[2]);
    *(float *)&v19 = (float)((float)((float)(vFrom->v[2] - vGoal->v[2]) * 2.0) * v11->current.value) + (float)(vVelocity->v[2] * vVelocity->v[2]);
    if ( (v19 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( tDiscriminant ) )", (const char *)&queryFormat, "!IS_NAN( tDiscriminant )") )
      __debugbreak();
    if ( *(float *)&v19 <= 0.0 )
      return 0;
    v20 = DCONST_DVARFLT_bg_lowGravity;
    if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v14 = FLOAT_0_5;
    *(float *)&v19 = (float)((float)(fsqrt(*(float *)&v19) + vVelocity->v[2]) * 0.5) / v20->current.value;
    v17 = v19;
    if ( (v19 & 0x7F800000) != 2139095040 )
      goto LABEL_55;
    v18 = 194;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", v18, ASSERT_TYPE_SANITY, "( !IS_NAN( tHalfFarSegment ) )", (const char *)&queryFormat, "!IS_NAN( tHalfFarSegment )") )
    __debugbreak();
LABEL_55:
  v21 = *(float *)&v17 + v12;
  v22 = (float)(*(float *)&v17 + v12) + *(float *)&v17;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v22 * vVelocity->v[0]) + vFrom->v[0]) - vGoal->v[0]) & _xmm) <= 0.1 )
  {
    v23 = vFrom->v[1];
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&v17 + 1);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v22 * vVelocity->v[1]) + v23) - vGoal->v[1]) & _xmm) <= 0.1 )
    {
      number = 2047;
      if ( pAI )
        number = pAI->ent->s.number;
      if ( v12 <= 0.0 )
      {
        v37 = vFrom->v[2];
        start.v[0] = vFrom->v[0];
        v28 = FLOAT_N1_0;
        start.v[2] = v37;
        start.v[1] = v23;
      }
      else
      {
        *(double *)&v24 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
        v27 = v24;
        *(float *)&v27 = (float)((float)(*(float *)&v24 * 0.125) * v15) * v15;
        v26 = *(float *)&v27;
        if ( (v27 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 213, ASSERT_TYPE_SANITY, "( !IS_NAN( fMaxErrorNear ) )", (const char *)&queryFormat, "!IS_NAN( fMaxErrorNear )") )
          __debugbreak();
        v28 = FLOAT_N1_0;
        bounds.midPoint.v[2] = (float)((float)(*(float *)&v27 + 1.0) * v14) - v14;
        *(float *)&v27 = (float)((float)(*(float *)&v27 + 1.0) - -1.0) * v14;
        _XMM0 = v27;
        __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+1F0h+bounds.halfSize] }
        *(float *)&_XMM0 = v15 * vVelocity->v[0];
        bounds.halfSize.v[2] = *(float *)&_XMM1;
        v31 = v15 * vVelocity->v[1];
        end.v[0] = *(float *)&_XMM0 + vFrom->v[0];
        end.v[1] = v31 + vFrom->v[1];
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
        end.v[2] = (float)((float)((float)(*(float *)&_XMM0 * 1.5) * v15) * v15) + vFrom->v[2];
        v32 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, vFrom, &end, &bounds, number, grenadeEntNum, 41972113);
        Debug_DrawGrenadeTraceLine(vFrom, &end, v26, &colorCyan, 1);
        if ( v32 )
          return 0;
        v33 = v12 * vVelocity->v[1];
        start.v[0] = (float)(v12 * vVelocity->v[0]) + vFrom->v[0];
        start.v[1] = v33 + vFrom->v[1];
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
        start.v[2] = (float)((float)((float)(*(float *)&Float_Internal_DebugName * v14) * v12) * v12) + vFrom->v[2];
        v35 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &end, &start, &bounds, number, grenadeEntNum, 41972113);
        Debug_DrawGrenadeTraceLine(&end, &start, v26, &colorCyan, 1);
        if ( v35 )
          return 0;
      }
      v38 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
      v40 = (float)((float)(*(float *)&v38 * 0.125) * *(float *)&v17) * *(float *)&v17;
      v39 = v40;
      if ( (LODWORD(v40) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_grenade_toss.cpp", 248, ASSERT_TYPE_SANITY, "( !IS_NAN( fMaxErrorFar ) )", (const char *)&queryFormat, "!IS_NAN( fMaxErrorFar )") )
        __debugbreak();
      bounds.midPoint.v[2] = (float)((float)(v40 + 1.0) * v14) - v14;
      v41 = v21 * vVelocity->v[0];
      bounds.halfSize.v[2] = (float)((float)(v40 + 1.0) - v28) * v14;
      v42 = v21 * vVelocity->v[1];
      v66.v[0] = v41 + vFrom->v[0];
      v66.v[1] = v42 + vFrom->v[1];
      v43 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_lowGravity, "bg_lowGravity");
      v44 = (float)((float)(vVelocity->v[2] - (float)((float)(*(float *)&v43 * v14) * v21)) * v21) + vFrom->v[2];
      _XMM0 = LODWORD(bounds.halfSize.v[0]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+1F0h+bounds.halfSize+8] }
      bounds.halfSize.v[2] = *(float *)&_XMM1;
      v66.v[2] = v44;
      v47 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &v66, &bounds, number, grenadeEntNum, 41972113);
      Debug_DrawGrenadeTraceLine(&start, &v66, v39, &colorCyan, 1);
      if ( !v47 )
      {
        ThreadId = Physics_GetThreadId();
        Physics_DisableShapeCache(ThreadId, 1);
        G_Main_TraceCapsule(&results, &v66, vGoal, &bounds, number, 41972113);
        v49 = Physics_GetThreadId();
        Physics_DisableShapeCache(v49, 0);
        Debug_DrawGrenadeTraceLine(&v66, vGoal, v39, &colorCyan, 1);
        if ( results.fraction >= 1.0 )
          return 1;
        EntityHitId = Trace_GetEntityHitId(&results);
        if ( EntityHitId == 2046 )
        {
          v51 = (float)((float)((float)(vGoal->v[0] - v66.v[0]) * results.fraction) + v66.v[0]) - vGoal->v[0];
          v52 = (float)((float)((float)(vGoal->v[1] - v66.v[1]) * results.fraction) + v66.v[1]) - vGoal->v[1];
          v53 = (float)((float)((float)(vGoal->v[2] - v66.v[2]) * results.fraction) + v66.v[2]) - vGoal->v[2];
          v54 = (float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53);
          if ( v54 >= 16.0 )
            return v54 < 900.0 && results.normal.v[2] > v14;
          return 1;
        }
        sentient = level.gentities[EntityHitId].sentient;
        if ( sentient && pAI )
        {
          v56 = pAI->sentient;
          if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
            __debugbreak();
          if ( level.teammode == TEAMMODE_FFA )
          {
            v57 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
              AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
            else
              AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
            v59 = *(_OWORD *)AllCombatTeamFlags->array;
            v60 = *(double *)&AllCombatTeamFlags->array[4];
            v61 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
            *(_OWORD *)result.array = v59;
            *(double *)&result.array[4] = v60;
            if ( v57 )
              result.array[0] &= ~0x8000000u;
            result.array[6] = v61 & 0xFF9FFFFF;
          }
          else
          {
            Com_Teams_GetEnemyTeamFlags(&result, v56->eTeam);
          }
          eTeam = (unsigned int)sentient->eTeam;
          if ( (unsigned int)eTeam >= 0xE0 )
          {
            LODWORD(contentMask) = 224;
            LODWORD(skipEntity1) = sentient->eTeam;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", skipEntity1, contentMask) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) != 0 )
            return 1;
        }
      }
    }
  }
  return 0;
}

/*
==============
MagicGrenade_Internal
==============
*/
gentity_s *MagicGrenade_Internal(gentity_s *pSelf, ai_common_t *pAI, const vec3_t *origin, const vec3_t *vTargetPos, const Weapon *grenadeWeapon, int grenadeTime, int shouldThrow, bool bSticky)
{
  float v11; 
  vec3_t vLand; 
  vec3_t dir; 

  if ( shouldThrow )
  {
    if ( bSticky )
    {
      v11 = vTargetPos->v[1];
      vLand.v[0] = vTargetPos->v[0];
      vLand.v[2] = vTargetPos->v[2];
      vLand.v[1] = v11;
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
    dir.v[0] = 0.0;
    dir.v[1] = 0.0;
    dir.v[2] = 0.0;
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
  float v2; 
  float v3; 

  v2 = (float)((float)((float)(*((float *)pe0 + 1) - g_vRefPos.v[1]) * (float)(*((float *)pe0 + 1) - g_vRefPos.v[1])) + (float)((float)(*(float *)pe0 - g_vRefPos.v[0]) * (float)(*(float *)pe0 - g_vRefPos.v[0]))) + (float)((float)(*((float *)pe0 + 2) - g_vRefPos.v[2]) * (float)(*((float *)pe0 + 2) - g_vRefPos.v[2]));
  v3 = (float)((float)((float)(*((float *)pe1 + 1) - g_vRefPos.v[1]) * (float)(*((float *)pe1 + 1) - g_vRefPos.v[1])) + (float)((float)(*(float *)pe1 - g_vRefPos.v[0]) * (float)(*(float *)pe1 - g_vRefPos.v[0]))) + (float)((float)(*((float *)pe1 + 2) - g_vRefPos.v[2]) * (float)(*((float *)pe1 + 2) - g_vRefPos.v[2]));
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFi64;
}

