/*
==============
BG_GetHudOutlineDef
==============
*/

const HudOutlineDef *__fastcall BG_GetHudOutlineDef(int hudOutlineIndex)
{
  return ?BG_GetHudOutlineDef@@YAPEBUHudOutlineDef@@H@Z(hudOutlineIndex);
}

/*
==============
BG_HudOutline_ClearDefs
==============
*/

void BG_HudOutline_ClearDefs(void)
{
  ?BG_HudOutline_ClearDefs@@YAXXZ();
}

/*
==============
BG_HudOutline_ShouldDrawOnEnt
==============
*/

bool __fastcall BG_HudOutline_ShouldDrawOnEnt(const HudOutlineDef *hudOutlineDef, const BgHandler *handler, const playerState_s *localClientPs, const entityState_t *outlinedEnt)
{
  return ?BG_HudOutline_ShouldDrawOnEnt@@YA_NPEBUHudOutlineDef@@PEBVBgHandler@@PEBUplayerState_s@@PEBUentityState_t@@@Z(hudOutlineDef, handler, localClientPs, outlinedEnt);
}

/*
==============
BG_GetHudOutlineDefFromPlayerState
==============
*/

const HudOutlineDef *__fastcall BG_GetHudOutlineDefFromPlayerState(const playerState_s *ps, unsigned int outlineIndex)
{
  return ?BG_GetHudOutlineDefFromPlayerState@@YAPEBUHudOutlineDef@@PEBUplayerState_s@@I@Z(ps, outlineIndex);
}

/*
==============
BG_HudOutline_GetDefIndex
==============
*/

bool __fastcall BG_HudOutline_GetDefIndex(const char *hudOutlineAssetName, unsigned int *outIndex)
{
  return ?BG_HudOutline_GetDefIndex@@YA_NPEBDAEAI@Z(hudOutlineAssetName, outIndex);
}

/*
==============
BG_HudOutline_GetColor
==============
*/

unsigned int __fastcall BG_HudOutline_GetColor(const HudOutlineDef *hudOutlineDef, const int outlineStartTime, const int currentTime, const vec3_t *playerViewOrigin, const vec3_t *outlinedEntityOrigin)
{
  return ?BG_HudOutline_GetColor@@YAIPEBUHudOutlineDef@@HHAEBTvec3_t@@1@Z(hudOutlineDef, outlineStartTime, currentTime, playerViewOrigin, outlinedEntityOrigin);
}

/*
==============
BG_HudOutline_InitDefs
==============
*/

void __fastcall BG_HudOutline_InitDefs(bool isFullInit)
{
  ?BG_HudOutline_InitDefs@@YAX_N@Z(isFullInit);
}

/*
==============
BG_GetHudOutlineDef
==============
*/
const HudOutlineDef *BG_GetHudOutlineDef(int hudOutlineIndex)
{
  __int64 v1; 
  unsigned int v2; 
  bool v3; 
  const HudOutlineDef **v4; 
  unsigned int v6; 
  int v7; 

  v1 = hudOutlineIndex;
  v2 = hudOutlineIndex - 1;
  if ( v2 >= 0x40 )
  {
    v7 = 64;
    v6 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 90, ASSERT_TYPE_ASSERT, "(unsigned)( hudOutlineIndex ) < (unsigned)( ( sizeof( *array_counter( s_hudOutlineDefs ) ) + 0 ) )", "hudOutlineIndex doesn't index ARRAY_COUNT( s_hudOutlineDefs )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !s_hudOutlinesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 91, ASSERT_TYPE_ASSERT, "(s_hudOutlinesInitialized)", (const char *)&queryFormat, "s_hudOutlinesInitialized") )
    __debugbreak();
  v3 = s_hudOutlineDefs[v1 - 1] == NULL;
  v4 = &s_hudOutlineDefs[v1 - 1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 92, ASSERT_TYPE_ASSERT, "(s_hudOutlineDefs[hudOutlineIndex])", (const char *)&queryFormat, "s_hudOutlineDefs[hudOutlineIndex]") )
    __debugbreak();
  return *v4;
}

/*
==============
BG_GetHudOutlineDefFromPlayerState
==============
*/
const HudOutlineDef *BG_GetHudOutlineDefFromPlayerState(const playerState_s *ps, unsigned int outlineIndex)
{
  __int64 v4; 
  unsigned int v5; 
  ClientOutlineData *p_outlineData; 
  unsigned int v7; 
  int v8; 
  int v9; 
  bool v11; 
  const HudOutlineDef **v12; 
  __int64 v13; 
  __int64 v14; 
  int v15[6]; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 101, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = 0i64;
  v5 = 6 * outlineIndex;
  p_outlineData = &ps->outlineData;
  do
  {
    if ( !p_outlineData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    if ( v5 >= 0x180 )
    {
      LODWORD(v14) = 384;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v7 = p_outlineData->bits[(__int64)(int)v5 >> 5];
    v8 = _bittest((const int *)&v7, v5++ & 0x1F);
    v15[v4++] = v8;
  }
  while ( v4 < 6 );
  v9 = v15[0] | (2 * (v15[1] | (2 * (v15[2] | (2 * (v15[3] | (2 * (v15[4] | (2 * v15[5])))))))));
  if ( !v9 )
    return 0i64;
  if ( (unsigned int)(v9 - 1) >= 0x40 )
  {
    LODWORD(v14) = 64;
    LODWORD(v13) = v9 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 90, ASSERT_TYPE_ASSERT, "(unsigned)( hudOutlineIndex ) < (unsigned)( ( sizeof( *array_counter( s_hudOutlineDefs ) ) + 0 ) )", "hudOutlineIndex doesn't index ARRAY_COUNT( s_hudOutlineDefs )\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !s_hudOutlinesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 91, ASSERT_TYPE_ASSERT, "(s_hudOutlinesInitialized)", (const char *)&queryFormat, "s_hudOutlinesInitialized") )
    __debugbreak();
  v11 = s_hudOutlineDefs[v9 - 1] == NULL;
  v12 = &s_hudOutlineDefs[v9 - 1];
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 92, ASSERT_TYPE_ASSERT, "(s_hudOutlineDefs[hudOutlineIndex])", (const char *)&queryFormat, "s_hudOutlineDefs[hudOutlineIndex]") )
    __debugbreak();
  return *v12;
}

/*
==============
BG_HudOutline_ClearDefs
==============
*/
void BG_HudOutline_ClearDefs(void)
{
  s_hudOutlinesInitialized = 0;
  memset_0(s_hudOutlineDefs, 0, sizeof(s_hudOutlineDefs));
}

/*
==============
BG_HudOutline_GetColor
==============
*/
__int64 BG_HudOutline_GetColor(const HudOutlineDef *hudOutlineDef, const int outlineStartTime, const int currentTime, const vec3_t *playerViewOrigin, const vec3_t *outlinedEntityOrigin)
{
  bool fadeOverTimeEnable; 
  bool distanceFadeEnable; 
  __m128 v14; 
  float v17; 
  float v19; 
  float v20; 
  float v21; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  float v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  bool v34; 
  __m128 v35; 
  float fadeOverTimeMinAlpha; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v45; 
  int v49; 
  int v50; 
  int v52; 
  int v54; 
  float v55; 
  __m128 v56; 

  if ( !hudOutlineDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 277, ASSERT_TYPE_ASSERT, "(hudOutlineDef)", (const char *)&queryFormat, "hudOutlineDef") )
    __debugbreak();
  fadeOverTimeEnable = hudOutlineDef->fadeOverTimeEnable;
  distanceFadeEnable = hudOutlineDef->distanceFadeEnable;
  if ( !fadeOverTimeEnable && !distanceFadeEnable )
    return hudOutlineDef->outlineColor;
  _XMM0 = hudOutlineDef->outlineColor;
  __asm { vpmovzxbd xmm1, xmm0 }
  v56 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
  v14 = _mm_shuffle_ps(v56, v56, 255);
  LODWORD(_XMM9) = v14.m128_i32[0];
  _XMM6 = v14;
  v17 = FLOAT_1_0;
  if ( distanceFadeEnable )
  {
    _XMM5 = LODWORD(hudOutlineDef->distanceFadeEndDistance);
    v19 = outlinedEntityOrigin->v[1] - playerViewOrigin->v[1];
    v20 = outlinedEntityOrigin->v[2] - playerViewOrigin->v[2];
    v21 = fsqrt((float)((float)(v19 * v19) + (float)((float)(outlinedEntityOrigin->v[0] - playerViewOrigin->v[0]) * (float)(outlinedEntityOrigin->v[0] - playerViewOrigin->v[0]))) + (float)(v20 * v20));
    if ( v21 <= hudOutlineDef->distanceFadeStartDistance || v21 >= *(float *)&_XMM5 )
    {
      __asm
      {
        vcmpless xmm0, xmm5, xmm1
        vblendvps xmm0, xmm6, xmm9, xmm0
      }
      v55 = *(float *)&_XMM0;
    }
    __asm { vminss  xmm9, xmm6, xmm2 }
    v17 = *(float *)&_XMM9;
  }
  if ( fadeOverTimeEnable )
  {
    v24 = currentTime - outlineStartTime;
    v25 = (int)(float)(1000.0 * hudOutlineDef->fadeOverTimeOutTime);
    v26 = (int)(float)(1000.0 * hudOutlineDef->fadeOverTimeMaxAlphaTime);
    v27 = (int)(float)(1000.0 * hudOutlineDef->fadeOverTimeInTime);
    v28 = v27 + v26 + v25;
    if ( hudOutlineDef->fadeOverTimeLooping )
    {
      v29 = (float)(v27 + v25 + v26 - (int)(float)(hudOutlineDef->fadeOverTimeMinAlphaTime * -1000.0));
      v24 = (int)(float)(modff((float)v24 / v29, &v55) * v29);
    }
    _XMM6 = v14;
    if ( v24 < v27 && (float)v27 > 0.0 )
    {
      v30 = 0i64;
      v30.m128_f32[0] = (float)v24 / (float)v27;
      v14 = v30;
LABEL_24:
      v32.m128_u64[1] = v14.m128_u64[1];
      *(double *)v32.m128_u64 = I_fclamp(v14.m128_f32[0], 0.0, 1.0);
      v33 = v32;
      v34 = v32.m128_f32[0] == 1.0;
      v35 = _XMM6;
      if ( !v34 )
      {
        fadeOverTimeMinAlpha = hudOutlineDef->fadeOverTimeMinAlpha;
        switch ( hudOutlineDef->fadeOverTimeCurveType )
        {
          case 1u:
            v37 = v33;
            v37.m128_f32[0] = (float)(v33.m128_f32[0] * v33.m128_f32[0]) * v33.m128_f32[0];
            v33 = v37;
            break;
          case 2u:
            v38 = v33;
            v38.m128_f32[0] = (float)((float)((float)(v33.m128_f32[0] - 1.0) * (float)(v33.m128_f32[0] - 1.0)) * (float)(v33.m128_f32[0] - 1.0)) + 1.0;
            v33 = v38;
            break;
          case 3u:
            v39 = v33;
            v39.m128_f32[0] = (float)((float)(v33.m128_f32[0] * v33.m128_f32[0]) * v33.m128_f32[0]) * v33.m128_f32[0];
            v33 = v39;
            break;
          case 4u:
            v40 = (__m128)LODWORD(FLOAT_1_0);
            v40.m128_f32[0] = 1.0 - (float)((float)((float)((float)(v33.m128_f32[0] - 1.0) * (float)(v33.m128_f32[0] - 1.0)) * (float)(v33.m128_f32[0] - 1.0)) * (float)(v33.m128_f32[0] - 1.0));
            v33 = v40;
            break;
          case 5u:
            v41 = (__m128)LODWORD(FLOAT_2_0);
            v41.m128_f32[0] = powf_0(2.0, (float)(v33.m128_f32[0] - 1.0) * 10.0);
            v33 = v41;
            break;
          case 6u:
            v42 = (__m128)LODWORD(FLOAT_1_0);
            v42.m128_f32[0] = 1.0 - powf_0(2.0, v33.m128_f32[0] * -10.0);
            v33 = v42;
            break;
          default:
            break;
        }
        v43 = v33;
        v43.m128_f32[0] = (float)(v33.m128_f32[0] * (float)(_XMM6.m128_f32[0] - fadeOverTimeMinAlpha)) + fadeOverTimeMinAlpha;
        v35 = v43;
      }
      v45 = v35;
      v45.m128_f32[0] = v35.m128_f32[0] * v17;
      _XMM0 = v45;
      __asm { vminss  xmm9, xmm0, xmm9 }
      goto LABEL_34;
    }
    if ( v24 > v26 + v27 )
    {
      if ( v24 >= v28 )
        goto LABEL_23;
      if ( (float)v25 > 0.0 )
      {
        v31 = (__m128)LODWORD(FLOAT_1_0);
        v31.m128_f32[0] = 1.0 - (float)((float)(v24 - v26 - v27) / (float)v25);
        v14 = v31;
        goto LABEL_24;
      }
    }
    if ( v24 < v28 )
      goto LABEL_24;
LABEL_23:
    v14 = 0i64;
    goto LABEL_24;
  }
LABEL_34:
  if ( *(float *)&_XMM9 == _XMM6.m128_f32[0] )
    return hudOutlineDef->outlineColor;
  _XMM8 = 0i64;
  __asm
  {
    vroundss xmm3, xmm8, xmm2, 1
    vroundss xmm1, xmm8, xmm3, 1
  }
  v49 = I_clamp((int)*(float *)&_XMM3, 0, 255);
  v50 = I_clamp((int)*(float *)&_XMM1, 0, 255);
  __asm { vroundss xmm1, xmm8, xmm3, 1 }
  v52 = v50;
  __asm { vroundss xmm0, xmm8, xmm2, 1 }
  v54 = I_clamp((int)*(float *)&_XMM1, 0, 255);
  return v49 | ((v52 | ((v54 | (unsigned int)(I_clamp((int)*(float *)&_XMM0, 0, 255) << 8)) << 8)) << 8);
}

/*
==============
BG_HudOutline_GetDefIndex
==============
*/
bool BG_HudOutline_GetDefIndex(const char *hudOutlineAssetName, unsigned int *outIndex)
{
  __int64 v4; 
  const char *name; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  bool result; 
  __int64 v11; 

  if ( (!hudOutlineAssetName || !*hudOutlineAssetName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 127, ASSERT_TYPE_ASSERT, "(hudOutlineAssetName && *hudOutlineAssetName)", (const char *)&queryFormat, "hudOutlineAssetName && *hudOutlineAssetName") )
    __debugbreak();
  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_HUDOUTLINE, hudOutlineAssetName, outIndex) )
  {
    if ( *outIndex >= 0x40 )
    {
      LODWORD(v11) = 64;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 131, ASSERT_TYPE_ASSERT, "( outIndex < (1<<6) )", "Max. no. of Hud Outline defs reached. We allow for max %d", v11) )
        __debugbreak();
    }
    if ( !s_hudOutlineDefs[*outIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 132, ASSERT_TYPE_ASSERT, "( s_hudOutlineDefs[outIndex] != nullptr )", "Hud Outline def is null") )
      __debugbreak();
    v4 = 0x7FFFFFFFi64;
    name = s_hudOutlineDefs[*outIndex]->name;
    if ( !hudOutlineAssetName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(hudOutlineAssetName - name);
    while ( 1 )
    {
      v7 = name[(_QWORD)v6];
      v8 = v4;
      v9 = *name++;
      --v4;
      if ( !v8 )
        break;
      if ( v7 != v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 133, ASSERT_TYPE_ASSERT, "( !I_strcmp( hudOutlineAssetName, s_hudOutlineDefs[outIndex]->name ) )", "Hud Outline name mismatch") )
          __debugbreak();
        break;
      }
      if ( !v7 )
      {
        ++*outIndex;
        return 1;
      }
    }
    ++*outIndex;
    return 1;
  }
  else
  {
    Com_PrintError(1, "BG_HudOutline_GetDefIndex: Unknown Hud Outline definition '%s'\n", hudOutlineAssetName);
    result = 0;
    *outIndex = 0;
  }
  return result;
}

/*
==============
BG_HudOutline_InitDefs
==============
*/
void BG_HudOutline_InitDefs(bool isFullInit)
{
  if ( isFullInit )
  {
    NetConstStrings_CallForAllHudOutlineStrings(BG_HudOutline_LoadCache_Callback);
    s_hudOutlinesInitialized = 1;
  }
  else
  {
    if ( !s_hudOutlinesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 67, ASSERT_TYPE_ASSERT, "(s_hudOutlinesInitialized)", (const char *)&queryFormat, "s_hudOutlinesInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllHudOutlineStrings(BG_HudOutline_Validate_Callback);
  }
}

/*
==============
BG_HudOutline_LoadCache_Callback
==============
*/
void BG_HudOutline_LoadCache_Callback(const unsigned int hudOutlineIndex, const char *hudOutlineName)
{
  const HudOutlineDef *v2; 
  __int64 v3; 

  v2 = NULL;
  v3 = hudOutlineIndex;
  if ( !hudOutlineName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 37, ASSERT_TYPE_ASSERT, "(hudOutlineName)", (const char *)&queryFormat, "hudOutlineName") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x3F )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CBA3D0, 5297i64);
  if ( *hudOutlineName )
    v2 = HudOutline_Register(hudOutlineName);
  s_hudOutlineDefs[v3] = v2;
}

/*
==============
BG_HudOutline_ShouldDrawOnEnt
==============
*/
char BG_HudOutline_ShouldDrawOnEnt(const HudOutlineDef *hudOutlineDef, const BgHandler *handler, const playerState_s *localClientPs, const entityState_t *outlinedEnt)
{
  int v8; 
  int v9; 
  bool v10; 
  int LinkedVehicle; 

  if ( !hudOutlineDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 183, ASSERT_TYPE_ASSERT, "(hudOutlineDef)", (const char *)&queryFormat, "hudOutlineDef") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 184, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !localClientPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 185, ASSERT_TYPE_ASSERT, "(localClientPs)", (const char *)&queryFormat, "localClientPs") )
    __debugbreak();
  if ( !outlinedEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 186, ASSERT_TYPE_ASSERT, "(outlinedEnt)", (const char *)&queryFormat, "outlinedEnt") )
    __debugbreak();
  if ( ((outlinedEnt->eType - 1) & 0xFFEF) != 0 )
  {
    if ( hudOutlineDef->drawOnLocalPlayerVehicle )
      return 1;
    LinkedVehicle = GetLinkedVehicle(handler, localClientPs->clientNum);
    if ( hudOutlineDef->drawOnLocalPlayerVehicle || LinkedVehicle == 2047 )
      return 1;
    v10 = LinkedVehicle == outlinedEnt->number;
    goto LABEL_30;
  }
  if ( !hudOutlineDef->drawOnLocalPlayerCharacter && outlinedEnt->number == localClientPs->clientNum )
    return 0;
  v8 = 2047;
  v9 = 2047;
  if ( !hudOutlineDef->drawOnVehicleOccupants || !hudOutlineDef->drawOnLocalPlayerVehicleOccupants )
  {
    v8 = GetLinkedVehicle(handler, outlinedEnt->clientNum);
    if ( !hudOutlineDef->drawOnLocalPlayerVehicleOccupants )
      v9 = GetLinkedVehicle(handler, localClientPs->clientNum);
  }
  if ( !hudOutlineDef->drawOnVehicleOccupants && v8 != 2047 )
    return 0;
  if ( !hudOutlineDef->drawOnLocalPlayerVehicleOccupants && v9 != 2047 && v8 != 2047 )
  {
    v10 = v9 == v8;
LABEL_30:
    if ( v10 )
      return 0;
  }
  return 1;
}

/*
==============
BG_HudOutline_Validate_Callback
==============
*/
void BG_HudOutline_Validate_Callback(const unsigned int hudOutlineIndex, const char *hudOutlineName)
{
  __int64 v2; 
  const char *v3; 
  const HudOutlineDef **v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = hudOutlineIndex;
  v3 = hudOutlineName;
  if ( !hudOutlineName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 25, ASSERT_TYPE_ASSERT, "(hudOutlineName)", (const char *)&queryFormat, "hudOutlineName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x3F )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 26, ASSERT_TYPE_ASSERT, "(unsigned)( hudOutlineIndex ) < (unsigned)( ((1<<6)-1) )", "hudOutlineIndex doesn't index INVALID_CARRYOBJECT_DEF\n\t%i not in [0, %i)", v13, 63) )
      __debugbreak();
  }
  v4 = &s_hudOutlineDefs[v2];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 28, ASSERT_TYPE_ASSERT, "(s_hudOutlineDefs[hudOutlineIndex])", (const char *)&queryFormat, "s_hudOutlineDefs[hudOutlineIndex]") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = (*v4)->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 29, ASSERT_TYPE_ASSERT, "(!I_stricmp( s_hudOutlineDefs[hudOutlineIndex]->name, hudOutlineName ))", "%s\n\tInvalid Hud Outline asset mapping", "!I_stricmp( s_hudOutlineDefs[hudOutlineIndex]->name, hudOutlineName )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

/*
==============
GetLinkedVehicle
==============
*/
__int64 GetLinkedVehicle(const BgHandler *handler, const int entNumber)
{
  __int64 v2; 
  CgStatic *v5; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v7; 
  int linkedEntNum; 
  int v9; 
  bool v10; 
  __int64 result; 

  v2 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v5 = *(CgStatic **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 272i64);
  if ( v5->IsClient(v5) )
    CharacterInfo = CgStatic::GetCharacterInfo(v5, entNumber);
  else
    CharacterInfo = (const characterInfo_t *)v5->GetClientInfo(v5, entNumber);
  v7 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 150, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !BG_IsPlayingVehicleOccupancyAnims(v7) )
    return 2047i64;
  linkedEntNum = v7->linkedEntNum;
  if ( linkedEntNum <= 0 )
    return 2047i64;
  v9 = *(_DWORD *)&BG_GetEntityState(handler, linkedEntNum - 1)->clientLinkInfo & 0x7FF;
  if ( !v9 )
    return 2047i64;
  v10 = BG_GetEntityState(handler, v9 - 1)->eType == ET_VEHICLE;
  result = (unsigned int)(v9 - 1);
  if ( !v10 )
    return 2047i64;
  return result;
}

