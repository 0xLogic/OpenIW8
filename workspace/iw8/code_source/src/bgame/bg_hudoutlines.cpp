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
  __int64 result; 
  bool v26; 
  bool v47; 
  int v56; 
  int fadeOverTimeCurveType; 
  int v104; 
  int v109; 
  int v110; 
  int v115; 
  int v116; 
  float v127; 

  _RBX = hudOutlineDef;
  if ( !hudOutlineDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutlines.cpp", 277, ASSERT_TYPE_ASSERT, "(hudOutlineDef)", (const char *)&queryFormat, "hudOutlineDef") )
    __debugbreak();
  fadeOverTimeEnable = _RBX->fadeOverTimeEnable;
  distanceFadeEnable = _RBX->distanceFadeEnable;
  if ( !fadeOverTimeEnable && !distanceFadeEnable )
    return _RBX->outlineColor;
  __asm
  {
    vmovaps [rsp+0F8h+var_48], xmm6
    vmovaps [rsp+0F8h+var_58], xmm7
    vmovaps [rsp+0F8h+var_68], xmm8
    vmovaps [rsp+0F8h+var_78], xmm9
    vmovaps [rsp+0F8h+var_88], xmm10
    vmovd   xmm0, dword ptr [rbx+34h]
    vmovss  xmm7, cs:__real@3f800000
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm3, xmm1
    vmulps  xmm8, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
    vmovups [rsp+0F8h+var_C0], xmm8
    vshufps xmm8, xmm8, xmm8, 0FFh
    vmovaps xmm9, xmm8
    vmovaps xmm6, xmm8
    vmovaps xmm10, xmm7
  }
  v26 = !distanceFadeEnable;
  if ( distanceFadeEnable )
  {
    _RAX = outlinedEntityOrigin;
    __asm
    {
      vmovss  xmm10, dword ptr [rbx+2Ch]
      vmovss  xmm5, dword ptr [rbx+30h]
      vmovss  xmm9, dword ptr [rbx+28h]
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm3, xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rax+4]
      vsubss  xmm2, xmm1, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm4, xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcomiss xmm1, xmm10
    }
    if ( !v26 )
      __asm { vcomiss xmm1, xmm5 }
    __asm
    {
      vcmpless xmm0, xmm5, xmm1
      vblendvps xmm0, xmm6, xmm9, xmm0
      vmovaps xmm2, xmm0
      vmovss  [rsp+0F8h+var_C8], xmm0
      vminss  xmm9, xmm6, xmm2
      vmovaps xmm10, xmm9
    }
  }
  v47 = !fadeOverTimeEnable;
  if ( fadeOverTimeEnable )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@447a0000
      vmulss  xmm2, xmm3, dword ptr [rbx+20h]
      vmulss  xmm1, xmm3, dword ptr [rbx+14h]
      vmulss  xmm0, xmm3, dword ptr [rbx+1Ch]
    }
    _EDI = currentTime - outlineStartTime;
    __asm
    {
      vcvttss2si r15d, xmm2
      vcvttss2si r14d, xmm1
      vcvttss2si esi, xmm0
    }
    v56 = _ESI + _ER14 + _ER15;
    if ( _RBX->fadeOverTimeLooping )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vmulss  xmm1, xmm0, cs:__real@c47a0000
        vxorps  xmm0, xmm0, xmm0
        vcvttss2si eax, xmm1
        vcvtsi2ss xmm0, xmm0, edi
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, ecx
        vdivss  xmm0, xmm0, xmm6; X
      }
      *(float *)&_XMM0 = modff(*(float *)&_XMM0, &v127);
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vcvttss2si edi, xmm1
      }
    }
    __asm
    {
      vmovaps xmm6, xmm8
      vxorps  xmm3, xmm3, xmm3
    }
    if ( _EDI < _ESI )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, esi
        vcomiss xmm1, xmm3
      }
      if ( _EDI > (unsigned int)_ESI )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vdivss  xmm8, xmm0, xmm1
        }
LABEL_23:
        __asm
        {
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm0, xmm8; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm2, xmm0
          vucomiss xmm2, xmm7
          vmovaps xmm0, xmm6
        }
        if ( !v47 )
        {
          fadeOverTimeCurveType = _RBX->fadeOverTimeCurveType;
          __asm
          {
            vmovaps [rsp+0F8h+var_98], xmm11
            vmovss  xmm8, dword ptr [rbx+10h]
            vsubss  xmm11, xmm6, xmm8
          }
          switch ( fadeOverTimeCurveType )
          {
            case 1:
              __asm
              {
                vmulss  xmm0, xmm2, xmm2; jumptable 00000001402BE051 case 1
                vmulss  xmm2, xmm0, xmm2
              }
              break;
            case 2:
              __asm
              {
                vsubss  xmm1, xmm2, xmm7; jumptable 00000001402BE051 case 2
                vmulss  xmm0, xmm1, xmm1
                vmulss  xmm1, xmm0, xmm1
                vaddss  xmm2, xmm1, xmm7
              }
              break;
            case 3:
              __asm
              {
                vmulss  xmm0, xmm2, xmm2; jumptable 00000001402BE051 case 3
                vmulss  xmm1, xmm0, xmm2
                vmulss  xmm2, xmm1, xmm2
              }
              break;
            case 4:
              __asm
              {
                vsubss  xmm2, xmm2, xmm7; jumptable 00000001402BE051 case 4
                vmulss  xmm0, xmm2, xmm2
                vmulss  xmm1, xmm0, xmm2
                vmulss  xmm2, xmm1, xmm2
                vsubss  xmm2, xmm7, xmm2
              }
              break;
            case 5:
              __asm
              {
                vsubss  xmm0, xmm2, xmm7; jumptable 00000001402BE051 case 5
                vmulss  xmm1, xmm0, cs:__real@41200000; Y
                vmovss  xmm0, cs:__real@40000000; X
              }
              *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm { vmovaps xmm2, xmm0 }
              break;
            case 6:
              __asm
              {
                vmulss  xmm1, xmm2, cs:__real@c1200000; jumptable 00000001402BE051 case 6
                vmovss  xmm0, cs:__real@40000000; X
              }
              powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm { vsubss  xmm2, xmm7, xmm0 }
              break;
            default:
              break;
          }
          __asm
          {
            vmulss  xmm0, xmm2, xmm11; jumptable 00000001402BE051 default case, case 0
            vmovaps xmm11, [rsp+0F8h+var_98]
            vaddss  xmm0, xmm0, xmm8
          }
        }
        __asm
        {
          vmulss  xmm0, xmm0, xmm10
          vminss  xmm9, xmm0, xmm9
        }
        goto LABEL_33;
      }
    }
    if ( _EDI > _ER14 + _ESI )
    {
      if ( _EDI >= v56 )
        goto LABEL_22;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r15d
        vcomiss xmm1, xmm3
      }
      if ( _EDI > (unsigned int)v56 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vdivss  xmm1, xmm0, xmm1
          vsubss  xmm8, xmm7, xmm1
        }
        goto LABEL_23;
      }
    }
    if ( _EDI < v56 )
      goto LABEL_23;
LABEL_22:
    __asm { vxorps  xmm8, xmm8, xmm8 }
    goto LABEL_23;
  }
LABEL_33:
  __asm
  {
    vucomiss xmm9, xmm6
    vmovaps xmm10, [rsp+0F8h+var_88]
  }
  if ( v47 )
  {
    result = _RBX->outlineColor;
  }
  else
  {
    __asm
    {
      vmovss  xmm7, cs:__real@437f0000
      vmulss  xmm1, xmm7, dword ptr [rsp+0F8h+var_C0]
      vmovss  xmm6, cs:__real@3f000000
      vaddss  xmm2, xmm1, xmm6
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm3, xmm8, xmm2, 1
      vcvttss2si ecx, xmm3; val
    }
    v104 = I_clamp(_ECX, 0, 255);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rsp+0F8h+var_C0+4]
      vaddss  xmm3, xmm1, xmm6
      vroundss xmm1, xmm8, xmm3, 1
      vcvttss2si ecx, xmm1; val
    }
    v109 = v104;
    v110 = I_clamp(_ECX, 0, 255);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rsp+0F8h+var_C0+8]
      vaddss  xmm3, xmm1, xmm6
      vroundss xmm1, xmm8, xmm3, 1
      vcvttss2si ecx, xmm1; val
    }
    v115 = v110;
    v116 = I_clamp(_ECX, 0, 255);
    __asm
    {
      vmulss  xmm0, xmm9, xmm7
      vaddss  xmm2, xmm0, xmm6
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm2, xmm1, xmm2
      vroundss xmm0, xmm8, xmm2, 1
      vcvttss2si ecx, xmm0; val
    }
    result = v109 | ((v115 | ((v116 | (unsigned int)(I_clamp(_ECX, 0, 255) << 8)) << 8)) << 8);
  }
  __asm
  {
    vmovaps xmm8, [rsp+0F8h+var_68]
    vmovaps xmm7, [rsp+0F8h+var_58]
    vmovaps xmm6, [rsp+0F8h+var_48]
    vmovaps xmm9, [rsp+0F8h+var_78]
  }
  return result;
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

