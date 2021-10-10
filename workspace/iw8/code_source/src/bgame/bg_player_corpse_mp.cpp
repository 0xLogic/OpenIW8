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
  double Float_Internal_DebugName; 
  float v9; 
  double v10; 
  float v11; 
  float v12; 
  double v13; 
  float v14; 
  float v15; 
  float v16; 
  double v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  PlayerCorpseMPViewZone result; 
  float v25; 
  float v26; 
  double v27; 

  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_corpseZone1Radius, "bg_corpseZone1Radius");
  v9 = *(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName;
  v10 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_corpseZone2Radius, "bg_corpseZone2Radius");
  v11 = *(float *)&v10;
  v12 = *(float *)&v10 * *(float *)&v10;
  v13 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_corpseZone2AngleDeg, "bg_corpseZone2AngleDeg");
  v14 = *(float *)&v13;
  v15 = *(float *)&v13 * 0.017453292;
  cosf_0(*(float *)&v13 * 0.017453292);
  v16 = v15;
  v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_corpseZone3Radius, "bg_corpseZone3Radius");
  v18 = *(float *)&v17;
  if ( v9 > (float)(*(float *)&v17 * *(float *)&v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_corpse_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(corpseZone1RadiusSq <= corpseZone3RadiusSq)", (const char *)&queryFormat, "corpseZone1RadiusSq <= corpseZone3RadiusSq") )
    __debugbreak();
  if ( (float)(*(float *)&v17 * *(float *)&v17) > v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_corpse_mp.cpp", 40, ASSERT_TYPE_ASSERT, "(corpseZone3RadiusSq <= corpseZone2RadiusSq)", (const char *)&queryFormat, "corpseZone3RadiusSq <= corpseZone2RadiusSq") )
    __debugbreak();
  if ( v14 >= 60.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_corpse_mp.cpp", 41, ASSERT_TYPE_ASSERT, "(corpseZone2AngleDeg < corpseZone3AngleDeg)", (const char *)&queryFormat, "corpseZone2AngleDeg < corpseZone3AngleDeg") )
    __debugbreak();
  v19 = corpseOrigin->v[0] - viewOrigin->v[0];
  v20 = corpseOrigin->v[1] - viewOrigin->v[1];
  v21 = corpseOrigin->v[2] - viewOrigin->v[2];
  v23 = (float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21);
  v22 = v23;
  if ( outDistSq )
    *outDistSq = v23;
  if ( v23 > v12 )
    return 5;
  if ( v23 <= v9 )
    return 1;
  v25 = fsqrt(v23);
  v26 = (float)((float)((float)(v20 * viewDir->v[1]) + (float)(v19 * viewDir->v[0])) + (float)(v21 * viewDir->v[2])) / v25;
  if ( v26 < 0.49999997 )
    return 5;
  if ( v26 >= v16 )
    return 2;
  if ( v22 <= (float)(*(float *)&v17 * *(float *)&v17) )
    return 3;
  v27 = I_fclamp((float)(v26 - v16) / (float)(0.49999997 - v16), 0.0, 1.0);
  result = PLAYER_CORPSE_ZONE_4;
  if ( v25 > (float)((float)((float)(1.0 - *(float *)&v27) * v11) + (float)(*(float *)&v27 * v18)) )
    return 5;
  return result;
}

