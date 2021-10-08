/*
==============
BG_FovLerp_GetPresetIndex
==============
*/

int __fastcall BG_FovLerp_GetPresetIndex(const char *presetName)
{
  return ?BG_FovLerp_GetPresetIndex@@YAHPEBD@Z(presetName);
}

/*
==============
BG_FovLerp_SetPreset
==============
*/

bool __fastcall BG_FovLerp_SetPreset(playerState_s *ps, const char *presetName, const int gameTime)
{
  return ?BG_FovLerp_SetPreset@@YA_NPEAUplayerState_s@@PEBDH@Z(ps, presetName, gameTime);
}

/*
==============
BG_FovLerp_GetTargetFov
==============
*/

double __fastcall BG_FovLerp_GetTargetFov(const int presetIndex)
{
  double result; 

  *(float *)&result = ?BG_FovLerp_GetTargetFov@@YAMH@Z(presetIndex);
  return result;
}

/*
==============
BG_FovLerp_GetCurrentPresetIndex
==============
*/

int __fastcall BG_FovLerp_GetCurrentPresetIndex(const playerState_s *ps)
{
  return ?BG_FovLerp_GetCurrentPresetIndex@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_FovLerp_GetDuration
==============
*/

int __fastcall BG_FovLerp_GetDuration(const int presetIndex)
{
  return ?BG_FovLerp_GetDuration@@YAHH@Z(presetIndex);
}

/*
==============
BG_FovLerp_Update
==============
*/

void __fastcall BG_FovLerp_Update(pmove_t *pm)
{
  ?BG_FovLerp_Update@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_FovLerp_GetPresetName
==============
*/

const char *__fastcall BG_FovLerp_GetPresetName(const int presetIndex)
{
  return ?BG_FovLerp_GetPresetName@@YAPEBDH@Z(presetIndex);
}

/*
==============
BG_FovLerp_IsAbsoluteValue
==============
*/

bool __fastcall BG_FovLerp_IsAbsoluteValue(const int presetIndex)
{
  return ?BG_FovLerp_IsAbsoluteValue@@YA_NH@Z(presetIndex);
}

/*
==============
BG_FovLerp_GetCurrentPresetIndex
==============
*/
__int64 BG_FovLerp_GetCurrentPresetIndex(const playerState_s *ps)
{
  if ( ps )
    return (unsigned int)ps->fovLerpState.presetIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 207, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MEMORY[0x51C];
}

/*
==============
BG_FovLerp_GetDuration
==============
*/
int BG_FovLerp_GetDuration(const int presetIndex)
{
  int result; 
  int v3; 

  if ( (unsigned int)(presetIndex - 1) > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 99, ASSERT_TYPE_ASSERT, "((presetIndex >= 1) && (presetIndex <= 15))", (const char *)&queryFormat, "(presetIndex >= 1) && (presetIndex <= NUM_FOV_LERP_PRESETS)") )
    __debugbreak();
  switch ( presetIndex )
  {
    case 1:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset1_durationMs, "fovLerpPreset1_durationMs");
      break;
    case 2:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset2_durationMs, "fovLerpPreset2_durationMs");
      break;
    case 3:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset3_durationMs, "fovLerpPreset3_durationMs");
      break;
    case 4:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset4_durationMs, "fovLerpPreset4_durationMs");
      break;
    case 5:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset5_durationMs, "fovLerpPreset5_durationMs");
      break;
    case 6:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset6_durationMs, "fovLerpPreset6_durationMs");
      break;
    case 7:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset7_durationMs, "fovLerpPreset7_durationMs");
      break;
    case 8:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset8_durationMs, "fovLerpPreset8_durationMs");
      break;
    case 9:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset9_durationMs, "fovLerpPreset9_durationMs");
      break;
    case 10:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset10_durationMs, "fovLerpPreset10_durationMs");
      break;
    case 11:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset11_durationMs, "fovLerpPreset11_durationMs");
      break;
    case 12:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset12_durationMs, "fovLerpPreset12_durationMs");
      break;
    case 13:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset13_durationMs, "fovLerpPreset13_durationMs");
      break;
    case 14:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset14_durationMs, "fovLerpPreset14_durationMs");
      break;
    case 15:
      result = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fovLerpPreset15_durationMs, "fovLerpPreset15_durationMs");
      break;
    default:
      v3 = presetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 134, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tBG_GetFovLerpDuration: Unhandled preset index %d", "0", v3) )
        __debugbreak();
      result = 0;
      break;
  }
  return result;
}

/*
==============
BG_FovLerp_GetPresetIndex
==============
*/
__int64 BG_FovLerp_GetPresetIndex(const char *presetName)
{
  unsigned int v2; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  signed __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 187, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET )") )
    __debugbreak();
  v2 = 1;
  do
  {
    v3 = v2;
    v4 = BG_FovLerp_GetPresetName(v2);
    if ( !presetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 193, ASSERT_TYPE_ASSERT, "(presetName)", (const char *)&queryFormat, "presetName") )
      __debugbreak();
    v5 = 0x7FFFFFFFi64;
    v6 = presetName;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !presetName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = v4 - presetName;
    while ( 1 )
    {
      v8 = v6[v7];
      v9 = v5;
      v10 = *v6++;
      --v5;
      if ( !v9 )
        return v2;
      if ( v8 != v10 )
        break;
      if ( !v8 )
        return v2;
    }
    ++v2;
  }
  while ( v3 < 15 );
  return 0i64;
}

/*
==============
BG_FovLerp_GetPresetName
==============
*/
const char *BG_FovLerp_GetPresetName(const int presetIndex)
{
  const char *result; 
  int v3; 

  if ( (unsigned int)(presetIndex - 1) > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 11, ASSERT_TYPE_ASSERT, "((presetIndex >= 1) && (presetIndex <= 15))", (const char *)&queryFormat, "(presetIndex >= 1) && (presetIndex <= NUM_FOV_LERP_PRESETS)") )
    __debugbreak();
  switch ( presetIndex )
  {
    case 1:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset1_name, "fovLerpPreset1_name");
      break;
    case 2:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset2_name, "fovLerpPreset2_name");
      break;
    case 3:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset3_name, "fovLerpPreset3_name");
      break;
    case 4:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset4_name, "fovLerpPreset4_name");
      break;
    case 5:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset5_name, "fovLerpPreset5_name");
      break;
    case 6:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset6_name, "fovLerpPreset6_name");
      break;
    case 7:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset7_name, "fovLerpPreset7_name");
      break;
    case 8:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset8_name, "fovLerpPreset8_name");
      break;
    case 9:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset9_name, "fovLerpPreset9_name");
      break;
    case 10:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset10_name, "fovLerpPreset10_name");
      break;
    case 11:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset11_name, "fovLerpPreset11_name");
      break;
    case 12:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset12_name, "fovLerpPreset12_name");
      break;
    case 13:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset13_name, "fovLerpPreset13_name");
      break;
    case 14:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset14_name, "fovLerpPreset14_name");
      break;
    case 15:
      result = Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_fovLerpPreset15_name, "fovLerpPreset15_name");
      break;
    default:
      v3 = presetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 46, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tBG_GetFovLerpPresetName: Unhandled preset index %d", "0", v3) )
        __debugbreak();
      result = NULL;
      break;
  }
  return result;
}

/*
==============
BG_FovLerp_GetTargetFov
==============
*/
double BG_FovLerp_GetTargetFov(const int presetIndex)
{
  int v5; 

  if ( (unsigned int)(presetIndex - 1) > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 55, ASSERT_TYPE_ASSERT, "((presetIndex >= 1) && (presetIndex <= 15))", (const char *)&queryFormat, "(presetIndex >= 1) && (presetIndex <= NUM_FOV_LERP_PRESETS)") )
    __debugbreak();
  switch ( presetIndex )
  {
    case 1:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset1_targetFov, "fovLerpPreset1_targetFov");
      break;
    case 2:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset2_targetFov, "fovLerpPreset2_targetFov");
      break;
    case 3:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset3_targetFov, "fovLerpPreset3_targetFov");
      break;
    case 4:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset4_targetFov, "fovLerpPreset4_targetFov");
      break;
    case 5:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset5_targetFov, "fovLerpPreset5_targetFov");
      break;
    case 6:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset6_targetFov, "fovLerpPreset6_targetFov");
      break;
    case 7:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset7_targetFov, "fovLerpPreset7_targetFov");
      break;
    case 8:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset8_targetFov, "fovLerpPreset8_targetFov");
      break;
    case 9:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset9_targetFov, "fovLerpPreset9_targetFov");
      break;
    case 10:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset10_targetFov, "fovLerpPreset10_targetFov");
      break;
    case 11:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset11_targetFov, "fovLerpPreset11_targetFov");
      break;
    case 12:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset12_targetFov, "fovLerpPreset12_targetFov");
      break;
    case 13:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset13_targetFov, "fovLerpPreset13_targetFov");
      break;
    case 14:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset14_targetFov, "fovLerpPreset14_targetFov");
      break;
    case 15:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_fovLerpPreset15_targetFov, "fovLerpPreset15_targetFov");
      break;
    default:
      v5 = presetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 90, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tBG_GetFovLerpTargetFov: Unhandled preset index %d", "0", v5) )
        __debugbreak();
      __asm { vxorps  xmm0, xmm0, xmm0 }
      break;
  }
  return *(double *)&_XMM0;
}

/*
==============
BG_FovLerp_IsAbsoluteValue
==============
*/
bool BG_FovLerp_IsAbsoluteValue(const int presetIndex)
{
  bool result; 
  int v3; 

  if ( (unsigned int)(presetIndex - 1) > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 143, ASSERT_TYPE_ASSERT, "(( presetIndex >= 1 ) && ( presetIndex <= 15 ))", (const char *)&queryFormat, "( presetIndex >= 1 ) && ( presetIndex <= NUM_FOV_LERP_PRESETS )") )
    __debugbreak();
  switch ( presetIndex )
  {
    case 1:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset1_scalesWithUserFov, "fovLerpPreset1_scalesWithUserFov");
      break;
    case 2:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset2_scalesWithUserFov, "fovLerpPreset2_scalesWithUserFov");
      break;
    case 3:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset3_scalesWithUserFov, "fovLerpPreset3_scalesWithUserFov");
      break;
    case 4:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset4_scalesWithUserFov, "fovLerpPreset4_scalesWithUserFov");
      break;
    case 5:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset5_scalesWithUserFov, "fovLerpPreset5_scalesWithUserFov");
      break;
    case 6:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset6_scalesWithUserFov, "fovLerpPreset6_scalesWithUserFov");
      break;
    case 7:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset7_scalesWithUserFov, "fovLerpPreset7_scalesWithUserFov");
      break;
    case 8:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset8_scalesWithUserFov, "fovLerpPreset8_scalesWithUserFov");
      break;
    case 9:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset9_scalesWithUserFov, "fovLerpPreset9_scalesWithUserFov");
      break;
    case 10:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset10_scalesWithUserFov, "fovLerpPreset10_scalesWithUserFov");
      break;
    case 11:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset11_scalesWithUserFov, "fovLerpPreset11_scalesWithUserFov");
      break;
    case 12:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset12_scalesWithUserFov, "fovLerpPreset12_scalesWithUserFov");
      break;
    case 13:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset13_scalesWithUserFov, "fovLerpPreset13_scalesWithUserFov");
      break;
    case 14:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset14_scalesWithUserFov, "fovLerpPreset14_scalesWithUserFov");
      break;
    case 15:
      result = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_fovLerpPreset15_scalesWithUserFov, "fovLerpPreset15_scalesWithUserFov");
      break;
    default:
      v3 = presetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 178, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tBG_FovLerp_IsAbsoluteValue: Unhandled preset index %d", "0", v3) )
        __debugbreak();
      result = 0;
      break;
  }
  return result;
}

/*
==============
BG_FovLerp_SetPreset
==============
*/
char BG_FovLerp_SetPreset(playerState_s *ps, const char *presetName, const int gameTime)
{
  int v5; 
  int v6; 
  const char *v7; 
  __int64 v8; 
  const char *v9; 
  signed __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 215, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 187, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET )") )
    __debugbreak();
  v5 = 1;
LABEL_8:
  v6 = v5;
  v7 = BG_FovLerp_GetPresetName(v5);
  if ( !presetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 193, ASSERT_TYPE_ASSERT, "(presetName)", (const char *)&queryFormat, "presetName") )
    __debugbreak();
  v8 = 0x7FFFFFFFi64;
  v9 = presetName;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !presetName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v10 = v7 - presetName;
  do
  {
    v11 = v9[v10];
    v12 = v8;
    v13 = *v9++;
    --v8;
    if ( !v12 )
      break;
    if ( v11 != v13 )
    {
      ++v5;
      if ( v6 < 15 )
        goto LABEL_8;
      return 0;
    }
  }
  while ( v11 );
  if ( !v5 )
    return 0;
  ps->fovLerpState.presetIndex = v5;
  return 1;
}

/*
==============
BG_FovLerp_Update
==============
*/
void BG_FovLerp_Update(pmove_t *pm)
{
  playerState_s *ps; 
  int pm_type; 
  bool v4; 
  const dvar_t *v5; 
  bool v6; 
  int presetIndex; 
  int integer; 
  const char *PresetName; 
  int v10; 
  int v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  signed __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 232, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 232, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  v4 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu);
  v5 = DCONST_DVARINT_fovLerpDefaultPresetIndex;
  v6 = v4;
  presetIndex = ps->fovLerpState.presetIndex;
  if ( !DCONST_DVARINT_fovLerpDefaultPresetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovLerpDefaultPresetIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( pm_type >= 7 || v6 )
  {
    if ( presetIndex )
    {
      integer = v5->current.integer;
      if ( presetIndex != integer )
      {
        PresetName = BG_FovLerp_GetPresetName(integer);
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 187, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET )") )
          __debugbreak();
        v10 = 1;
LABEL_18:
        v11 = v10;
        v12 = BG_FovLerp_GetPresetName(v10);
        if ( !PresetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_fov_lerp.cpp", 193, ASSERT_TYPE_ASSERT, "(presetName)", (const char *)&queryFormat, "presetName") )
          __debugbreak();
        v13 = 0x7FFFFFFFi64;
        v14 = PresetName;
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !PresetName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v15 = v12 - PresetName;
        do
        {
          v16 = v14[v15];
          v17 = v13;
          v18 = *v14++;
          --v13;
          if ( !v17 )
            break;
          if ( v16 != v18 )
          {
            ++v10;
            if ( v11 >= 15 )
              return;
            goto LABEL_18;
          }
        }
        while ( v16 );
        if ( v10 )
          ps->fovLerpState.presetIndex = v10;
      }
    }
  }
}

