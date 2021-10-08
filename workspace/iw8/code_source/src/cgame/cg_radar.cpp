/*
==============
CG_Radar_UpdateJammingLevel
==============
*/

void __fastcall CG_Radar_UpdateJammingLevel(const LocalClientNum_t localClientNum)
{
  ?CG_Radar_UpdateJammingLevel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Radar_ClearJamming
==============
*/

void __fastcall CG_Radar_ClearJamming(const LocalClientNum_t localClientNum)
{
  ?CG_Radar_ClearJamming@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Radar_CalculateJammingLevel
==============
*/

void __fastcall CG_Radar_CalculateJammingLevel(const LocalClientNum_t localClientNum)
{
  ?CG_Radar_CalculateJammingLevel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Radar_GetJammingLevel
==============
*/

double __fastcall CG_Radar_GetJammingLevel(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_Radar_GetJammingLevel@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_Radar_CalculateJammingLevel
==============
*/
void CG_Radar_CalculateJammingLevel(const LocalClientNum_t localClientNum)
{
  char v10; 
  char v14; 
  const dvar_t *v21; 
  const dvar_t *v23; 
  const dvar_t *v25; 
  const char *v26; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 56, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_Radar_IsJammed(localClientNum) && !CG_View_ClientHasAntiJammer(localClientNum) )
  {
    _RDI = DVARFLT_scramblerJamDistMin;
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
    }
    if ( !DVARFLT_scramblerJamDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    _RDI = DVARFLT_scramblerJamDistMax;
    if ( !DVARFLT_scramblerJamDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vsubss  xmm1, xmm0, xmm6
      vxorps  xmm7, xmm7, xmm7
      vucomiss xmm1, xmm7
    }
    if ( v14 )
    {
      __asm { vmovss  dword ptr [rbx+59EBCh], xmm7 }
LABEL_14:
      __asm
      {
        vmovaps xmm6, [rsp+78h+var_18]
        vmovaps xmm7, [rsp+78h+var_28]
      }
      return;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+59EB8h]
      vcomiss xmm0, xmm6
      vmovaps [rsp+78h+var_38], xmm8
    }
    if ( v10 )
    {
      __asm { vmovss  xmm8, cs:__real@3f800000 }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm6
        vdivss  xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm8, xmm1, xmm2
      }
    }
    v21 = DVARBOOL_scramblerJamSinCurve;
    if ( !DVARBOOL_scramblerJamSinCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamSinCurve") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      __asm { vmulss  xmm0, xmm8, cs:__real@3fc90fdb; X }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm { vmovaps xmm8, xmm0 }
    }
    v23 = DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( !DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVStrengthLevelFullyJammed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( _RBX->predictedPlayerState.radarStrength > v23->current.integer )
    {
      if ( _RBX->predictedPlayerState.radarStrength > Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_counterUAVStrengthLevelShowMapOnly, "bg_counterUAVStrengthLevelShowMapOnly") )
      {
        if ( _RBX->predictedPlayerState.radarStrength > Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly, "bg_counterUAVStrengthLevelShowFriendlyOnly") )
        {
LABEL_33:
          if ( _RBX->rsdJamming )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed, "bg_counterUAVRadarJamLevelFullyJammed");
            __asm { vmovaps xmm7, xmm0 }
          }
          __asm
          {
            vmaxss  xmm1, xmm6, xmm8
            vmaxss  xmm0, xmm1, xmm7
            vmovss  dword ptr [rbx+59EBCh], xmm0
            vmovaps xmm8, [rsp+78h+var_38]
          }
          goto LABEL_14;
        }
        v25 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly;
        v26 = "bg_counterUAVRadarJamLevelShowFriendlyOnly";
      }
      else
      {
        v25 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly;
        v26 = "bg_counterUAVRadarJamLevelShowMapOnly";
      }
    }
    else
    {
      v25 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed;
      v26 = "bg_counterUAVRadarJamLevelFullyJammed";
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v25, v26);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_33;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbx+59EBCh], xmm0
  }
}

/*
==============
CG_Radar_ClearJamming
==============
*/
void CG_Radar_ClearJamming(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals )
  {
    LocalClientGlobals->radarJammedDist = -1.0;
    LocalClientGlobals->rsdJamming = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 40, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0x59EB8] = -1082130432;
    MEMORY[0x59EC0] = 0;
  }
}

/*
==============
CG_Radar_GetJammingLevel
==============
*/
float CG_Radar_GetJammingLevel(const LocalClientNum_t localClientNum)
{
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 123, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_OFFHAND_END) )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+0B52D4h] }
  }
  else
  {
    CG_Radar_CalculateJammingLevel(localClientNum);
    __asm { vmovss  xmm0, dword ptr [rbx+59EBCh] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Radar_IsJammed
==============
*/
__int64 CG_Radar_IsJammed(const LocalClientNum_t localClientNum)
{
  char v6; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_OFFHAND_END) )
  {
    if ( _RBX->predictedPlayerState.radarBlocked )
      return 1i64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+0B52D4h]
    }
  }
  if ( !_RBX->rsdJamming )
  {
    _RDI = DVARFLT_scramblerJamDistMin;
    if ( !DVARFLT_scramblerJamDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vcomiss xmm0, dword ptr [rbx+59EB8h]
    }
    if ( !v6 )
      return 0i64;
    _RDI = DVARFLT_scramblerJamDistMax;
    if ( !DVARFLT_scramblerJamDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vcomiss xmm0, dword ptr [rbx+59EB8h]
    }
    if ( v6 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
CG_Radar_UpdateJammingLevel
==============
*/
void CG_Radar_UpdateJammingLevel(const LocalClientNum_t localClientNum)
{
  char v4; 
  char v9; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 145, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SMOOTH_SCRAMBLER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SMOOTH_SCRAMBLER )") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 148, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned int)CG_Radar_IsJammed(localClientNum) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vucomiss xmm0, dword ptr [rbx+59EB8h]
    }
  }
  CG_Radar_CalculateJammingLevel(localClientNum);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+59EBCh]
    vmovss  xmm3, dword ptr [rbx+0B52D4h]
    vsubss  xmm2, xmm1, xmm3
    vmulss  xmm0, xmm2, xmm2
    vcomiss xmm0, cs:__real@3c23d70a
  }
  if ( v9 )
  {
    __asm
    {
      vmovss  dword ptr [rbx+0B52D4h], xmm1
      vmovaps xmm3, xmm1
    }
  }
  __asm { vucomiss xmm1, xmm3 }
  if ( !v4 )
  {
    __asm
    {
      vmulss  xmm1, xmm2, cs:__real@3d888889
      vaddss  xmm3, xmm1, xmm3
      vmovss  dword ptr [rbx+0B52D4h], xmm3
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm3; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbx+0B52D4h], xmm0 }
}

