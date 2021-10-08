/*
==============
CG_PlayerState_InterpolateSlopeProperties
==============
*/

void __fastcall CG_PlayerState_InterpolateSlopeProperties(LocalClientNum_t localClientNum, const playerState_s *const ps)
{
  ?CG_PlayerState_InterpolateSlopeProperties@@YAXW4LocalClientNum_t@@QEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_CalcSlopeAnimBlendWeights
==============
*/

void __fastcall CG_CalcSlopeAnimBlendWeights(const cg_t *const cgameGlob, unsigned int walkAnimGroup, float *outBlendWeights, bool *outAnimMissing)
{
  ?CG_CalcSlopeAnimBlendWeights@@YAXQEBVcg_t@@IQEAMQEA_N@Z(cgameGlob, walkAnimGroup, outBlendWeights, outAnimMissing);
}

/*
==============
CG_PlayerState_PMoveSlopeProperties
==============
*/

void __fastcall CG_PlayerState_PMoveSlopeProperties(LocalClientNum_t localClientNum, const pmove_t *const pm, const playerState_s *const ps)
{
  ?CG_PlayerState_PMoveSlopeProperties@@YAXW4LocalClientNum_t@@QEBVpmove_t@@QEBUplayerState_s@@@Z(localClientNum, pm, ps);
}

/*
==============
CG_UpdateSlopeAnimBlends
==============
*/

void __fastcall CG_UpdateSlopeAnimBlends(const LocalClientNum_t localClientNum, const vec3_t *velocity, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal)
{
  ?CG_UpdateSlopeAnimBlends@@YAXW4LocalClientNum_t@@AEBTvec3_t@@_N211@Z(localClientNum, velocity, isOnSlope, isOnStairs, entityUp, groundNormal);
}

/*
==============
CG_CalcSlopeAnimBlendWeights
==============
*/
void CG_CalcSlopeAnimBlendWeights(const cg_t *const cgameGlob, unsigned int walkAnimGroup, float *outBlendWeights, bool *outAnimMissing)
{
  __int64 v13; 
  bool v14; 
  bool v15; 
  __int64 p_weapFlags; 
  char v23; 
  __int64 v24; 
  char *v25; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBX = outBlendWeights;
  __asm { vmovaps xmmword ptr [rax-48h], xmm8 }
  _RDI = cgameGlob;
  __asm { vmovaps xmmword ptr [rax-58h], xmm9 }
  v13 = walkAnimGroup;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 59, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 60, ASSERT_TYPE_ASSERT, "(outBlendWeights)", (const char *)&queryFormat, "outBlendWeights") )
    __debugbreak();
  v14 = outAnimMissing == NULL;
  if ( !outAnimMissing )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 61, ASSERT_TYPE_ASSERT, "(outAnimMissing)", (const char *)&queryFormat, "outAnimMissing");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+6624h]
    vmovss  xmm9, dword ptr [rdi+6620h]
    vandps  xmm2, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3f800000
    vaddss  xmm3, xmm2, xmm0
    vcomiss xmm3, xmm7
  }
  if ( !v14 )
  {
    __asm
    {
      vdivss  xmm0, xmm7, xmm3
      vmulss  xmm8, xmm0, xmm8
      vmulss  xmm9, xmm0, xmm9
    }
  }
  if ( _RDI == (const cg_t *)-8i64 )
  {
    p_weapFlags = 1832i64;
    goto LABEL_17;
  }
  p_weapFlags = (__int64)&_RDI->predictedPlayerState.weapCommon.weapFlags;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) )
    goto LABEL_20;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) )
  {
LABEL_17:
    if ( _RDI != (const cg_t *)-8i64 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu) )
      goto LABEL_19;
LABEL_20:
    v23 = 0;
    goto LABEL_21;
  }
LABEL_19:
  v23 = 1;
LABEL_21:
  if ( _RDI == (const cg_t *)-790760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 77, ASSERT_TYPE_ASSERT, "(animArrays)", (const char *)&queryFormat, "animArrays") )
    __debugbreak();
  v24 = 795736i64;
  if ( !v23 )
    v24 = 790760i64;
  v25 = (char *)_RDI + v24;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 79, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  *outAnimMissing = *(_QWORD *)&v25[8 * v13] == 0i64;
  outAnimMissing[1] = *(_QWORD *)&v25[8 * (unsigned int)(v13 + 1)] == 0i64;
  outAnimMissing[2] = *(_QWORD *)&v25[8 * (unsigned int)(v13 + 2)] == 0i64;
  outAnimMissing[3] = *(_QWORD *)&v25[8 * (unsigned int)(v13 + 3)] == 0i64;
  outAnimMissing[4] = *(_QWORD *)&v25[8 * (unsigned int)(v13 + 4)] == 0i64;
  *_RBX = 0.0;
  if ( outAnimMissing[1] )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm8; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  __asm { vmovss  dword ptr [rbx+4], xmm0 }
  if ( outAnimMissing[2] )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm8, cs:__xmm@80000000800000008000000080000000; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  __asm { vmovss  dword ptr [rbx+8], xmm0 }
  if ( outAnimMissing[3] )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm9; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm0
    vxorps  xmm1, xmm1, xmm1; min
  }
  if ( !outAnimMissing[4] )
  {
    __asm
    {
      vxorps  xmm0, xmm9, cs:__xmm@80000000800000008000000080000000; val
      vmovaps xmm2, xmm7; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm1, xmm0
      vmovss  xmm0, dword ptr [rbx+0Ch]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm1
    vsubss  xmm3, xmm7, dword ptr [rbx+4]
    vsubss  xmm4, xmm3, dword ptr [rbx+8]
    vsubss  xmm5, xmm4, xmm0
    vsubss  xmm0, xmm5, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+88h+var_38]
    vmovss  dword ptr [rbx], xmm0
  }
}

/*
==============
CG_PlayerState_InterpolateSlopeProperties
==============
*/
void CG_PlayerState_InterpolateSlopeProperties(LocalClientNum_t localClientNum, const playerState_s *const ps)
{
  bool v6; 
  bool v7; 
  CgHandler *Handler; 
  bool v10; 
  EffectiveStance EffectiveStance; 
  char v15; 
  bool v16; 
  bool v24; 
  bool v28; 
  int skipEntity; 
  double contentMask; 
  double contentMaska; 
  double contentMaskb; 
  double contentMaskc; 
  double locational; 
  double locationala; 
  double locationalb; 
  double locationalc; 
  vec3_t outUp; 
  Bounds bounds; 
  vec3_t groundNormal; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 
  WorldUpReferenceFrame v68; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !CG_GetLocalClientGlobals(localClientNum)->originInterpolated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 136, ASSERT_TYPE_ASSERT, "(cgameGlob->originInterpolated)", "%s\n\tCG_PlayerState_InterpolateSlopeProperties() should only be executed on an interpolated playerState.", "cgameGlob->originInterpolated") )
    __debugbreak();
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 7u);
  v7 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v68, ps, Handler);
  WorldUpReferenceFrame::GetUpVector(&v68, &outUp);
  groundNormal.v[2] = outUp.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+190h+outUp]
    vmovsd  qword ptr [rbp+90h+groundNormal], xmm0
  }
  v10 = !v7;
  if ( v7 || (v10 = !v6, v6) )
  {
    __asm
    {
      vmovss  xmm1, cs:boundsPad
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
      vmovaps [rsp+190h+var_30], xmm8
      vmovaps [rsp+190h+var_40], xmm10
    }
    if ( !v10 )
    {
      __asm
      {
        vmovsd  qword ptr [rsp+190h+locational], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+190h+contentMask], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 156, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( 0.0f )", "%s <= %s\n\t%g, %g", "boundsPad", "0.0f", contentMask, locational) )
        __debugbreak();
    }
    EffectiveStance = PM_GetEffectiveStance(ps);
    _RAX = BG_Suit_GetBounds(ps->suitIndex, EffectiveStance);
    __asm
    {
      vmovss  xmm10, cs:boundsPad
      vmovups xmm1, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+190h+bounds.midPoint], xmm1
      vmovsd  xmm0, qword ptr [rax+10h]
      vshufps xmm1, xmm1, xmm1, 0FFh
      vcomiss xmm10, xmm1
      vmovss  dword ptr [rsp+190h+bounds.halfSize], xmm1
      vmovsd  qword ptr [rbp+90h+bounds.halfSize+4], xmm0
    }
    if ( !(v15 | v16) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  qword ptr [rsp+190h+locational], xmm0
        vcvtss2sd xmm1, xmm10, xmm10
        vmovsd  qword ptr [rsp+190h+contentMask], xmm1
      }
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 160, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( bounds.halfSize[0] )", "%s <= %s\n\t%g, %g", "boundsPad", "bounds.halfSize[0]", contentMaska, locationala);
      v15 = 0;
      v16 = !v24;
      if ( v24 )
        __debugbreak();
      __asm { vmovss  xmm10, cs:boundsPad }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+90h+bounds.halfSize+4]
      vcomiss xmm10, xmm0
    }
    if ( !(v15 | v16) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  qword ptr [rsp+190h+locational], xmm0
        vcvtss2sd xmm1, xmm10, xmm10
        vmovsd  qword ptr [rsp+190h+contentMask], xmm1
      }
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 161, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( bounds.halfSize[1] )", "%s <= %s\n\t%g, %g", "boundsPad", "bounds.halfSize[1]", contentMaskb, locationalb);
      v15 = 0;
      v16 = !v28;
      if ( v28 )
        __debugbreak();
      __asm { vmovss  xmm10, cs:boundsPad }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+90h+bounds.halfSize+8]
      vcomiss xmm10, xmm3
    }
    if ( !(v15 | v16) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  qword ptr [rsp+190h+locational], xmm0
        vcvtss2sd xmm1, xmm10, xmm10
        vmovsd  qword ptr [rsp+190h+contentMask], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 162, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( bounds.halfSize[2] )", "%s <= %s\n\t%g, %g", "boundsPad", "bounds.halfSize[2]", contentMaskc, locationalc) )
        __debugbreak();
      __asm
      {
        vmovss  xmm10, cs:boundsPad
        vmovss  xmm3, dword ptr [rbp+90h+bounds.halfSize+8]
      }
    }
    __asm
    {
      vaddss  xmm1, xmm10, dword ptr [rsp+190h+bounds.halfSize]
      vaddss  xmm0, xmm10, dword ptr [rbp+90h+bounds.halfSize+4]
      vmulss  xmm2, xmm10, cs:__real@40000000
      vmovss  dword ptr [rsp+190h+bounds.halfSize], xmm1
      vmovss  dword ptr [rbp+90h+bounds.halfSize+4], xmm0
    }
    skipEntity = ps->clientNum;
    __asm
    {
      vaddss  xmm1, xmm3, xmm10
      vmovss  xmm3, cs:__real@3e800000
      vmulss  xmm0, xmm3, dword ptr [rsp+190h+outUp]
      vmovss  dword ptr [rbp+90h+bounds.halfSize+8], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+30h]
      vmulss  xmm0, xmm3, dword ptr [rsp+190h+outUp+4]
      vmovss  dword ptr [rbp+90h+start], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+34h]
      vmulss  xmm0, xmm3, dword ptr [rsp+190h+outUp+8]
      vsubss  xmm3, xmm2, xmm3
      vmulss  xmm2, xmm3, dword ptr [rsp+190h+outUp+4]
      vmovss  dword ptr [rbp+90h+start+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+38h]
      vmulss  xmm0, xmm3, dword ptr [rsp+190h+outUp]
      vmovss  dword ptr [rbp+90h+start+8], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+30h]
      vaddss  xmm0, xmm2, dword ptr [rdi+34h]
      vmovss  dword ptr [rbp+90h+end], xmm1
      vmulss  xmm1, xmm3, dword ptr [rsp+190h+outUp+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rbp+90h+end+8], xmm2
      vmovss  dword ptr [rbp+90h+end+4], xmm0
    }
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds, skipEntity, 1, 65553, 0, NULL, All);
    __asm
    {
      vmovaps xmm10, [rsp+190h+var_40]
      vmovaps xmm8, [rsp+190h+var_30]
    }
    if ( !results.allsolid && !results.startsolid )
    {
      __asm
      {
        vmovss  xmm0, [rbp+90h+results.fraction]
        vcomiss xmm0, cs:__real@3f800000
      }
    }
  }
  CG_UpdateSlopeAnimBlends(localClientNum, &ps->velocity, v6, v7, &outUp, &groundNormal);
}

/*
==============
CG_PlayerState_PMoveSlopeProperties
==============
*/
void CG_PlayerState_PMoveSlopeProperties(LocalClientNum_t localClientNum, const pmove_t *const pm, const playerState_s *const ps)
{
  bool v6; 
  bool v7; 
  CgHandler *Handler; 
  vec3_t *groundNormal; 
  double v32; 
  double v33; 
  double v34; 
  vec3_t v35; 
  vec3_t outUp; 
  WorldUpReferenceFrame v37; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 107, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 108, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 7u);
  v7 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v37, ps, Handler);
  WorldUpReferenceFrame::GetUpVector(&v37, &outUp);
  v35.v[2] = outUp.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+0C8h+outUp]
    vmovsd  qword ptr [rsp+0C8h+var_78], xmm0
  }
  if ( v6 || v7 )
  {
    _RAX = pm->ground;
    if ( _RAX )
    {
      if ( _RAX->groundPlane )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+14h]
          vmovss  xmm5, dword ptr [rax+10h]
          vmovss  xmm3, dword ptr [rax+18h]
          vmulss  xmm0, xmm0, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm1, xmm2, xmm1
          vsubss  xmm0, xmm1, cs:__real@3f800000
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm0, cs:__real@3b03126f
          vmovss  xmm4, dword ptr [rax+14h]
          vsqrtss xmm0, xmm1, xmm1
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+0C8h+var_88], xmm1
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+0C8h+var_90], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vmovsd  [rsp+0C8h+var_98], xmm4
          vcvtss2sd xmm2, xmm5, xmm5
          vmovsd  [rsp+0C8h+groundNormal], xmm2
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 121, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( pm->ground->trace.normal ) )", "(%g, %g, %g) len %g", *(double *)&groundNormal, v32, v33, v34) )
          __debugbreak();
        _RAX = pm->ground;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+10h]
          vmovss  dword ptr [rsp+0C8h+var_78], xmm0
          vmovss  xmm1, dword ptr [rax+14h]
          vmovss  dword ptr [rsp+0C8h+var_78+4], xmm1
          vmovss  xmm0, dword ptr [rax+18h]
          vmovss  dword ptr [rsp+0C8h+var_78+8], xmm0
        }
      }
    }
  }
  CG_UpdateSlopeAnimBlends(localClientNum, &ps->velocity, v6, v7, &outUp, &v35);
}

/*
==============
CG_UpdateSlopeAnimBlends
==============
*/
void CG_UpdateSlopeAnimBlends(const LocalClientNum_t localClientNum, const vec3_t *velocity, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal)
{
  const dvar_t *v16; 
  const dvar_t *v22; 
  const dvar_t *v24; 
  char v46; 
  char v47; 
  double v73; 
  double v74; 
  float outAscentRatio; 
  float outSteepnessRatio[3]; 

  _R14 = velocity;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( _RBX->frametime > 0 )
  {
    _RDI = DCONST_DVARFLT_player_slopestairs_blend_min_moveSpeed;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovaps [rsp+0C8h+var_58], xmm8
      vmovaps [rsp+0C8h+var_68], xmm9
    }
    if ( !DCONST_DVARFLT_player_slopestairs_blend_min_moveSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_min_moveSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm8, dword ptr [rdi+28h] }
    v16 = DCONST_DVARFLT_player_slopestairs_blend_max_moveSpeed;
    if ( !DCONST_DVARFLT_player_slopestairs_blend_max_moveSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_max_moveSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vmovsd  xmm6, cs:__real@3eb0c6f7a0b5ed8d
      vcvtss2sd xmm0, xmm8, xmm8
      vaddsd  xmm0, xmm0, xmm6
      vcvtsd2ss xmm1, xmm0, xmm0
      vmaxss  xmm7, xmm1, dword ptr [rdi+28h]
    }
    v22 = DCONST_DVARINT_player_slopestairs_blend_min_moveSpeed_blendTimeMs;
    if ( !DCONST_DVARINT_player_slopestairs_blend_min_moveSpeed_blendTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_min_moveSpeed_blendTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    _ER15 = v22->current.integer;
    v24 = DCONST_DVARINT_player_slopestairs_blend_max_moveSpeed_blendTimeMs;
    if ( !DCONST_DVARINT_player_slopestairs_blend_max_moveSpeed_blendTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_max_moveSpeed_blendTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    _EDI = v24->current.integer;
    __asm
    {
      vsubss  xmm9, xmm7, xmm8
      vcvtss2sd xmm0, xmm9, xmm9
      vcomisd xmm0, xmm6
    }
    if ( v46 | v47 )
    {
      __asm
      {
        vmovsd  [rsp+0C8h+var_88], xmm0
        vmovsd  xmm0, cs:__real@3eb0c6f7a0000000
        vmovsd  [rsp+0C8h+var_90], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 28, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( (maxSpeed - minSpeed) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "(maxSpeed - minSpeed)", v73, v74) )
        __debugbreak();
    }
    BG_Slope_CalcProperties(_R14, isOnSlope, isOnStairs, entityUp, groundNormal, &outAscentRatio, outSteepnessRatio);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm6, xmm6, xmm6
    }
    if ( isOnStairs )
    {
      __asm { vmovss  xmm7, [rsp+0C8h+var_78] }
    }
    else if ( isOnSlope )
    {
      __asm
      {
        vmovss  xmm0, [rsp+0C8h+var_78]
        vmulss  xmm6, xmm0, [rsp+0C8h+var_74]
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm3, dword ptr [r14+4]
      vmovss  xmm4, dword ptr [r14+8]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm3, xmm3, xmm2
      vsqrtss xmm0, xmm3, xmm3
      vsubss  xmm4, xmm0, xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovaps xmm2, xmm8; max
      vdivss  xmm0, xmm4, xmm9; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm9, [rsp+0C8h+var_68]
      vsubss  xmm2, xmm8, xmm0
      vmovd   xmm1, r15d
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm3, xmm2, xmm1
      vmovd   xmm1, dword ptr [rbx+65E4h]
      vmovd   xmm2, edi
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm3, xmm3, xmm0
      vcvtdq2ps xmm1, xmm1
      vdivss  xmm4, xmm3, xmm1
      vcomiss xmm4, xmm8
    }
    if ( !(v46 | v47) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+6620h]
        vdivss  xmm3, xmm8, xmm4
        vmulss  xmm0, xmm3, xmm1
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm7
        vaddss  xmm7, xmm2, xmm1
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+6620h], xmm7
      vmovaps xmm7, [rsp+0C8h+var_48]
    }
    if ( !(v46 | v47) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+6624h]
        vdivss  xmm3, xmm8, xmm4
        vmulss  xmm0, xmm3, xmm1
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm6
        vaddss  xmm6, xmm2, xmm1
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovss  dword ptr [rbx+6624h], xmm6
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
}

