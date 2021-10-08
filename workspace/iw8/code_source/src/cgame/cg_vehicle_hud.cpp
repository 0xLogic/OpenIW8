/*
==============
PipRect::CalcOverlap
==============
*/

bool __fastcall PipRect::CalcOverlap(PipRect *this, LocalClientNum_t localClientNum, float x0, float y0, float w, float h, rectDef_s *rect, vec4_t *inOutColor)
{
  return ?CalcOverlap@PipRect@@QEAA_NW4LocalClientNum_t@@MMMMPEAUrectDef_s@@AEATvec4_t@@@Z(this, localClientNum, x0, y0, w, h, rect, inOutColor);
}

/*
==============
CG_DrawVehicleReticle
==============
*/

void __fastcall CG_DrawVehicleReticle(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  ?CG_DrawVehicleReticle@@YAXW4LocalClientNum_t@@PEAUrectDef_s@@AEBTvec4_t@@@Z(localClientNum, rect, color);
}

/*
==============
CG_GetTargetPos
==============
*/

bool __fastcall CG_GetTargetPos(LocalClientNum_t localClientNum, int targetEntNum, vec3_t *outPos)
{
  return ?CG_GetTargetPos@@YA_NW4LocalClientNum_t@@HAEATvec3_t@@@Z(localClientNum, targetEntNum, outPos);
}

/*
==============
CG_InitVehicleReticle
==============
*/

void __fastcall CG_InitVehicleReticle(LocalClientNum_t localClientNum)
{
  ?CG_InitVehicleReticle@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TargetsChanged
==============
*/

void __fastcall CG_TargetsChanged(LocalClientNum_t localClientNum, int num)
{
  ?CG_TargetsChanged@@YAXW4LocalClientNum_t@@H@Z(localClientNum, num);
}

/*
==============
CG_ReticleStartLockOn
==============
*/

void __fastcall CG_ReticleStartLockOn(LocalClientNum_t localClientNum, int targetEntNum, int msecDuration)
{
  ?CG_ReticleStartLockOn@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, targetEntNum, msecDuration);
}

/*
==============
CG_DrawVehicleDebug
==============
*/

void __fastcall CG_DrawVehicleDebug(LocalClientNum_t localClientNum)
{
  ?CG_DrawVehicleDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Bounds_ScaleToMinEdgeSize2D
==============
*/

void __fastcall Bounds_ScaleToMinEdgeSize2D(Bounds *bounds, float minSize)
{
  ?Bounds_ScaleToMinEdgeSize2D@@YAXPEAUBounds@@M@Z(bounds, minSize);
}

/*
==============
CG_DrawVehicleTargets
==============
*/

void __fastcall CG_DrawVehicleTargets(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  ?CG_DrawVehicleTargets@@YAXW4LocalClientNum_t@@PEAUrectDef_s@@AEBTvec4_t@@@Z(localClientNum, rect, color);
}

/*
==============
Bounds_ScaleToMinEdgeSize2D
==============
*/

void __fastcall Bounds_ScaleToMinEdgeSize2D(Bounds *bounds, double minSize)
{
  char v2; 

  __asm
  {
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vmovss  xmm1, dword ptr [rcx+10h]
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vcomiss xmm0, xmm1
  }
  if ( v2 )
  {
    __asm
    {
      vdivss  xmm0, xmm1, xmm0
      vmulss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rcx+10h], xmm1
      vmovss  dword ptr [rcx+0Ch], xmm2
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm0, xmm1
      vmulss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rcx+0Ch], xmm1
      vmovss  dword ptr [rcx+10h], xmm2
    }
  }
}

/*
==============
CG_DrawBouncingDiamond
==============
*/

void __fastcall CG_DrawBouncingDiamond(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color, double _XMM3_8)
{
  unsigned int vehReticleLockOnEntNum; 
  bool v19; 
  bool v20; 
  centity_t *Entity; 
  char v49; 
  char v63; 
  Material *material; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  vec3_t outPos; 
  float c; 
  float s; 
  vec3_t outOrg; 
  __int64 v118; 
  vec2_t outScreenPos; 
  char v120; 
  void *retaddr; 

  _RAX = &retaddr;
  v118 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _RBP = CG_GetLocalClientGlobals(localClientNum);
  _RDI = DVARFLT_vehHudReticleBouncingRadius;
  if ( !DVARFLT_vehHudReticleBouncingRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudReticleBouncingRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  vehReticleLockOnEntNum = _RBP->vehReticleLockOnEntNum;
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  v19 = vehReticleLockOnEntNum < 0x7FF;
  v20 = vehReticleLockOnEntNum == 2047;
  if ( vehReticleLockOnEntNum == 2047 )
  {
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm4, xmm4, xmm4
    }
  }
  else
  {
    if ( !CG_GetTargetPos(localClientNum, vehReticleLockOnEntNum, &outPos) )
    {
      Entity = CG_GetEntity(localClientNum, _RBP->vehReticleLockOnEntNum);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 890, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
        __debugbreak();
      CG_GetPoseOrigin(&Entity->pose, &outPos);
    }
    RefdefView_GetOrg(&_RBP->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+138h+outPos]
      vsubss  xmm1, xmm0, dword ptr [rsp+138h+outOrg]
      vmovss  dword ptr [rsp+138h+outPos], xmm1
      vmovss  xmm2, dword ptr [rsp+138h+outPos+4]
      vsubss  xmm0, xmm2, dword ptr [rsp+138h+outOrg+4]
      vmovss  dword ptr [rsp+138h+outPos+4], xmm0
      vmovss  xmm1, dword ptr [rsp+138h+outPos+8]
      vsubss  xmm2, xmm1, dword ptr [rsp+138h+outOrg+8]
      vmovss  dword ptr [rsp+138h+outPos+8], xmm2
    }
    CG_WorldDirToScreenPosVirtualCentered(localClientNum, &outPos, &outScreenPos);
    __asm { vxorps  xmm9, xmm9, xmm9 }
    if ( _RBP->vehReticleLockOnDuration )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm0, xmm1, xmm0; val
        vmovaps xmm2, xmm10; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm1, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm1, xmm10 }
    }
    __asm
    {
      vmulss  xmm0, xmm1, xmm6
      vsubss  xmm6, xmm6, xmm0
      vmulss  xmm0, xmm1, cs:__real@40000000; val
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+138h+outScreenPos]
      vsubss  xmm2, xmm1, dword ptr cs:?vec2_origin@@3Tvec2_t@@B; vec2_t const vec2_origin
      vmulss  xmm3, xmm2, xmm0
      vaddss  xmm3, xmm3, dword ptr cs:?vec2_origin@@3Tvec2_t@@B; vec2_t const vec2_origin
      vmovss  xmm1, dword ptr [rsp+138h+outScreenPos+4]
      vsubss  xmm2, xmm1, dword ptr cs:?vec2_origin@@3Tvec2_t@@B+4; vec2_t const vec2_origin
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm4, xmm0, dword ptr cs:?vec2_origin@@3Tvec2_t@@B+4; vec2_t const vec2_origin
    }
    v19 = 0;
    v20 = 1;
    memset(&outOrg, 0, sizeof(outOrg));
  }
  __asm { vucomiss xmm6, xmm9 }
  if ( v20 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+66A38h], xmm3
      vmovss  dword ptr [rbp+66A3Ch], xmm4
    }
  }
  else
  {
    __asm { vucomiss xmm9, dword ptr [rbp+66A40h] }
    if ( !v20 )
      goto LABEL_20;
    __asm { vucomiss xmm9, dword ptr [rbp+66A44h] }
    if ( v20 )
    {
      v49 = 1;
    }
    else
    {
LABEL_20:
      v49 = 0;
      v19 = 0;
      v20 = 1;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+66A38h]
      vsubss  xmm7, xmm0, xmm3
      vmovss  xmm0, dword ptr [rbp+66A3Ch]
      vsubss  xmm8, xmm0, xmm4
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vcomiss xmm2, xmm1
    }
    if ( v49 || !v19 && !v20 )
    {
      *(double *)&_XMM0 = I_random();
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm
      {
        vmovss  xmm1, [rsp+138h+c]
        vmovss  xmm0, [rsp+138h+s]
        vmovss  dword ptr [rbp+66A40h], xmm0
        vmovss  dword ptr [rbp+66A44h], xmm1
      }
      _RDI = DVARFLT_vehHudReticleBouncingSpeed;
      if ( !DVARFLT_vehHudReticleBouncingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudReticleBouncingSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm5, xmm0, dword ptr [rbp+66A40h]
        vmovss  dword ptr [rbp+66A40h], xmm5
        vmulss  xmm2, xmm0, dword ptr [rbp+66A44h]
        vmovss  dword ptr [rbp+66A44h], xmm2
        vmulss  xmm1, xmm8, xmm2
        vmulss  xmm0, xmm7, xmm5
        vaddss  xmm3, xmm1, xmm0
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm4, xmm2, xmm6
        vmulss  xmm1, xmm5, xmm8
        vmulss  xmm0, xmm4, xmm7
        vaddss  xmm2, xmm1, xmm0
        vcomiss xmm2, xmm3
      }
      if ( v63 )
      {
        __asm
        {
          vmovaps xmm3, xmm2
          vmovss  dword ptr [rbp+66A40h], xmm4
          vmovss  dword ptr [rbp+66A44h], xmm5
        }
      }
      __asm
      {
        vxorps  xmm2, xmm5, xmm6
        vmulss  xmm1, xmm4, xmm8
        vmulss  xmm0, xmm7, xmm2
        vaddss  xmm5, xmm1, xmm0
        vcomiss xmm5, xmm3
      }
      if ( v63 )
      {
        __asm
        {
          vmovaps xmm3, xmm5
          vmovss  dword ptr [rbp+66A40h], xmm2
          vmovss  dword ptr [rbp+66A44h], xmm4
        }
      }
      __asm
      {
        vxorps  xmm5, xmm4, xmm6
        vmulss  xmm1, xmm2, xmm8
        vmulss  xmm0, xmm7, xmm5
        vaddss  xmm1, xmm1, xmm0
        vcomiss xmm1, xmm3
      }
      if ( v63 )
      {
        __asm
        {
          vmovss  dword ptr [rbp+66A40h], xmm5
          vmovss  dword ptr [rbp+66A44h], xmm2
        }
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+65E4h]
      vmulss  xmm2, xmm0, cs:__real@3a83126f
      vmulss  xmm1, xmm2, dword ptr [rbp+66A40h]
      vaddss  xmm0, xmm1, dword ptr [rbp+66A38h]
      vmovss  dword ptr [rbp+66A38h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbp+66A44h]
      vaddss  xmm0, xmm1, dword ptr [rbp+66A3Ch]
      vmovss  dword ptr [rbp+66A3Ch], xmm0
    }
  }
  _RDI = DVARFLT_vehHudReticleBouncingDiamondSize;
  if ( !DVARFLT_vehHudReticleBouncingDiamondSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudReticleBouncingDiamondSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+28h]
    vmulss  xmm2, xmm8, cs:__real@3f000000
  }
  material = cgMedia.vehBouncingDiamondReticle;
  vertAlign = rect->vertAlign;
  horzAlign = rect->horzAlign;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+66A3Ch]
    vsubss  xmm7, xmm0, xmm2
    vmovss  xmm1, dword ptr [rbp+66A38h]
    vsubss  xmm6, xmm1, xmm2
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  [rsp+138h+var_E8], xmm10
    vmovss  [rsp+138h+var_F0], xmm10
    vmovss  [rsp+138h+var_F8], xmm9
    vmovss  [rsp+138h+var_100], xmm9
    vmovss  dword ptr [rsp+138h+fmt], xmm8
    vmovaps xmm3, xmm8; w
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm6; x
  }
  CL_DrawStretchPicWithoutSplitScreenScaling(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, horzAlign, vertAlign, v110, v111, v112, v113, color, material);
  memset(&outPos, 0, sizeof(outPos));
  _R11 = &v120;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DrawPipOnAStickReticle
==============
*/
void CG_DrawPipOnAStickReticle(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  __int64 v13; 
  cg_t *LocalClientGlobals; 
  const DObj *ClientDObj; 
  const Weapon *WeaponForEntity; 
  const dvar_t *v19; 
  const ScreenPlacement *ActivePlacement; 
  char v50; 
  char v51; 
  Material *vehHudLine; 
  int v58; 
  int horzAlign; 
  vec4_t *v63; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float lineWidth; 
  int vertAlign; 
  int vertAligna; 
  float colora; 
  float colorb; 
  Material *material; 
  float materiala; 
  float materialb; 
  float v98; 
  float v99; 
  int projectileSpeed; 
  vec4_t *v101; 
  int projectileSpeedUp; 
  vec2_t outScreenPos; 
  vec2_t v104; 
  vec3_t worldDir; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 

  v13 = localClientNum;
  v101 = (vec4_t *)color;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RDI = CG_GetEntity((const LocalClientNum_t)v13, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
  if ( (_RDI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 751, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(_RDI->nextState.number, (LocalClientNum_t)v13);
  if ( !CgWeaponMap::ms_instance[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v13], &_RDI->nextState);
  BG_GetProjectileSpeed(WeaponForEntity, 0, &projectileSpeed, &projectileSpeedUp);
  if ( ClientDObj )
  {
    v19 = DVARBOOL_vehHudDrawPipOnStickWhenFreelooking;
    if ( !DVARBOOL_vehHudDrawPipOnStickWhenFreelooking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudDrawPipOnStickWhenFreelooking") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.enabled || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu) )
    {
      if ( CG_DObjGetWorldTagMatrix(&_RDI->pose, ClientDObj, scr_const.tag_body, &outTagMat, &outOrigin) )
      {
        CG_WorldDirToScreenPosVirtualCentered((LocalClientNum_t)v13, outTagMat.m, &outScreenPos);
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, [rsp+1A0h+projectileSpeed]
          vmulss  xmm5, xmm2, dword ptr [rbp+0A0h+outTagMat]
          vmulss  xmm4, xmm2, dword ptr [rbp+0A0h+outTagMat+4]
          vmulss  xmm3, xmm2, dword ptr [rbp+0A0h+outTagMat+8]
          vmovss  dword ptr [rbp+0A0h+worldDir], xmm5
          vmovss  dword ptr [rbp+0A0h+worldDir+4], xmm4
          vmovss  dword ptr [rbp+0A0h+worldDir+8], xmm3
          vaddss  xmm0, xmm5, dword ptr [rdi+13Ch]
          vmovss  xmm1, dword ptr [rdi+140h]
          vmovss  xmm2, dword ptr [rdi+144h]
          vmovss  dword ptr [rbp+0A0h+worldDir], xmm0
          vaddss  xmm0, xmm3, xmm2
          vaddss  xmm1, xmm4, xmm1
          vmovss  dword ptr [rbp+0A0h+worldDir+8], xmm0
          vmovss  dword ptr [rbp+0A0h+worldDir+4], xmm1
        }
        if ( CG_WorldDirToScreenPosVirtualCentered((LocalClientNum_t)v13, &worldDir, &v104) )
        {
          __asm
          {
            vmovaps [rsp+1A0h+var_40], xmm6
            vmovaps [rsp+1A0h+var_50], xmm7
            vmovaps [rsp+1A0h+var_80], xmm10
            vmovaps [rsp+1A0h+var_90], xmm11
            vmovaps [rsp+1A0h+var_A0], xmm12
            vmovaps [rsp+1A0h+var_B0], xmm13
            vmovaps [rsp+1A0h+var_C0], xmm14
          }
          if ( !cgMedia.vehCenterCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 774, ASSERT_TYPE_ASSERT, "(cgMedia.vehCenterCircle)", (const char *)&queryFormat, "cgMedia.vehCenterCircle") )
            __debugbreak();
          if ( !cgMedia.vehMovingCircle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 775, ASSERT_TYPE_ASSERT, "(cgMedia.vehMovingCircle)", (const char *)&queryFormat, "cgMedia.vehMovingCircle") )
            __debugbreak();
          if ( !cgMedia.vehHudLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 776, ASSERT_TYPE_ASSERT, "(cgMedia.vehHudLine)", (const char *)&queryFormat, "cgMedia.vehHudLine") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0A0h+var_110]
            vsubss  xmm4, xmm0, dword ptr [rbp+0A0h+outScreenPos]
            vmovss  xmm1, dword ptr [rbp+0A0h+var_110+4]
            vsubss  xmm3, xmm1, dword ptr [rbp+0A0h+outScreenPos+4]
            vmovss  xmm10, cs:__real@3f800000
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm3, xmm3
            vaddss  xmm1, xmm2, xmm0
            vsqrtss xmm7, xmm1, xmm1
            vcmpless xmm0, xmm7, cs:__real@80000000
            vblendvps xmm0, xmm7, xmm10, xmm0
            vdivss  xmm1, xmm10, xmm0
            vmulss  xmm13, xmm4, xmm1
            vmulss  xmm14, xmm3, xmm1
          }
          ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v13);
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircle, "vehHudReticlePipOnAStickMovingCircle");
          __asm { vmulss  xmm11, xmm0, cs:__real@3f000000 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircle, "vehHudReticlePipOnAStickCenterCircle");
          __asm
          {
            vmulss  xmm12, xmm0, cs:__real@3f000000
            vaddss  xmm6, xmm12, xmm11
          }
          Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircleBuffer, "vehHudReticlePipOnAStickCenterCircleBuffer");
          __asm { vsubss  xmm6, xmm6, xmm0 }
          Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircleBuffer, "vehHudReticlePipOnAStickMovingCircleBuffer");
          __asm
          {
            vsubss  xmm1, xmm6, xmm0
            vcomiss xmm7, xmm1
          }
          if ( v50 | v51 )
          {
            v63 = v101;
          }
          else
          {
            __asm
            {
              vmovaps [rsp+1A0h+var_60], xmm8
              vmovaps [rsp+1A0h+var_70], xmm9
            }
            Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircleBuffer, "vehHudReticlePipOnAStickCenterCircleBuffer");
            __asm
            {
              vsubss  xmm2, xmm12, xmm0
              vmulss  xmm1, xmm2, xmm13
              vaddss  xmm9, xmm1, dword ptr [rbp+0A0h+outScreenPos]
              vmulss  xmm0, xmm2, xmm14
              vaddss  xmm8, xmm0, dword ptr [rbp+0A0h+outScreenPos+4]
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircleBuffer, "vehHudReticlePipOnAStickMovingCircleBuffer");
            vehHudLine = cgMedia.vehHudLine;
            v58 = rect->vertAlign;
            horzAlign = rect->horzAlign;
            __asm
            {
              vsubss  xmm2, xmm0, xmm11
              vmulss  xmm1, xmm2, xmm13
              vaddss  xmm7, xmm1, dword ptr [rbp+0A0h+var_110]
              vmulss  xmm0, xmm2, xmm14
              vaddss  xmm6, xmm0, dword ptr [rbp+0A0h+var_110+4]
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudLineWidth, "vehHudLineWidth");
            material = vehHudLine;
            v63 = v101;
            __asm
            {
              vmovss  [rsp+1A0h+lineWidth], xmm0
              vmovaps xmm3, xmm7; p2x
              vmovaps xmm2, xmm8; p1y
              vmovaps xmm1, xmm9; p1x
              vmovss  dword ptr [rsp+1A0h+fmt], xmm6
            }
            CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, lineWidth, horzAlign, v58, v101, material);
            __asm
            {
              vmovaps xmm9, [rsp+1A0h+var_70]
              vmovaps xmm8, [rsp+1A0h+var_60]
            }
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickCenterCircle, "vehHudReticlePipOnAStickCenterCircle");
          __asm
          {
            vmovss  xmm1, dword ptr [rbp+0A0h+outScreenPos+4]
            vmovss  xmm3, dword ptr [rbp+0A0h+outScreenPos]
            vmovss  [rsp+1A0h+var_150], xmm10
            vmovss  dword ptr [rsp+1A0h+material], xmm10
            vxorps  xmm6, xmm6, xmm6
            vmovss  dword ptr [rsp+1A0h+color], xmm6
            vmovss  [rsp+1A0h+vertAlign], xmm6
            vsubss  xmm2, xmm1, xmm12; y
            vsubss  xmm1, xmm3, xmm12; x
            vmovaps xmm3, xmm0; w
            vmovss  dword ptr [rsp+1A0h+fmt], xmm0
          }
          CL_DrawStretchPicWithoutSplitScreenScaling(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, rect->horzAlign, rect->vertAlign, *(float *)&vertAlign, colora, materiala, v98, v63, cgMedia.vehCenterCircle);
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHudReticlePipOnAStickMovingCircle, "vehHudReticlePipOnAStickMovingCircle");
          __asm
          {
            vmovss  xmm1, dword ptr [rbp+0A0h+var_110+4]
            vmovss  xmm3, dword ptr [rbp+0A0h+var_110]
            vmovss  [rsp+1A0h+var_150], xmm10
            vmovss  dword ptr [rsp+1A0h+material], xmm10
            vmovss  dword ptr [rsp+1A0h+color], xmm6
            vmovss  [rsp+1A0h+vertAlign], xmm6
            vsubss  xmm2, xmm1, xmm11; y
            vsubss  xmm1, xmm3, xmm11; x
            vmovaps xmm3, xmm0; w
            vmovss  dword ptr [rsp+1A0h+fmt], xmm0
          }
          CL_DrawStretchPicWithoutSplitScreenScaling(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, rect->horzAlign, rect->vertAlign, *(float *)&vertAligna, colorb, materialb, v99, v63, cgMedia.vehMovingCircle);
          __asm
          {
            vmovaps xmm14, [rsp+1A0h+var_C0]
            vmovaps xmm13, [rsp+1A0h+var_B0]
            vmovaps xmm12, [rsp+1A0h+var_A0]
            vmovaps xmm11, [rsp+1A0h+var_90]
            vmovaps xmm10, [rsp+1A0h+var_80]
            vmovaps xmm7, [rsp+1A0h+var_50]
            vmovaps xmm6, [rsp+1A0h+var_40]
          }
        }
      }
    }
  }
}

/*
==============
CG_DrawScaledRect
==============
*/
void CG_DrawScaledRect(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color, Material *material, const Bounds *screenBounds, const targetInfo_t *targ, float size, float yaw, int time, PipRect *pipRect)
{
  int flags; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  bool v64; 
  __int64 v69; 
  __int64 v71; 
  int v85; 
  int v86; 
  bool v92; 
  const ScreenPlacement *v93; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float h; 
  float inOutColor; 
  float inOutColora; 
  float colora; 
  float materiala; 
  float v115; 
  float v116; 
  float c; 
  float s; 
  Material *v119; 
  __int64 v120; 
  vec4_t v121; 
  __int128 v126; 
  char v165; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _R13 = screenBounds;
  _RDI = color;
  _RBX = targ;
  __asm
  {
    vmovss  xmm3, dword ptr [r13+0]
    vmovss  xmm2, dword ptr [r13+4]
    vmovss  xmm4, dword ptr [rbx+24h]
    vsubss  xmm5, xmm3, dword ptr [r13+0Ch]
    vsubss  xmm6, xmm2, dword ptr [r13+10h]
    vaddss  xmm0, xmm3, dword ptr [r13+0Ch]
    vaddss  xmm1, xmm2, dword ptr [r13+10h]
  }
  LODWORD(s) = localClientNum;
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vcomiss xmm4, xmm11
    vsubss  xmm9, xmm0, xmm5
    vsubss  xmm10, xmm1, xmm6
  }
  v119 = material;
  v120 = 0i64;
  __asm
  {
    vucomiss xmm11, dword ptr [rbx+30h]
    vmovaps xmm7, xmm5
    vmovaps xmm8, xmm6
    vmovss  [rbp+180h+c], xmm7
  }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 277, ASSERT_TYPE_SANITY, "( !IS_NAN( x0 ) )", (const char *)&queryFormat, "!IS_NAN( x0 )") )
    __debugbreak();
  __asm { vmovss  [rbp+180h+c], xmm8 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 278, ASSERT_TYPE_SANITY, "( !IS_NAN( y0 ) )", (const char *)&queryFormat, "!IS_NAN( y0 )") )
    __debugbreak();
  __asm { vmovss  [rbp+180h+c], xmm9 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 279, ASSERT_TYPE_SANITY, "( !IS_NAN( w ) )", (const char *)&queryFormat, "!IS_NAN( w )") )
    __debugbreak();
  __asm { vmovss  [rbp+180h+c], xmm10 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 280, ASSERT_TYPE_SANITY, "( !IS_NAN( h ) )", (const char *)&queryFormat, "!IS_NAN( h )") )
    __debugbreak();
  targ->prevTime = time;
  __asm
  {
    vmovss  dword ptr [rbx+68h], xmm7
    vmovss  dword ptr [rbx+6Ch], xmm8
  }
  v64 = (targ->flags & 0x200) == 0;
  __asm
  {
    vmovss  dword ptr [rbx+70h], xmm9
    vmovss  dword ptr [rbx+74h], xmm10
  }
  if ( v64 )
    __asm { vmovups xmm0, xmmword ptr [rdi] }
  else
    __asm { vmovups xmm0, xmmword ptr [rbx+34h] }
  __asm
  {
    vmovss  [rsp+280h+h], xmm10
    vmovaps xmm3, xmm8; y0
    vmovaps xmm2, xmm7; x0
    vmovss  dword ptr [rsp+280h+fmt], xmm9
    vmovups xmmword ptr [rbp+180h+var_1E8], xmm0
  }
  if ( PipRect::CalcOverlap(pipRect, SLODWORD(s), *(float *)&_XMM2, *(float *)&_XMM3, fmt, h, rect, &v121) )
  {
    flags = targ->flags;
    if ( (flags & 0x800) != 0 )
    {
      vertAlign = rect->vertAlign;
      horzAlign = rect->horzAlign;
      ActivePlacement = ScrPlace_GetActivePlacement(SLODWORD(s));
      __asm
      {
        vmovss  xmm0, [rbp+180h+yaw]
        vmovss  dword ptr [rsp+280h+inOutColor], xmm0
        vmovaps xmm3, xmm9; width
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm7; x
        vmovss  dword ptr [rsp+280h+fmt], xmm10
      }
      CG_DrawRotatedPicWithoutSplitScreenScaling(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, horzAlign, vertAlign, inOutColor, &v121, v119);
      goto LABEL_36;
    }
    __asm
    {
      vmovups xmm0, cs:__xmm@3eaaaaab3eaaaaab0000000000000000
      vmovss  xmm3, [rbp+180h+size]
      vmulss  xmm6, xmm3, cs:__real@3eaaaaab
      vmulss  xmm3, xmm3, cs:__real@3f2aaaab
      vmovups [rbp+180h+var_1C0], xmm0
      vmovups xmm0, cs:__xmm@3eaaaaab3f800000000000003f2aaaab
      vmovups [rbp+180h+var_1A0], xmm0
      vmovups xmm0, cs:__xmm@3f8000003eaaaaab3f2aaaab00000000
      vmovups [rbp+180h+var_180], xmm0
      vmovups xmm0, cs:__xmm@3f8000003f8000003f2aaaab3f2aaaab
      vmovups [rbp+180h+var_160], xmm0
      vmovups xmm0, cs:__xmm@3eaaaaab3f2aaaab000000003eaaaaab
      vmovups [rbp+180h+var_140], xmm0
      vmovups xmm0, cs:__xmm@3f8000003f2aaaab3f2aaaab3eaaaaab
      vaddss  xmm2, xmm6, xmm7
      vaddss  xmm1, xmm9, xmm7
      vsubss  xmm5, xmm1, xmm6
      vaddss  xmm1, xmm10, xmm8
      vsubss  xmm4, xmm1, xmm6
      vsubss  xmm1, xmm9, xmm3
      vmovups [rbp+180h+var_120], xmm0
      vmovups xmm0, cs:__xmm@3f2aaaab3eaaaaab3eaaaaab00000000
      vmovaps xmmword ptr [rsp+280h+var_A8+8], xmm12
    }
    _RBX = (char *)&v126 + 8;
    v64 = (flags & 0x80u) == 0;
    __asm
    {
      vmovaps [rsp+280h+var_B8+8], xmm13
      vmovups [rbp+180h+var_100], xmm0
      vmovups xmm0, cs:__xmm@3f2aaaab3f8000003eaaaaab3f2aaaab
      vmovss  [rbp+180h+var_150], xmm2
      vmovss  [rbp+180h+var_148], xmm1
      vmovss  [rbp+180h+var_130], xmm2
      vaddss  xmm2, xmm6, xmm8
      vmovss  [rbp+180h+var_128], xmm1
      vsubss  xmm1, xmm10, xmm3
      vmovaps [rsp+280h+var_C8+8], xmm14
      vmovss  xmm14, cs:__real@3c8efa35
    }
    v69 = 4i64;
    __asm
    {
      vmovss  [rbp+180h+var_1CC], xmm8
      vmovss  [rbp+180h+var_1AC], xmm8
      vmovss  [rbp+180h+var_14C], xmm8
      vmovss  xmm8, [rbp+180h+yaw]
      vmovups [rbp+180h+var_E0], xmm0
      vmovss  [rbp+180h+var_1D0], xmm7
      vmovss  [rbp+180h+var_1C8], xmm6
      vmovss  [rbp+180h+var_1C4], xmm6
      vmovss  [rbp+180h+var_1B0], xmm5
      vmovss  [rbp+180h+var_1A8], xmm6
      vmovss  [rbp+180h+var_1A4], xmm6
      vmovss  [rbp+180h+var_190], xmm7
      vmovss  [rbp+180h+var_18C], xmm4
      vmovss  [rbp+180h+var_188], xmm6
      vmovss  [rbp+180h+var_184], xmm6
      vmovss  [rbp+180h+var_170], xmm5
      vmovss  [rbp+180h+var_16C], xmm4
      vmovss  [rbp+180h+var_168], xmm6
      vmovss  [rbp+180h+var_164], xmm6
      vmovss  [rbp+180h+var_144], xmm6
      vmovss  [rbp+180h+var_12C], xmm4
      vmovss  [rbp+180h+var_124], xmm6
      vmovss  [rbp+180h+var_110], xmm7
      vmovss  [rbp+180h+var_10C], xmm2
      vmovss  [rbp+180h+var_108], xmm6
      vmovss  [rbp+180h+var_104], xmm1
      vmovss  [rbp+180h+var_F0], xmm5
      vmovss  [rbp+180h+var_EC], xmm2
      vmovss  [rbp+180h+var_E8], xmm6
      vmovss  [rbp+180h+var_E4], xmm1
    }
    if ( (flags & 0x80u) == 0 )
      v69 = 8i64;
    v71 = SLODWORD(s);
    while ( 1 )
    {
      __asm { vucomiss xmm8, xmm11 }
      if ( v64 )
      {
        __asm { vmovss  xmm6, dword ptr [rbx-14h] }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-18h]
          vsubss  xmm7, xmm0, dword ptr [r13+0]
          vmovss  xmm1, dword ptr [rbx-14h]
          vsubss  xmm6, xmm1, dword ptr [r13+4]
          vmulss  xmm0, xmm8, xmm14; radians
        }
        FastSinCos(*(const float *)&_XMM0, &s, &c);
        __asm
        {
          vmulss  xmm0, xmm6, [rbp+180h+s]
          vmulss  xmm1, xmm7, [rbp+180h+c]
          vmulss  xmm2, xmm6, [rbp+180h+c]
          vsubss  xmm1, xmm1, xmm0
          vaddss  xmm4, xmm1, dword ptr [r13+0]
          vmulss  xmm0, xmm7, [rbp+180h+s]
          vaddss  xmm1, xmm2, xmm0
          vaddss  xmm6, xmm1, dword ptr [r13+4]
          vmovss  dword ptr [rbx-14h], xmm6
          vmovss  dword ptr [rbx-18h], xmm4
        }
      }
      v85 = rect->vertAlign;
      v86 = rect->horzAlign;
      __asm
      {
        vmovss  xmm7, dword ptr [rbx+4]
        vmovss  xmm9, dword ptr [rbx]
        vmovss  xmm10, dword ptr [rbx-4]
        vmovss  xmm12, dword ptr [rbx-8]
        vmovss  xmm13, dword ptr [rbx-0Ch]
      }
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v93 = &scrPlaceViewDisplay[v71];
          goto LABEL_34;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v92 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v92 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v92 )
          __debugbreak();
      }
      v93 = &scrPlaceFull;
LABEL_34:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx-10h]; w
        vmovss  xmm1, dword ptr [rbx-18h]; x
        vmovss  dword ptr [rsp+280h+var_228], xmm8
        vmovss  [rsp+280h+var_230], xmm7
        vmovss  dword ptr [rsp+280h+material], xmm9
        vmovss  dword ptr [rsp+280h+color], xmm10
        vmovss  dword ptr [rsp+280h+inOutColor], xmm12
        vmovaps xmm2, xmm6; y
        vmovss  dword ptr [rsp+280h+fmt], xmm13
      }
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(v93, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v86, v85, inOutColora, colora, materiala, v115, v116, 1, &v121, v119);
      _RBX += 32;
      v64 = ++v120 == v69;
      if ( v120 >= v69 )
      {
        __asm
        {
          vmovaps xmm14, [rsp+280h+var_C8+8]
          vmovaps xmm13, [rsp+280h+var_B8+8]
          vmovaps xmm12, xmmword ptr [rsp+280h+var_A8+8]
        }
        break;
      }
    }
  }
LABEL_36:
  _R11 = &v165;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_DrawTargets_ClampScreenPosToEdges
==============
*/
__int64 CG_DrawTargets_ClampScreenPosToEdges(LocalClientNum_t localClientNum, vec2_t *inOutPoint)
{
  __int64 result; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RBX = inOutPoint;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RAX = ScrPlace_GetActivePlacement(localClientNum);
  _RSI = DVARFLT_vehHudTargetScreenEdgeClampBufferLeft;
  _RDI = _RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+20h]
    vmulss  xmm1, xmm0, dword ptr [rax+10h]
    vmovss  xmm0, dword ptr [rax+24h]
    vmulss  xmm9, xmm1, cs:__real@3f000000
    vmulss  xmm1, xmm0, dword ptr [rax+14h]
    vmulss  xmm10, xmm1, cs:__real@3f000000
  }
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferLeft") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm7, dword ptr [rsi+28h] }
  _RSI = DVARFLT_vehHudTargetScreenEdgeClampBufferRight;
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferRight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  if ( !CL_IsRenderingSplitScreen() )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+68h]
      vmulss  xmm1, xmm0, dword ptr [rdi+10h]
      vaddss  xmm7, xmm7, xmm1
      vaddss  xmm6, xmm6, xmm1
    }
  }
  _RSI = DVARFLT_vehHudTargetScreenEdgeClampBufferTop;
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferTop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm8, dword ptr [rsi+28h] }
  _RSI = DVARFLT_vehHudTargetScreenEdgeClampBufferBottom;
  if ( !DVARFLT_vehHudTargetScreenEdgeClampBufferBottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetScreenEdgeClampBufferBottom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmulss  xmm0, xmm9, cs:__real@40000000
    vsubss  xmm1, xmm0, dword ptr [rdi+30h]
    vmaxss  xmm3, xmm1, dword ptr [rdi+28h]
    vmulss  xmm2, xmm10, cs:__real@40000000
    vsubss  xmm0, xmm2, dword ptr [rdi+34h]
    vmaxss  xmm4, xmm0, dword ptr [rdi+2Ch]
    vmovss  xmm2, dword ptr [rbx]
    vmaxss  xmm1, xmm3, xmm7
    vmaxss  xmm0, xmm3, xmm6
    vsubss  xmm7, xmm1, xmm9
    vmaxss  xmm1, xmm8, xmm4
    vsubss  xmm3, xmm9, xmm0
    vmovss  xmm0, dword ptr [rsi+28h]
    vsubss  xmm6, xmm1, xmm10
  }
  result = 0i64;
  __asm
  {
    vcomiss xmm2, xmm7
    vmaxss  xmm1, xmm0, xmm4
    vsubss  xmm5, xmm10, xmm1
    vcomiss xmm2, xmm3
    vmovss  xmm3, dword ptr [rbx+4]
    vcomiss xmm3, xmm6
    vcomiss xmm3, xmm5
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
CG_DrawVehicleDebug
==============
*/
void CG_DrawVehicleDebug(LocalClientNum_t localClientNum)
{
  const dvar_t *v3; 
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *v6; 
  const centity_t *Entity; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  GfxFont *v17; 
  float fmt; 
  float fmta; 
  __int64 y; 
  float ya; 
  float yb; 
  __int64 horzAlign; 
  float v33; 
  float v34; 
  char dest[112]; 

  v3 = DCONST_DVARINT_bg_vehicleDebug;
  v4 = localClientNum;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xBu) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum != 2047 )
    {
      __asm
      {
        vmovaps [rsp+118h+var_28], xmm6
        vmovaps [rsp+118h+var_38], xmm8
      }
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
      {
        LODWORD(horzAlign) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", horzAlign) )
          __debugbreak();
      }
      if ( (unsigned int)v4 >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(horzAlign) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(y) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[v4] )
      {
        LODWORD(horzAlign) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", horzAlign) )
          __debugbreak();
      }
      v6 = CgVehicleSystem::ms_vehicleSystemArray[v4];
      Entity = CG_GetEntity((const LocalClientNum_t)v4, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
      _RBX = CgVehicleSystem::GetClient(v6, Entity);
      __asm
      {
        vmovss  xmm8, cs:__real@3e99999a
        vmovaps xmm2, xmm8; scale
      }
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v4);
      FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+30h]
        vmulss  xmm0, xmm0, cs:__real@3d68ba2f
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      v17 = FontHandle;
      Com_sprintf(dest, 0x64ui64, "Speed: %f MPH", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm0, cs:__real@438c0000
        vmovss  xmm6, cs:__real@42200000
        vmovss  [rsp+118h+var_D8], xmm8
        vmovss  [rsp+118h+y], xmm0
        vmovss  dword ptr [rsp+118h+fmt], xmm6
      }
      UI_DrawText(ActivePlacement, dest, 100, v17, fmt, ya, 1, 1, v33, &colorGreen, 3);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+34h]
        vmulss  xmm1, xmm0, cs:__real@3d68ba2f
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x64ui64, "Slide: %f MPH", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm0, cs:__real@43920000
        vmovss  [rsp+118h+var_D8], xmm8
        vmovss  [rsp+118h+y], xmm0
        vmovss  dword ptr [rsp+118h+fmt], xmm6
      }
      UI_DrawText(ActivePlacement, dest, 100, v17, fmta, yb, 1, 1, v34, &colorGreen, 3);
      __asm
      {
        vmovaps xmm8, [rsp+118h+var_38]
        vmovaps xmm6, [rsp+118h+var_28]
      }
    }
  }
}

/*
==============
CG_DrawVehicleReticle
==============
*/
void CG_DrawVehicleReticle(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color, double a4)
{
  cg_t *LocalClientGlobals; 
  __int16 viewlocked_entNum; 
  centity_t *Entity; 
  CgWeaponMap *Instance; 
  unsigned __int16 weaponIdx; 
  bool v12; 
  WeaponDef **v13; 
  WeaponDef *v14; 
  __int64 v15; 
  unsigned int v16; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xBu) )
  {
    viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
    if ( viewlocked_entNum != 2047 )
    {
      Entity = CG_GetEntity(localClientNum, viewlocked_entNum);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 971, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      Instance = CgWeaponMap::GetInstance(localClientNum);
      weaponIdx = BG_GetWeaponForEntity(Instance, &Entity->nextState)->weaponIdx;
      if ( weaponIdx )
      {
        if ( weaponIdx > bg_lastParsedWeaponIndex )
        {
          v16 = bg_lastParsedWeaponIndex;
          LODWORD(v15) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v15, v16) )
            __debugbreak();
        }
        v12 = bg_weaponDefs[weaponIdx] == NULL;
        v13 = &bg_weaponDefs[weaponIdx];
        if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        v14 = *v13;
        *(_WORD *)&rect->horzAlign = 514;
        if ( v14->activeReticleType == VEH_ACTIVE_RETICLE_PIP_ON_A_STICK )
        {
          CG_DrawPipOnAStickReticle(localClientNum, rect, color);
        }
        else if ( v14->activeReticleType == VEH_ACTIVE_RETICLE_BOUNCING_DIAMOND )
        {
          CG_DrawBouncingDiamond(localClientNum, rect, color, a4);
        }
      }
    }
  }
}

/*
==============
CG_DrawVehicleTargets
==============
*/
void CG_DrawVehicleTargets(LocalClientNum_t localClientNum, rectDef_s *rect, const vec4_t *color)
{
  cg_t *LocalClientGlobals; 
  int v19; 
  __int64 v20; 
  __int64 v25; 
  int clientNum; 
  centity_t *Entity; 
  int flags; 
  int materialIndex; 
  Material *v95; 
  int v102; 
  int v103; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  const DObj *ClientDObj; 
  char v118; 
  char v119; 
  int v120; 
  int v128; 
  char v187; 
  bool v188; 
  const char **p_name; 
  int maxSize; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float h; 
  float ha; 
  float recta; 
  float inOutColor; 
  float inOutColora; 
  Material *pipRect; 
  cg_t *v269; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  vec4_t *colora; 
  __int64 v273; 
  PipRect v274; 
  __int64 v275; 
  vec3_t outScreenPos; 
  Bounds bounds; 
  vec3_t v278; 
  vec3_t worldDir; 
  vec3_t out; 
  vec4_t v281; 
  vec2_t v282; 
  tmat33_t<vec3_t> axis; 
  vec2_t in; 
  vec2_t v285; 
  vec3_t v286; 
  vec3_t v287; 
  vec2_t v288; 
  char v289; 
  void *retaddr; 

  _RAX = &retaddr;
  v275 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  colora = (vec4_t *)color;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rbp+170h+var_1E0.pipX0], xmm0
  }
  v274.pipRectValid = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v269 = LocalClientGlobals;
  *(_WORD *)&rect->horzAlign = 514;
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v19 = 0;
  v20 = 0i64;
  v273 = 0i64;
  __asm
  {
    vmovss  xmm15, dword ptr [rsp+270h+outOrg+8]
    vmovss  xmm7, dword ptr [rsp+270h+outOrg+4]
    vmovss  xmm9, dword ptr [rsp+270h+outOrg]
    vxorps  xmm14, xmm14, xmm14
  }
  do
  {
    v25 = v20;
    _RBX = &LocalClientGlobals->targets[v25];
    if ( _RBX->entNum != 2047 && ((LocalClientGlobals->targets[v25].flags & 2) == 0 || CG_JavelinADS(localClientNum)) )
    {
      clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
      if ( (clientNum || (_RBX->flags & 4) == 0) && (clientNum != 1 || (_RBX->flags & 8) == 0) && (clientNum != 2 || (_RBX->flags & 0x10) == 0) && (clientNum != 3 || (_RBX->flags & 0x20) == 0) )
      {
        Entity = CG_GetEntity(localClientNum, _RBX->entNum);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 466, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
          __debugbreak();
        if ( (Entity->flags & 1) != 0 )
        {
          flags = _RBX->flags;
          if ( (flags & 0xC040) != 0 )
          {
            AnglesToAxis(&Entity->pose.angles, &axis);
            flags = _RBX->flags;
          }
          if ( (flags & 0x4000) != 0 )
          {
            MatrixTransformVector(&_RBX->offset, &axis, &out);
            flags = _RBX->flags;
            __asm
            {
              vmovss  xmm10, dword ptr [rbp+170h+out+8]
              vmovss  xmm11, dword ptr [rbp+170h+out+4]
              vmovss  xmm12, dword ptr [rbp+170h+out]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm12, dword ptr [rbx+4]
              vmovss  dword ptr [rbp+170h+out], xmm12
              vmovss  xmm11, dword ptr [rbx+8]
              vmovss  dword ptr [rbp+170h+out+4], xmm11
              vmovss  xmm10, dword ptr [rbx+0Ch]
              vmovss  dword ptr [rbp+170h+out+8], xmm10
            }
          }
          if ( (flags & 0x8000) != 0 )
          {
            _RAX = CG_GetLocalClientGlobals(localClientNum);
            __asm
            {
              vmovss  xmm4, dword ptr [rax+6948h]
              vmovss  xmm3, dword ptr [rax+6944h]
              vmovss  xmm7, dword ptr [rax+694Ch]
              vmovss  xmm8, dword ptr [rbp+170h+axis+18h]
              vmulss  xmm1, xmm3, xmm8
              vmovss  xmm6, dword ptr [rbp+170h+axis+1Ch]
              vmulss  xmm0, xmm4, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmovss  xmm5, dword ptr [rbp+170h+axis+20h]
              vmulss  xmm1, xmm7, xmm5
              vaddss  xmm0, xmm2, xmm1
              vmulss  xmm3, xmm3, xmm0
              vmulss  xmm4, xmm4, xmm0
              vmulss  xmm1, xmm7, xmm0
              vsubss  xmm7, xmm8, xmm3
              vsubss  xmm4, xmm6, xmm4
              vsubss  xmm5, xmm5, xmm1
              vmulss  xmm1, xmm4, xmm4
              vmulss  xmm0, xmm7, xmm7
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, xmm5
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm3, xmm2, xmm2
              vcmpless xmm0, xmm3, cs:__real@80000000
              vmovss  xmm13, cs:__real@3f800000
              vblendvps xmm1, xmm3, xmm13, xmm0
              vdivss  xmm0, xmm13, xmm1
              vmulss  xmm8, xmm0, xmm7
              vmulss  xmm6, xmm0, xmm4
              vmulss  xmm9, xmm0, xmm5
              vmulss  xmm1, xmm6, dword ptr [rax+6960h]
              vmulss  xmm0, xmm8, dword ptr [rax+695Ch]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm9, dword ptr [rax+6964h]
              vaddss  xmm0, xmm2, xmm1; val
              vmovaps xmm2, xmm13; max
              vmovss  xmm1, cs:__real@bf800000; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovaps xmm7, xmm0
              vmulss  xmm2, xmm6, dword ptr [rdi+6954h]
              vmulss  xmm1, xmm8, dword ptr [rdi+6950h]
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm9, dword ptr [rdi+6958h]
              vaddss  xmm0, xmm3, xmm2; val
              vmovaps xmm2, xmm13; max
              vmovss  xmm8, cs:__real@bf800000
              vmovaps xmm1, xmm8; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovaps xmm6, xmm0
              vmovaps xmm0, xmm7; X
            }
            *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm0, cs:__real@c2652ee0
              vcmpless xmm0, xmm14, xmm6
              vblendvps xmm0, xmm8, xmm13, xmm0
              vmulss  xmm13, xmm1, xmm0
              vmovss  xmm7, dword ptr [rsp+270h+outOrg+4]
              vmovss  xmm9, dword ptr [rsp+270h+outOrg]
            }
            v19 = 0;
          }
          else
          {
            __asm { vmovaps xmm13, xmm14 }
          }
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          __asm
          {
            vaddss  xmm12, xmm12, dword ptr [rsp+270h+outOrigin]
            vaddss  xmm11, xmm11, dword ptr [rsp+270h+outOrigin+4]
            vaddss  xmm10, xmm10, dword ptr [rsp+270h+outOrigin+8]
            vsubss  xmm1, xmm12, xmm9
            vmovss  dword ptr [rbp+170h+worldDir], xmm1
            vsubss  xmm0, xmm11, xmm7
            vmovss  dword ptr [rbp+170h+worldDir+4], xmm0
            vsubss  xmm1, xmm10, xmm15
            vmovss  dword ptr [rbp+170h+worldDir+8], xmm1
          }
          CG_WorldDirToScreenPosVirtualCentered(localClientNum, &worldDir, (vec2_t *)&outScreenPos);
          if ( _RBX->offscreenMaterialIndex == -1 || (v19 = CG_DrawTargets_ClampScreenPosToEdges(localClientNum, (vec2_t *)&outScreenPos)) == 0 || (materialIndex = _RBX->offscreenMaterialIndex, materialIndex == -1) )
          {
            materialIndex = _RBX->materialIndex;
            if ( materialIndex == -1 )
              goto LABEL_95;
          }
          v95 = CG_Draw_MaterialHandleForIndex(localClientNum, materialIndex);
          if ( !v95 )
            goto LABEL_95;
          _RSI = DVARFLT_vehHudTargetSize;
          if ( !DVARFLT_vehHudTargetSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHudTargetSize") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm8, dword ptr [rsi+28h]
            vmulss  xmm6, xmm8, cs:__real@3f000000
          }
          _RAX = colora;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rbp+170h+var_168], xmm0
          }
          if ( !v19 || _RBX->offscreenMaterialIndex == -1 )
          {
            if ( (_RBX->flags & 0x440) != 0 )
            {
              __asm
              {
                vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
                vmovups xmmword ptr [rbp+170h+bounds.midPoint], xmm0
                vmovss  xmm0, cs:__real@ff7fffff
                vmovss  dword ptr [rbp+170h+bounds.halfSize+4], xmm0
                vmovss  dword ptr [rbp+170h+bounds.halfSize+8], xmm0
              }
              ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
              __asm { vcomiss xmm14, dword ptr [rbx+50h] }
              if ( !(v119 | v118) )
              {
                DObjGetVisibleBounds(ClientDObj, &_RBX->lBounds);
                __asm { vcomiss xmm14, dword ptr [rbx+50h] }
                if ( !(v119 | v118) )
                {
                  __asm { vcomiss xmm14, dword ptr [rbx+18h] }
                  if ( !v119 )
                  {
LABEL_42:
                    LocalClientGlobals = v269;
LABEL_95:
                    memset(&outOrigin, 0, sizeof(outOrigin));
                    v19 = 0;
                    goto LABEL_96;
                  }
                  if ( (_RBX->flags & 0x400) == 0 )
                  {
                    LocalClientGlobals = v269;
                    goto LABEL_95;
                  }
                }
              }
              v120 = _RBX->flags;
              if ( (v120 & 0x40) != 0 )
              {
                __asm { vucomiss xmm13, xmm14 }
                if ( (v120 & 0x40) != 0 )
                {
                  MatrixTransformVector(&_RBX->lBounds.midPoint, &axis, &v278);
                  __asm
                  {
                    vaddss  xmm2, xmm12, dword ptr [rbp+170h+var_198]
                    vaddss  xmm3, xmm11, dword ptr [rbp+170h+var_198+4]
                    vaddss  xmm4, xmm10, dword ptr [rbp+170h+var_198+8]
                    vsubss  xmm1, xmm2, xmm9
                    vmovss  dword ptr [rbp+170h+var_198], xmm1
                    vsubss  xmm0, xmm3, xmm7
                    vmovss  dword ptr [rbp+170h+var_198+4], xmm0
                    vsubss  xmm1, xmm4, xmm15
                    vmovss  dword ptr [rbp+170h+var_198+8], xmm1
                  }
                  if ( !CG_WorldDirToScreenPosVirtualCentered(localClientNum, &v278, &v282) )
                  {
                    LocalClientGlobals = v269;
                    goto LABEL_95;
                  }
                }
                _ER14 = 0;
                v128 = 0;
                while ( 1 )
                {
                  __asm { vmovss  xmm4, dword ptr [rbx+50h] }
                  _EAX = v128 & 1;
                  __asm
                  {
                    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
                    vxorps  xmm3, xmm4, xmm6
                    vmovd   xmm1, r14d
                    vmovd   xmm0, eax
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm1, xmm4, xmm3, xmm2
                    vaddss  xmm9, xmm1, dword ptr [rbx+44h]
                    vmovss  xmm5, dword ptr [rbx+54h]
                  }
                  _EAX = v128 & 2;
                  __asm
                  {
                    vxorps  xmm3, xmm5, xmm6
                    vmovd   xmm1, r14d
                    vmovd   xmm0, eax
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm1, xmm5, xmm3, xmm2
                    vaddss  xmm8, xmm1, dword ptr [rbx+48h]
                    vmovss  xmm4, dword ptr [rbx+58h]
                  }
                  _EAX = v128 & 4;
                  __asm
                  {
                    vxorps  xmm3, xmm4, xmm6
                    vmovd   xmm1, r14d
                    vmovd   xmm0, eax
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm1, xmm4, xmm3, xmm2
                    vaddss  xmm7, xmm1, dword ptr [rbx+4Ch]
                    vmulss  xmm3, xmm9, dword ptr [rbp+170h+axis]
                    vmulss  xmm2, xmm8, dword ptr [rbp+170h+axis+0Ch]
                    vaddss  xmm4, xmm3, xmm2
                    vmulss  xmm1, xmm7, dword ptr [rbp+170h+axis+18h]
                    vaddss  xmm6, xmm4, xmm1
                    vmulss  xmm3, xmm9, dword ptr [rbp+170h+axis+4]
                    vmulss  xmm1, xmm8, dword ptr [rbp+170h+axis+10h]
                    vaddss  xmm4, xmm3, xmm1
                    vmulss  xmm0, xmm7, dword ptr [rbp+170h+axis+1Ch]
                    vaddss  xmm5, xmm4, xmm0
                    vmulss  xmm3, xmm9, dword ptr [rbp+170h+axis+8]
                    vmulss  xmm2, xmm8, dword ptr [rbp+170h+axis+14h]
                    vaddss  xmm4, xmm3, xmm2
                    vmulss  xmm0, xmm7, dword ptr [rbp+170h+axis+20h]
                    vaddss  xmm2, xmm4, xmm0
                    vaddss  xmm3, xmm6, xmm12
                    vaddss  xmm1, xmm5, xmm11
                    vaddss  xmm4, xmm2, xmm10
                    vsubss  xmm0, xmm3, dword ptr [rsp+270h+outOrg]
                    vmovss  dword ptr [rbp+170h+var_110], xmm0
                    vmovss  xmm7, dword ptr [rsp+270h+outOrg+4]
                    vsubss  xmm1, xmm1, xmm7
                    vmovss  dword ptr [rbp+170h+var_110+4], xmm1
                    vsubss  xmm0, xmm4, xmm15
                    vmovss  dword ptr [rbp+170h+var_110+8], xmm0
                  }
                  if ( !CG_WorldDirToScreenPosVirtualCentered(localClientNum, &v286, (vec2_t *)&outScreenPos) )
                    goto LABEL_42;
                  __asm
                  {
                    vucomiss xmm13, xmm14
                    vmovss  xmm0, dword ptr [rbp+170h+outScreenPos]
                    vsubss  xmm1, xmm0, dword ptr [rbp+170h+var_158]
                    vmovss  dword ptr [rbp+170h+in], xmm1
                    vmovss  xmm2, dword ptr [rbp+170h+outScreenPos+4]
                    vsubss  xmm0, xmm2, dword ptr [rbp+170h+var_158+4]
                    vmovss  dword ptr [rbp+170h+in+4], xmm0
                    vmulss  xmm1, xmm13, cs:__real@bc8efa35; radians
                  }
                  Vec2Rotate(&in, *(float *)&_XMM1, &v285);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+170h+var_118]
                    vaddss  xmm1, xmm0, dword ptr [rbp+170h+var_158]
                    vmovss  dword ptr [rbp+170h+outScreenPos], xmm1
                    vmovss  xmm2, dword ptr [rbp+170h+var_118+4]
                    vaddss  xmm0, xmm2, dword ptr [rbp+170h+var_158+4]
                    vmovss  dword ptr [rbp+170h+outScreenPos+4], xmm0
                  }
                  Bounds_AddPoint(&bounds, &outScreenPos);
                  if ( ++v128 >= 8 )
                  {
                    __asm
                    {
                      vmovss  xmm6, dword ptr [rbp+170h+bounds.halfSize+4]
                      vmovss  xmm7, dword ptr [rbp+170h+bounds.halfSize]
                    }
                    LocalClientGlobals = v269;
                    goto LABEL_66;
                  }
                }
              }
              v187 = ((_RBX->flags & 0x400) != 0) | v118;
              if ( (v120 & 0x400) == 0 )
              {
                v188 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 614, ASSERT_TYPE_ASSERT, "(targ->flags & TARGETFLAG_DRAW_RECT)", (const char *)&queryFormat, "targ->flags & TARGETFLAG_DRAW_RECT");
                v187 = !v188;
                if ( v188 )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm6, dword ptr [rbx+18h]
                vcomiss xmm6, xmm14
              }
              if ( v187 )
              {
                __asm
                {
                  vmovss  xmm2, dword ptr [rbx+54h]
                  vmovss  xmm0, dword ptr [rbx+50h]
                  vmovss  xmm3, dword ptr [rbx+58h]
                  vmulss  xmm1, xmm0, xmm0
                  vmulss  xmm0, xmm2, xmm2
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm2, xmm2, xmm1
                  vsqrtss xmm6, xmm2, xmm2
                }
              }
              __asm
              {
                vsubss  xmm0, xmm12, xmm9
                vmovss  dword ptr [rbp+170h+worldDir], xmm0
                vsubss  xmm1, xmm11, xmm7
                vmovss  dword ptr [rbp+170h+worldDir+4], xmm1
                vsubss  xmm0, xmm10, xmm15
                vmovss  dword ptr [rbp+170h+worldDir+8], xmm0
              }
              CG_WorldDirToScreenPosVirtualCentered(localClientNum, &worldDir, (vec2_t *)&outScreenPos);
              LocalClientGlobals = v269;
              __asm
              {
                vmulss  xmm0, xmm6, dword ptr [rsi+6950h]
                vaddss  xmm4, xmm0, xmm12
                vmulss  xmm1, xmm6, dword ptr [rsi+6954h]
                vaddss  xmm3, xmm1, xmm11
                vmulss  xmm0, xmm6, dword ptr [rsi+6958h]
                vaddss  xmm2, xmm0, xmm10
                vsubss  xmm1, xmm4, xmm9
                vmovss  dword ptr [rbp+170h+var_100], xmm1
                vsubss  xmm0, xmm3, xmm7
                vmovss  dword ptr [rbp+170h+var_100+4], xmm0
                vsubss  xmm1, xmm2, xmm15
                vmovss  dword ptr [rbp+170h+var_100+8], xmm1
              }
              CG_WorldDirToScreenPosVirtualCentered(localClientNum, &v287, &v288);
              __asm
              {
                vmovss  xmm5, dword ptr [rbp+170h+outScreenPos]
                vmovss  xmm0, dword ptr [rbp+170h+var_F0]
                vsubss  xmm2, xmm0, xmm5
                vmovss  xmm4, dword ptr [rbp+170h+outScreenPos+4]
                vmovss  xmm1, dword ptr [rbp+170h+var_F0+4]
                vsubss  xmm0, xmm1, xmm4
                vmulss  xmm3, xmm0, xmm0
                vmulss  xmm2, xmm2, xmm2
                vaddss  xmm1, xmm3, xmm2
                vsqrtss xmm6, xmm1, xmm1
                vmovss  dword ptr [rbp+170h+bounds.midPoint], xmm5
                vmovss  dword ptr [rbp+170h+bounds.midPoint+4], xmm4
                vmovss  xmm0, [rbp+170h+var_1B8]
                vmovss  dword ptr [rbp+170h+bounds.midPoint+8], xmm0
                vmovaps xmm7, xmm6
                vmovss  dword ptr [rbp+170h+bounds.halfSize], xmm6
                vmovss  dword ptr [rbp+170h+bounds.halfSize+4], xmm6
                vmovss  dword ptr [rbp+170h+bounds.halfSize+8], xmm6
              }
LABEL_66:
              __asm
              {
                vminss  xmm0, xmm6, xmm7
                vmovss  xmm10, cs:__real@40000000
                vmulss  xmm8, xmm0, xmm10
              }
              if ( _RBX->minSize > 0 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vcomiss xmm0, xmm8
                }
                if ( (_RBX->flags & 0x100) != 0 )
                {
                  __asm { vmovss  xmm7, dword ptr [rsp+270h+outOrg+4] }
                  goto LABEL_95;
                }
              }
              if ( v95->textureCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 639, ASSERT_TYPE_ASSERT, "( ( material->textureCount == 1 ) )", "( material->name ) = %s", v95->name) )
                __debugbreak();
              p_name = &v95->textureTable->image->name;
              if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 641, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
                __debugbreak();
              if ( *((_BYTE *)p_name + 46) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 642, ASSERT_TYPE_ASSERT, "( ( image->semantic == TS_2D ) )", "( image->name ) = %s", *p_name) )
                __debugbreak();
              if ( *((_BYTE *)p_name + 48) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 643, ASSERT_TYPE_ASSERT, "( ( image->levelCount == 1 ) )", "( image->name ) = %s", *p_name) )
                __debugbreak();
              if ( _RBX->minSize > 0 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ecx
                  vcomiss xmm8, xmm0
                }
              }
              maxSize = _RBX->maxSize;
              if ( maxSize > 0 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ecx
                  vcomiss xmm8, xmm0
                  vucomiss xmm6, xmm14
                  vmulss  xmm1, xmm0, cs:__real@3f000000
                  vcomiss xmm7, xmm6
                  vdivss  xmm0, xmm7, xmm6
                  vmulss  xmm3, xmm0, xmm1
                  vmovss  dword ptr [rbp+170h+bounds.halfSize], xmm3
                  vmovss  dword ptr [rbp+170h+bounds.halfSize+4], xmm1
                  vmovaps xmm2, xmm1
                  vminss  xmm0, xmm2, xmm3
                  vmulss  xmm8, xmm0, xmm10
                }
              }
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vminss  xmm1, xmm0, xmm8
                vmovss  dword ptr [rsp+270h+inOutColor], xmm13
                vmovss  dword ptr [rsp+270h+rect], xmm1
              }
              CG_DrawScaledRect(localClientNum, rect, colora, v95, &bounds, _RBX, recta, inOutColora, LocalClientGlobals->time, &v274);
LABEL_85:
              __asm { vmovss  xmm7, dword ptr [rsp+270h+outOrg+4] }
              goto LABEL_95;
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+170h+outScreenPos+4]
              vsubss  xmm3, xmm0, xmm6; y0
              vmovss  xmm1, dword ptr [rbp+170h+outScreenPos]
              vsubss  xmm2, xmm1, xmm6; x0
              vmovss  [rsp+270h+h], xmm8
              vmovss  dword ptr [rsp+270h+fmt], xmm8
            }
            if ( !PipRect::CalcOverlap(&v274, localClientNum, *(float *)&_XMM2, *(float *)&_XMM3, fmta, ha, rect, &v281) )
            {
              LocalClientGlobals = v269;
              goto LABEL_95;
            }
            vertAlign = rect->vertAlign;
            horzAlign = rect->horzAlign;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+170h+outScreenPos+4]
              vsubss  xmm7, xmm0, xmm6
              vmovss  xmm1, dword ptr [rbp+170h+outScreenPos]
              vsubss  xmm6, xmm1, xmm6
            }
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            pipRect = v95;
            __asm { vmovss  dword ptr [rsp+270h+inOutColor], xmm13 }
          }
          else
          {
            __asm { vmovaps xmm9, xmm14 }
            v102 = v19 - 2;
            if ( v102 )
            {
              v103 = v102 - 1;
              if ( v103 )
              {
                if ( v103 == 1 )
                  __asm { vmovss  xmm9, cs:__real@43870000 }
              }
              else
              {
                __asm { vmovss  xmm9, cs:__real@42b40000 }
              }
            }
            else
            {
              __asm { vmovss  xmm9, cs:__real@43340000 }
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+170h+outScreenPos+4]
              vsubss  xmm3, xmm0, xmm6; y0
              vmovss  xmm1, dword ptr [rbp+170h+outScreenPos]
              vsubss  xmm2, xmm1, xmm6; x0
              vmovss  [rsp+270h+h], xmm8
              vmovss  dword ptr [rsp+270h+fmt], xmm8
            }
            if ( !PipRect::CalcOverlap(&v274, localClientNum, *(float *)&_XMM2, *(float *)&_XMM3, fmt, h, rect, &v281) )
              goto LABEL_42;
            vertAlign = rect->vertAlign;
            horzAlign = rect->horzAlign;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+170h+outScreenPos+4]
              vsubss  xmm7, xmm0, xmm6
              vmovss  xmm1, dword ptr [rbp+170h+outScreenPos]
              vsubss  xmm6, xmm1, xmm6
            }
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            pipRect = v95;
            __asm { vmovss  dword ptr [rsp+270h+inOutColor], xmm9 }
          }
          __asm
          {
            vmovss  dword ptr [rsp+270h+fmt], xmm8
            vmovaps xmm3, xmm8; width
            vmovaps xmm2, xmm7; y
            vmovaps xmm1, xmm6; x
          }
          CG_DrawRotatedPicWithoutSplitScreenScaling(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, horzAlign, vertAlign, inOutColor, &v281, pipRect);
          LocalClientGlobals = v269;
          goto LABEL_85;
        }
      }
    }
LABEL_96:
    v20 = v273 + 1;
    v273 = v20;
    __asm { vmovss  xmm9, dword ptr [rsp+270h+outOrg] }
  }
  while ( v20 < 64 );
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v289;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CG_GetTargetPos
==============
*/
bool CG_GetTargetPos(LocalClientNum_t localClientNum, int targetEntNum, vec3_t *outPos)
{
  int v11; 
  __int64 v12; 
  targetInfo_t *targets; 
  bool result; 
  centity_t *Entity; 
  vec3_t outOrigin; 
  __int64 v44; 
  tmat33_t<vec3_t> axis; 
  char v46; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v44 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _R14 = outPos;
  _RSI = CG_GetLocalClientGlobals(localClientNum);
  v11 = 0;
  v12 = 0i64;
  targets = _RSI->targets;
  while ( targets->entNum != targetEntNum )
  {
    ++v11;
    ++v12;
    ++targets;
    if ( v12 >= 64 )
    {
      result = 0;
      goto LABEL_15;
    }
  }
  Entity = CG_GetEntity(localClientNum, targetEntNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 839, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  _RDI = v11;
  if ( (_RSI->targets[_RDI].flags & 0x4000) != 0 )
  {
    AnglesToAxis(&Entity->pose.angles, &axis);
    _RDI = (char *)&_RSI->targets[_RDI].offset;
    if ( _RDI == &v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm5, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm6, dword ptr [rdi+8]
      vmulss  xmm1, xmm4, dword ptr [rsp+0E8h+axis]
      vmulss  xmm0, xmm5, dword ptr [rsp+0E8h+axis+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+axis+18h]
      vaddss  xmm7, xmm2, xmm1
      vmulss  xmm3, xmm4, dword ptr [rsp+0E8h+axis+4]
      vmulss  xmm0, xmm5, dword ptr [rsp+0E8h+axis+10h]
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+axis+1Ch]
      vaddss  xmm8, xmm2, xmm1
      vmulss  xmm3, xmm4, dword ptr [rsp+0E8h+axis+8]
      vmulss  xmm0, xmm5, dword ptr [rsp+0E8h+axis+14h]
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+axis+20h]
      vaddss  xmm6, xmm2, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rdi+rsi+64C3Ch]
      vmovss  xmm8, dword ptr [rdi+rsi+64C40h]
      vmovss  xmm6, dword ptr [rdi+rsi+64C44h]
    }
  }
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  __asm
  {
    vaddss  xmm1, xmm7, dword ptr [rsp+0E8h+outOrigin]
    vmovss  dword ptr [r14], xmm1
    vaddss  xmm0, xmm8, dword ptr [rsp+0E8h+outOrigin+4]
    vmovss  dword ptr [r14+4], xmm0
    vaddss  xmm2, xmm6, dword ptr [rsp+0E8h+outOrigin+8]
    vmovss  dword ptr [r14+8], xmm2
  }
  result = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_15:
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
CG_InitVehicleReticle
==============
*/
void CG_InitVehicleReticle(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->vehReticleLockOnEntNum = 2047;
  LocalClientGlobals->vehReticleOffset = 0i64;
  LocalClientGlobals->vehReticleVel = 0i64;
}

/*
==============
CG_ReticleStartLockOn
==============
*/
void CG_ReticleStartLockOn(LocalClientNum_t localClientNum, int targetEntNum, int msecDuration)
{
  cg_t *LocalClientGlobals; 
  int time; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  time = LocalClientGlobals->time;
  LocalClientGlobals->vehReticleLockOnEntNum = targetEntNum;
  LocalClientGlobals->vehReticleLockOnStartTime = time;
  LocalClientGlobals->vehReticleLockOnDuration = msecDuration;
}

/*
==============
CG_TargetsChanged
==============
*/

void __fastcall CG_TargetsChanged(LocalClientNum_t localClientNum, int num, double _XMM2_8, double _XMM3_8)
{
  __int64 v6; 
  const char *ConfigString; 
  int v10; 
  const char *v11; 
  int v12; 
  int v13; 
  int v14; 
  const char *v15; 
  __int64 v16; 
  const char *v17; 
  int v18; 
  const char *v19; 
  int v20; 
  const char *v21; 
  const char *v24; 
  int v25; 
  const char *v26; 
  const char *v27; 
  const char *v38; 
  const char *v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 

  v6 = num;
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  ConfigString = CL_GetConfigString(v6);
  if ( (unsigned int)(v6 - 4014) >= 0x40 )
  {
    v55 = 64;
    v54 = v6 - 4014;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_hud.cpp", 1010, ASSERT_TYPE_ASSERT, "(unsigned)( targetIndex ) < (unsigned)( 64 )", "targetIndex doesn't index IW_MAX_TARGETS\n\t%i not in [0, %i)", v54, v55) )
      __debugbreak();
  }
  _RBX = 120 * v6;
  if ( *ConfigString )
  {
    v10 = *(_DWORD *)((char *)_RDI + _RBX - 68952);
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    v11 = Info_ValueForKey(ConfigString, "ent");
    if ( *v11 )
      v12 = atoi(v11);
    else
      v12 = 2047;
    v13 = 0;
    *(_DWORD *)((char *)_RDI + _RBX - 68952) = v12;
    v14 = -1;
    if ( v12 != v10 )
    {
      *(_DWORD *)((char *)_RDI + _RBX - 68856) = -1;
      *(_QWORD *)((char *)_RDI + _RBX - 68884) = 0i64;
      *(_DWORD *)((char *)_RDI + _RBX - 68876) = 0;
      *(_DWORD *)((char *)_RDI + _RBX - 68872) = -8388609;
      *(_DWORD *)((char *)_RDI + _RBX - 68868) = -8388609;
      *(_DWORD *)((char *)_RDI + _RBX - 68864) = -8388609;
    }
    v15 = Info_ValueForKey(ConfigString, "offs");
    v16 = (__int64)_RDI + _RBX - 68948;
    *(_QWORD *)v16 = 0i64;
    *(_DWORD *)(v16 + 8) = 0;
    if ( *v15 )
      j_sscanf(v15, "%f %f %f", v16, (char *)_RDI + _RBX - 68944, (char *)_RDI + _RBX - 68940);
    v17 = Info_ValueForKey(ConfigString, "mat");
    if ( *v17 )
      v18 = atoi(v17);
    else
      v18 = -1;
    *(_DWORD *)((char *)_RDI + _RBX - 68936) = v18;
    v19 = Info_ValueForKey(ConfigString, "offmat");
    if ( *v19 )
      v20 = atoi(v19);
    else
      v20 = -1;
    *(_DWORD *)((char *)_RDI + _RBX - 68932) = v20;
    v21 = Info_ValueForKey(ConfigString, "entradius");
    __asm { vmovss  xmm6, cs:__real@bf800000 }
    if ( *v21 )
    {
      *(double *)&_XMM0 = atof(v21);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm1, xmm6 }
    }
    __asm { vmovss  dword ptr [rbx+rdi-10D40h], xmm1 }
    v24 = Info_ValueForKey(ConfigString, "minsize");
    if ( *v24 )
      v25 = atoi(v24);
    else
      v25 = -1;
    *(_DWORD *)((char *)_RDI + _RBX - 68924) = v25;
    v26 = Info_ValueForKey(ConfigString, "maxsize");
    if ( *v26 )
      v14 = atoi(v26);
    *(_DWORD *)((char *)_RDI + _RBX - 68920) = v14;
    v27 = Info_ValueForKey(ConfigString, "delay");
    if ( *v27 )
    {
      j_sscanf(v27, "%i %i %i %i", &v59, &v58, &v57, &v56);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rsp+0A8h+var_68]
        vmulss  xmm2, xmm0, cs:__real@3a83126f
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rsp+0A8h+var_5C]
        vmulss  xmm6, xmm0, cs:__real@3a83126f
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, [rsp+0A8h+var_64]
        vxorps  xmm4, xmm4, xmm4
        vcvtsi2ss xmm4, xmm4, [rsp+0A8h+var_60]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vxorps  xmm3, xmm3, xmm3
        vxorps  xmm4, xmm4, xmm4
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+rdi-10D34h], xmm6
      vmovss  dword ptr [rbx+rdi-10D2Ch], xmm4
      vmovss  dword ptr [rbx+rdi-10D28h], xmm3
      vmovss  dword ptr [rbx+rdi-10D30h], xmm2
    }
    v38 = Info_ValueForKey(ConfigString, "color");
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    *(_QWORD *)((char *)_RDI + _RBX - 68900) = 0i64;
    *(_QWORD *)((char *)_RDI + _RBX - 68892) = 0i64;
    if ( *v38 )
    {
      j_sscanf(v38, "%d %d %d %d", &v60, &v61, &v62, &v63);
      __asm
      {
        vmovss  xmm3, cs:__real@3b808081
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rsp+0A8h+var_58]
        vmulss  xmm0, xmm0, xmm3
        vmovss  dword ptr [rbx+rdi-10D24h], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, [rsp+0A8h+var_54]
        vmulss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbx+rdi-10D20h], xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rsp+0A8h+var_50]
        vmulss  xmm1, xmm0, xmm3
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, [rsp+0A8h+var_4C]
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbx+rdi-10D1Ch], xmm1
        vmovss  dword ptr [rbx+rdi-10D18h], xmm0
      }
    }
    v53 = Info_ValueForKey(ConfigString, "flags");
    if ( *v53 )
      v13 = atoi(v53);
    *(_DWORD *)((char *)_RDI + _RBX - 68860) = v13;
  }
  else
  {
    *(_DWORD *)((char *)_RDI + _RBX - 68952) = 2047;
  }
}

/*
==============
PipRect::CalcOverlap
==============
*/

bool __fastcall PipRect::CalcOverlap(PipRect *this, LocalClientNum_t localClientNum, double x0, double y0, float w, float h, rectDef_s *rect, vec4_t *inOutColor)
{
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *v21; 
  char v22; 
  char v23; 
  bool result; 
  float x; 
  float wa; 
  float y; 
  float v54; 
  float v58; 
  float v59; 

  __asm
  {
    vmovss  [rsp+arg_18], xmm3
    vmovss  [rsp+arg_10], xmm2
    vmovaps [rsp+98h+var_28], xmm6
  }
  _RSI = this;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm9
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->GetPIPScreenCoordinates(LocalClientGlobals, &x, &y, &wa, &v54) )
    goto LABEL_11;
  if ( !_RSI->pipRectValid )
  {
    _RSI->pipRectValid = 1;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    ScrPlace_ApplyRectWithoutSplitScreenScaling(ActivePlacement, &x, &y, &wa, &v54, 0, 0);
    __asm
    {
      vmovss  xmm0, [rsp+98h+x]
      vmovss  xmm1, [rsp+98h+y]
      vmovss  dword ptr [rsi], xmm0
      vaddss  xmm0, xmm0, [rsp+98h+w]
      vmovss  dword ptr [rsi+4], xmm0
      vaddss  xmm0, xmm1, [rsp+98h+var_4C]
      vmovss  dword ptr [rsi+0Ch], xmm0
      vmovss  dword ptr [rsi+8], xmm1
    }
  }
  vertAlign = rect->vertAlign;
  horzAlign = rect->horzAlign;
  v21 = ScrPlace_GetActivePlacement(localClientNum);
  ScrPlace_ApplyRectWithoutSplitScreenScaling(v21, &v58, &v59, &w, &h, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm4, [rsp+98h+arg_10]
    vmovss  xmm6, [rsp+98h+arg_20]
    vmovss  xmm9, dword ptr [rsi]
    vmovss  xmm3, [rsp+98h+arg_18]
    vaddss  xmm5, xmm3, [rsp+98h+arg_28]
    vaddss  xmm7, xmm4, xmm6
    vcomiss xmm7, xmm9
  }
  if ( v22 | v23 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+4]
    vcomiss xmm4, xmm2
  }
  if ( !v22 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vcomiss xmm5, xmm0
  }
  if ( v22 | v23 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vcomiss xmm3, xmm1
  }
  if ( !v22 )
    goto LABEL_11;
  __asm
  {
    vminss  xmm1, xmm1, xmm5
    vmaxss  xmm0, xmm0, xmm3
    vsubss  xmm3, xmm1, xmm0
    vmaxss  xmm1, xmm9, xmm4
    vminss  xmm2, xmm2, xmm7
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm6, [rsp+98h+arg_28]
    vmulss  xmm3, xmm3, xmm0
    vdivss  xmm1, xmm3, xmm2
    vcomiss xmm1, cs:__real@3f7d70a4
  }
  if ( v22 | v23 )
  {
    _RAX = inOutColor;
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm2, xmm0, xmm1
      vshufps xmm2, xmm2, xmm2, 0
      vmulps  xmm1, xmm2, xmmword ptr [rax]
      vmovups xmmword ptr [rax], xmm1
    }
LABEL_11:
    result = 1;
    goto LABEL_12;
  }
  result = 0;
LABEL_12:
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
  return result;
}

