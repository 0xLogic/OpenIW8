/*
==============
CG_BlurScene_EnableCheck
==============
*/

void __fastcall CG_BlurScene_EnableCheck(LocalClientNum_t localClientNum)
{
  ?CG_BlurScene_EnableCheck@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_FetchScreenSpaceScopeBoundingCircle
==============
*/

bool __fastcall CG_FetchScreenSpaceScopeBoundingCircle(LocalClientNum_t localClientNum, vec3_t *outBoundingCircle)
{
  return ?CG_FetchScreenSpaceScopeBoundingCircle@@YA_NW4LocalClientNum_t@@AEATvec3_t@@@Z(localClientNum, outBoundingCircle);
}

/*
==============
CG_BlurScene_EnableCheck
==============
*/
void CG_BlurScene_EnableCheck(LocalClientNum_t localClientNum)
{
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v11; 
  bool v13; 
  __int64 p_weapFlags; 
  char v23; 
  bool IsUsingDualFOV; 
  const WeaponAttachment *UnderbarrelAttachment; 
  bool adsAltSwitchCurrentWeaponIsDualFOV; 
  char v32; 
  bool v33; 
  bool v38; 
  Weapon r_weapon; 

  v7 = localClientNum;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    return;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX )
    return;
  __asm
  {
    vmovaps [rsp+0F8h+var_38], xmm7
    vmovaps [rsp+0F8h+var_78], xmm11
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blurscene.cpp", 163, ASSERT_TYPE_ASSERT, "(predictedPlayerState)", (const char *)&queryFormat, "predictedPlayerState") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = CgWeaponMap::ms_instance[v7];
  __asm
  {
    vmovaps [rsp+0F8h+var_28], xmm6
    vmovaps [rsp+0F8h+var_48], xmm8
  }
  if ( BG_IsUsingOffhandGestureWeaponADSSupport(v11, p_predictedPlayerState) )
  {
    _RAX = BG_GetOffhandGestureWeapon(v11, p_predictedPlayerState);
    v13 = 0;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0F8h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    *(double *)&_XMM0 = BG_GetOffhandAdsFrac(p_predictedPlayerState);
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+5A4A4h]
      vmovaps xmm6, xmm0
    }
    goto LABEL_15;
  }
  _RAX = BG_GetCurrentWeaponForPlayer(v11, p_predictedPlayerState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0F8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( p_predictedPlayerState )
  {
    p_weapFlags = (__int64)&p_predictedPlayerState->weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_13;
  }
  else
  {
    p_weapFlags = 1832i64;
  }
  if ( p_predictedPlayerState && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu)) )
  {
    v13 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v13 = 0;
LABEL_14:
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+7C64Ch]
    vmovss  xmm8, dword ptr [rbx+5A49Ch]
  }
LABEL_15:
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v23 = 0;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  if ( !_RBX->renderingThirdPerson )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_58], xmm9
      vmovaps [rsp+0F8h+var_68], xmm10
    }
    *(double *)&_XMM0 = BG_BlurSceneAdsInFraction(&r_weapon, v13);
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = BG_BlurSceneAdsOutFraction(&r_weapon, v13);
    __asm { vmovaps xmm10, xmm0 }
    IsUsingDualFOV = CG_View_IsUsingDualFOV((const LocalClientNum_t)v7);
    UnderbarrelAttachment = BG_GetUnderbarrelAttachment(&r_weapon);
    if ( _RBX->adsAltSwitchInProgress && ((adsAltSwitchCurrentWeaponIsDualFOV = _RBX->adsAltSwitchCurrentWeaponIsDualFOV) || _RBX->adsAltSwitchNextWeaponIsDualFOV) && UnderbarrelAttachment && (_RAX = UnderbarrelAttachment->adsAltSwitch) != NULL )
    {
      if ( _RBX->adsAltSwitchIsMainToAlt )
        __asm { vmovss  xmm0, dword ptr [rax+8] }
      else
        __asm { vmovss  xmm0, dword ptr [rax+18h] }
      if ( adsAltSwitchCurrentWeaponIsDualFOV && _RBX->adsAltSwitchNextWeaponIsDualFOV )
      {
        v32 = 1;
        v33 = 0;
        __asm { vmovaps xmm6, xmm7 }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rbx+18278h] }
        if ( _RBX->adsAltSwitchNextWeaponIsDualFOV )
        {
          v32 = 1;
          v33 = 0;
          __asm { vmovaps xmm9, xmm0 }
        }
        else
        {
          v32 = 0;
          v33 = 1;
          __asm
          {
            vsubss  xmm6, xmm7, xmm6
            vsubss  xmm10, xmm7, xmm0
          }
        }
      }
    }
    else
    {
      if ( !IsUsingDualFOV )
        goto LABEL_42;
      __asm { vcomiss xmm6, xmm8 }
      v32 = 1;
      __asm { vcomiss xmm8, xmm6 }
      v33 = IsUsingDualFOV;
    }
    if ( v32 )
    {
      __asm
      {
        vcomiss xmm6, xmm9
        vsubss  xmm1, xmm6, xmm9
        vsubss  xmm0, xmm7, xmm9
      }
LABEL_41:
      __asm { vdivss  xmm11, xmm1, xmm0 }
      v23 = 1;
      goto LABEL_42;
    }
    if ( v33 )
    {
      __asm
      {
        vcomiss xmm6, xmm10
        vsubss  xmm1, xmm6, xmm10
        vsubss  xmm0, xmm7, xmm10
      }
      goto LABEL_41;
    }
LABEL_42:
    __asm
    {
      vmovaps xmm9, [rsp+0F8h+var_58]
      vmovaps xmm10, [rsp+0F8h+var_68]
    }
  }
  _RBX->lastfWeaponReloadPosFrac = _RBX->fWeaponPosFrac;
  _RBX->lastfOffhandPosFrac = _RBX->fOffhandPosFrac;
  v38 = BG_ShowViewModelInDualFOV(&r_weapon, v13);
  __asm
  {
    vmovaps xmm8, [rsp+0F8h+var_48]
    vmovaps xmm6, [rsp+0F8h+var_28]
  }
  if ( !v38 && _RBX->dualViewScope != v23 )
    _RBX->dualViewScopeRefreshDobj = 1;
  __asm
  {
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm11; val
  }
  _RBX->dualViewScope = v23;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm11, [rsp+0F8h+var_78]
    vmovaps xmm7, [rsp+0F8h+var_38]
    vmovss  dword ptr [rbx+69C0h], xmm0
  }
}

/*
==============
CG_FetchScreenSpaceScopeBoundingCircle
==============
*/
bool CG_FetchScreenSpaceScopeBoundingCircle(LocalClientNum_t localClientNum, vec3_t *outBoundingCircle)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  const DObj *viewModelDObj; 
  const cpose_t *p_viewModelPose; 
  scr_string_t scope_top; 
  bool v16; 
  vec2_t *p_realViewportSize; 
  unsigned int refdefViewOrg_aab; 
  bool v38; 
  float outOrigin; 
  float outOrigina; 
  __int64 v41; 
  float v42; 
  float v43; 
  vec2_t *outScreenPos; 
  float tanHalfFovY; 
  float tanHalfFovX; 
  ClientFov result; 
  __int64 v48; 
  vec3_t pos; 
  vec2_t v50; 
  vec3_t v51; 
  tmat33_t<vec3_t> outTagMat; 

  v48 = -2i64;
  _R12 = outBoundingCircle;
  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( LocalClientGlobals == (cg_t *)-807496i64 )
    return 0;
  viewModelDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
  if ( !viewModelDObj )
    return 0;
  p_viewModelPose = &LocalClientGlobals->viewModelPose;
  if ( !CG_DObjGetWorldTagMatrix(&LocalClientGlobals->viewModelPose, viewModelDObj, scr_const.scope_center, &outTagMat, &pos) )
    return 0;
  scope_top = scr_const.scope_top;
  if ( !p_viewModelPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 116, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  if ( !CG_DObjGetLocalTagMatrix(p_viewModelPose, viewModelDObj, scope_top) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+10h]
    vaddss  xmm1, xmm0, dword ptr [rcx+7Ch]
    vmovss  dword ptr [rbp+57h+var_78], xmm1
    vmovss  xmm2, dword ptr [rax+14h]
    vaddss  xmm0, xmm2, dword ptr [rcx+80h]
    vmovss  dword ptr [rbp+57h+var_78+4], xmm0
    vmovss  xmm1, dword ptr [rax+18h]
    vaddss  xmm2, xmm1, dword ptr [rcx+84h]
    vmovss  dword ptr [rbp+57h+var_78+8], xmm2
  }
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_17;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v16 )
      __debugbreak();
LABEL_17:
    p_realViewportSize = &scrPlaceFull.realViewportSize;
    goto LABEL_18;
  }
  p_realViewportSize = &scrPlaceViewDisplay[v3].realViewportSize;
LABEL_18:
  if ( (unsigned int)v3 >= cgs_t::ms_allocatedCount )
  {
    LODWORD(v41) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v41, cgs_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cgs_t::ms_cgsArray[v3] )
  {
    LODWORD(outScreenPos) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", outScreenPos) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
  {
    LODWORD(outScreenPos) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", outScreenPos) )
      __debugbreak();
  }
  _RDI = cgs_t::ms_cgsArray[v3];
  _RAX = CG_GetViewFovBySpace(&result, (const LocalClientNum_t)v3, CG_FovSpace_DepthHack, 0);
  __asm { vmovsd  xmm2, qword ptr [rax] }
  result.baseFovAdjustment = _RAX->baseFovAdjustment;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+18h]; viewAspect
    vmovaps xmm0, xmm2; fovdeg_x
    vmovsd  qword ptr [rbp+57h+result.finalFov], xmm2
  }
  TanHalfAngles(*(float *)&_XMM0, *(float *)&_XMM1, &tanHalfFovX, &tanHalfFovY);
  if ( v5 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = v5->refdef.view.refdefViewOrg_aab;
  if ( v5 == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(result.finalFov) = LODWORD(v5->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26936)) + 2));
  LODWORD(result.baseFov) = LODWORD(v5->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26940)) + 2));
  LODWORD(result.baseFovAdjustment) = LODWORD(v5->refdef.view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26944)) + 2));
  __asm
  {
    vmovss  xmm0, [rbp+57h+tanHalfFovY]
    vmovss  [rsp+0F0h+var_C8], xmm0
    vmovss  xmm1, [rbp+57h+tanHalfFovX]
    vmovss  dword ptr [rsp+0F0h+outOrigin], xmm1
  }
  ProjectPositionToScreen(&pos, p_realViewportSize, (const vec3_t *)&result, &v5->refdef.view.axis, outOrigin, v42, &v50);
  __asm
  {
    vmovss  xmm0, [rbp+57h+tanHalfFovY]
    vmovss  [rsp+0F0h+var_C8], xmm0
    vmovss  xmm1, [rbp+57h+tanHalfFovX]
    vmovss  dword ptr [rsp+0F0h+outOrigin], xmm1
  }
  ProjectPositionToScreen(&v51, p_realViewportSize, (const vec3_t *)&result, &v5->refdef.view.axis, outOrigina, v43, (vec2_t *)&pos);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+57h+var_80]
    vmovss  xmm0, dword ptr [rbp+57h+pos]
    vsubss  xmm4, xmm0, xmm3
    vmovss  xmm2, dword ptr [rbp+57h+var_80+4]
    vmovss  xmm1, dword ptr [rbp+57h+pos+4]
    vsubss  xmm0, xmm1, xmm2
    vmovss  dword ptr [r12], xmm3
    vmovss  dword ptr [r12+4], xmm2
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [r12+8], xmm1
  }
  v38 = 1;
  memset(&result, 0, sizeof(result));
  return v38;
}

/*
==============
ProjectPositionToScreen
==============
*/
void ProjectPositionToScreen(const vec3_t *pos, const vec2_t *screenSize, const vec3_t *eyePos, const tmat33_t<vec3_t> *axis, float tanHalfFovX, float tanHalfFovY, vec2_t *outScreenPos)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm5, xmm1, dword ptr [r8+4]
  }
  _RBX = outScreenPos;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm4, xmm0, dword ptr [r8+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vblendvps xmm0, xmm1, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm0, xmm6, dword ptr [r9]
    vmulss  xmm5, xmm5, xmm1
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm10
    vmulss  xmm2, xmm5, dword ptr [r9+4]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [r9+0Ch]
    vmulss  xmm2, xmm5, dword ptr [r9+10h]
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm1, xmm4, dword ptr [r9+8]
    vaddss  xmm10, xmm3, xmm1
    vmulss  xmm1, xmm4, dword ptr [r9+14h]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm6, dword ptr [r9+18h]
    vaddss  xmm8, xmm3, xmm1
    vmulss  xmm1, xmm5, dword ptr [r9+1Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r9+20h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm10, xmm6
    vaddss  xmm4, xmm2, xmm1
    vdivss  xmm0, xmm8, [rsp+78h+tanHalfFovX]
    vdivss  xmm2, xmm7, xmm10
    vmulss  xmm1, xmm0, xmm2
    vsubss  xmm1, xmm7, xmm1
    vmulss  xmm0, xmm1, dword ptr [rdx]
    vdivss  xmm1, xmm4, [rsp+78h+tanHalfFovY]
    vmulss  xmm5, xmm0, cs:__real@3f000000
    vmulss  xmm2, xmm1, xmm2
    vsubss  xmm2, xmm7, xmm2
    vmovss  dword ptr [rbx], xmm5
    vmulss  xmm1, xmm2, dword ptr [rdx+4]
    vmulss  xmm3, xmm1, cs:__real@3f000000
    vmovss  dword ptr [rbx+4], xmm3
    vaddss  xmm2, xmm7, dword ptr [rdx]; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm5; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm2, xmm7, dword ptr [rdi+4]; max
    vmovss  xmm0, dword ptr [rbx+4]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm10, [rsp+78h+var_48]
    vmovss  dword ptr [rbx+4], xmm0
  }
}

